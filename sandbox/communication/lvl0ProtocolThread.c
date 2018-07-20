#include "lvl0ProtocolThread.h"

#define STX 0x02
#define TRAME_LENGTH_MAX_SIZE 8000

// STX + length + id + checksum
#define WITHOUT_DATA_LENGTH 1 +2 +1 +4
#define CHECKSUM_LENGTH 4

#define INDEX_STX       0
#define INDEX_LENGTH    1
#define INDEX_ID        3
#define INDEX_DATA      4
    
static pthread_t thread_rx;
struct sockaddr_in server, client;
int sock_descr = -1, client_sock_descr = -1;
static int run = 1;

static void *thread_socket_rx(void);
static void reconnect(void);

int socket_init(void) {

    int ret;
    int reuseaddr_enable = 1;
    int size_sock;

    /**
     * AF_INET is IP version 4
     * SOCK_STREAM means connection oriented TCP protocol
     * 0 for no specific protocol, use IP protocol
     **/
    sock_descr = socket(AF_INET , SOCK_STREAM , 0);
    if (sock_descr < 0) {
        perror("[ERROR ]: Could not create socket");
		socket_close();
                return sock_descr;
	}
	printf("[  OK  ]: Socket endpoint created\n");

	/**
	 * Permits multiple AF_INET sockets to be bound to an identical
	 * socket address. Useful fos this programming example when relaunching
	 * the program many times
	 **/
	if (setsockopt(sock_descr, SOL_SOCKET, SO_REUSEADDR, &reuseaddr_enable,
			sizeof(reuseaddr_enable)) < 0) {
            perror("[ERROR ]: Setsockopt(SO_REUSEADDR) failed");
            return -1;
        }

	//server.sin_addr.s_addr = htonl(IP_ADDRESS);
	server.sin_addr.s_addr = inet_addr(IP_ADDRESS);
	/* AF_INET is IP version 4 */
        server.sin_family = AF_INET;
        server.sin_port = htons(PORT_NUMBER);

	if (bind(sock_descr, (struct sockaddr *)&server, sizeof(server)) < 0) {
		perror("[ERROR ]: Bind failed");
		socket_close();
                return -1;
	}
	printf("[  OK  ]: Address probing success\n");

	/* Maximum length of the pending connection queue = 1 */
	if (listen(sock_descr, 1) < 0) {
		perror("[ERROR ]: Listen failed");
		socket_close();
                return -1;
	}
	printf("[  OK  ]: Socket set as passive\n");
	printf("\tWaiting for incoming connection...\n");

	size_sock = sizeof(server);
	client_sock_descr = accept(sock_descr, (struct sockaddr *)&client,
			(socklen_t *)&size_sock);
	if (client_sock_descr < 0) {
		perror("[ERROR ]: Accept failed");
		socket_close();
                return -1;
	}

	printf("[  OK  ]: New connected socket created\n");
        
        return 0;
}

socket_rx_callback myRxCallback;
int socket_start_rx_thread(socket_rx_callback callback) {

	int ret;

        myRxCallback = callback;
	ret = pthread_create(&thread_rx, NULL, (void *)thread_socket_rx, NULL);
	if (ret != 0) {
		perror("Error creating thread: ");
		return -1;
	} else {
		printf("START THREAD rx \n");
	}
        
        return ret;
}

// TODO: wait pthread join
int socket_stop_rx_thread(void) {
    int ret = 0;
    
    run = 0;
    
    return ret;
}

int socket_tx(const char* data, unsigned int length) {

	char to_send[64] = {'\0'};
	int ret;

	ret = send(client_sock_descr, data, length, MSG_NOSIGNAL);
	if (ret < 0) {
		perror("[ERROR ]: Send failed");
		//exit_failure();
		reconnect();
	}
	printf("[  OK  ]: Message sent with success\n");
	memset(to_send, '\0', 64);
        
        return ret;
}

unsigned char readNextByte(void) {
    int ret;
    unsigned char byteRx;
    
    ret = recv(client_sock_descr, &byteRx, 1, MSG_NOSIGNAL);
    if (ret < 0) {
	perror("[ERROR ]: Recv failed");
        socket_stop_rx_thread();
	reconnect();
        return -1;
    }
    
    return byteRx;
}

float fleche_value = 0, levage_value = 0, porte_value = 0, inclinoX_value = 0, inclinoY_value = 0;
void *thread_socket_rx(void) {

    enum machine_state {WAIT_STX, GET_LENGTH, GET_ID, GET_DATA, VERIFY_CHECKSUM, FIRE_DATA};
    int state = WAIT_STX;

    unsigned char lengthLsb, lengthMsb;
    unsigned char id;
    int length;
    unsigned char value;
    int indexData;

    const char* forTest = "/10.2/23.6/36.5/5.3/5.3/";
    //char to_send[64] = {0};
    unsigned char* dataIn = NULL;
    unsigned char checksumByteArray[4] = {0};
    unsigned int checksumReceived;

    fleche_value ++;
    levage_value ++;
    porte_value ++;
    inclinoX_value ++;
    inclinoY_value ++;

    while (run) {

        switch (state) {
            case WAIT_STX:
                value = readNextByte();
                if (value == STX) {
                    state = GET_LENGTH;
                }
                break;

            case GET_LENGTH:
                value = readNextByte();
                lengthLsb = value;
                value = readNextByte();
                lengthMsb = value;
                length = lengthMsb * 256 + lengthLsb;
                if (length > TRAME_LENGTH_MAX_SIZE) {
                    state = WAIT_STX;
                    continue;
                }

                //dataIn = new byte[length + WITHOUT_DATA_LENGTH];
                dataIn = malloc((length + WITHOUT_DATA_LENGTH -4) * sizeof(char));
                if(dataIn == NULL) {
                    printf("[ERROR ]: malloc failed, dataIn = NULL");
                    return;
                }
                dataIn[INDEX_STX] = STX;
                dataIn[INDEX_LENGTH] = lengthLsb;
                dataIn[INDEX_LENGTH +1] = lengthMsb;
                state = GET_ID;
                break;

            case GET_ID:
                id = readNextByte();
                dataIn[INDEX_ID] = id;
                indexData = INDEX_DATA;
                state = GET_DATA;
                break;

            case GET_DATA:
                if (indexData >= (length + WITHOUT_DATA_LENGTH - CHECKSUM_LENGTH)) {
                    state = VERIFY_CHECKSUM;
                    continue;
                }

                value = readNextByte();
                dataIn[indexData++] = value;

                break;

            case VERIFY_CHECKSUM:
                checksumByteArray[0] = readNextByte();
                checksumByteArray[1] = readNextByte();
                checksumByteArray[2] = readNextByte();
                checksumByteArray[3] = readNextByte();
                checksumReceived = checksumByteArray[3]*256*256*256 +
                                        checksumByteArray[2]*256*256 +
                                        checksumByteArray[1]*256 +
                                        checksumByteArray[0];

                if(!verifyChecksum(dataIn, indexData, checksumReceived)) {
                    // Just not follow the corrupted message
                    state = WAIT_STX;
                } else {
                    state = FIRE_DATA;
                }
                break;

            case FIRE_DATA:
                myRxCallback(&dataIn[INDEX_DATA], length);
                free(dataIn);
                state = WAIT_STX;
                break;

            default:
                break;
        }
    }
}

static void reconnect(void) {
	int size_sock = sizeof(server);

	printf("\tWait a new connection\n");
	client_sock_descr = accept(sock_descr, (struct sockaddr *)&client,
			(socklen_t *)&size_sock);
	if (client_sock_descr < 0) {
		perror("[ERROR ]: Accept failed");
		socket_close();
	}
	printf("[  OK  ]: Reconnection to client success\n");
}

void socket_close(void) {
	if (client_sock_descr > 0)
		if (close(client_sock_descr) < 0)
			perror("[ERROR ]: Could not close socket");

	if (sock_descr > 0)
		if (close(sock_descr) < 0)
			perror("[ERROR ]: Could not close socket");

	printf("EXIT_FAILURE\n");
}

// ---------------------------- reverse --------------------------------

// Reverses (reflects) bits in a 32-bit word.
unsigned reverse(unsigned x) {
   x = ((x & 0x55555555) <<  1) | ((x >>  1) & 0x55555555);
   x = ((x & 0x33333333) <<  2) | ((x >>  2) & 0x33333333);
   x = ((x & 0x0F0F0F0F) <<  4) | ((x >>  4) & 0x0F0F0F0F);
   x = (x << 24) | ((x & 0xFF00) << 8) |
       ((x >> 8) & 0xFF00) | (x >> 24);
   return x;
}

// ----------------------------- crc32 --------------------------------

/* This is the basic CRC algorithm with no optimizations. It follows the
logic circuit as closely as possible. */

unsigned int crc32(unsigned char *message, int length) {
   int i, j;
   unsigned int byte, crc;
   int index = 0;
   
   i = 0;
   crc = 0xFFFFFFFF;
   while (index < length) {
      byte = message[i];            // Get next byte.
      byte = reverse(byte);         // 32-bit reversal.
      for (j = 0; j <= 7; j++) {    // Do eight times.
         if ((int)(crc ^ byte) < 0)
              crc = (crc << 1) ^ 0x04C11DB7;
         else crc = crc << 1;
         byte = byte << 1;          // Ready next msg bit.
      }
      i = i + 1;
      index++;
   }
   return reverse(~crc);
}

int verifyChecksum(char* data, int data_length, unsigned int checksum) {
    unsigned int expected;
    
    expected = crc32(data, data_length);
    
    if (expected == checksum)
        return 1;
    
    printf("[ERROR ]: Checksum ERROR, checksum=%x, expected=%x\n", checksum, expected);

    return 0;
}