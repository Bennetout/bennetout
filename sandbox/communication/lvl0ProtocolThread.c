#include "lvl0ProtocolThread.h"
#include "ProtocolConstants.h"
#include <errno.h>

#define STX 0x02
#define TRAME_LENGTH_MAX_SIZE 8000

// STX + length + id + checksum
#define WITHOUT_DATA_LENGTH 1 +2 +1 +4
#define CHECKSUM_LENGTH 4

#define INDEX_STX       0
#define INDEX_LENGTH    1
#define INDEX_ID        3
#define INDEX_DATA      4
    
static pthread_t thread_rx, thread_accept;
struct sockaddr_in server, client;
int sock_descr = -1, client_sock_descr = -1;
static int run = 0, accept_thread_run = 1;

static void *thread_socket_rx(void);
static void *thread_socket_accept(void);
static int reconnect(void);
unsigned int crc32(unsigned char *message, int length);
int verifyChecksum(char* data, int data_length, unsigned int checksum);
int start_rx_thread(void);
int stop_rx_thread(void);

int socket_server_start(void) {

    int ret;
    int reuseaddr_enable = 1;

    /**
     * AF_INET is IP version 4
     * SOCK_STREAM means connection oriented TCP protocol
     * 0 for no specific protocol, use IP protocol
     **/
    sock_descr = socket(AF_INET , SOCK_STREAM , 0);
    if (sock_descr < 0) {
        perror("[ERROR ]: Could not create socket");
        return sock_descr;
    }
    printf("[  OK  ]: Socket endpoint created\n");

    /**
     * Permits multiple AF_INET sockets to be bound to an identical
     * socket address.
     **/
    if (setsockopt(sock_descr, SOL_SOCKET, SO_REUSEADDR, &reuseaddr_enable,
                    sizeof(reuseaddr_enable)) < 0) {
        perror("[ERROR ]: Setsockopt(SO_REUSEADDR) failed");
        return -1;
    }

    // Accept and Recv timeouts
    /*struct timeval tv;
    tv.tv_sec = 5;
    tv.tv_usec = 0;
    if (setsockopt(sock_descr, SOL_SOCKET, SO_RCVTIMEO, (const char*)&tv, sizeof tv) < 0) {
        perror("[ERROR ]: Setsockopt(SO_RCVTIMEO) failed");
        return -1;
    }*/

    //server.sin_addr.s_addr = htonl(IP_ADDRESS);
    server.sin_addr.s_addr = inet_addr(IP_ADDRESS);
    /* AF_INET is IP version 4 */
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT_NUMBER);

    if (bind(sock_descr, (struct sockaddr *)&server, sizeof(server)) < 0) {
            perror("[ERROR ]: Bind failed");
            return -1;
    }
    printf("[  OK  ]: Address probing success\n");

    /* Maximum length of the pending connection queue = 1 */
    if (listen(sock_descr, 1) < 0) {
            perror("[ERROR ]: Listen failed");
            return -1;
    }
    printf("[  OK  ]: Socket set as passive\n");

    if (pthread_create(&thread_accept, NULL, (void *)thread_socket_accept, NULL) != 0) {
        perror("[ERROR ]: creating accept server thread: ");
        return -1;
    } else {
        printf("[  OK  ]: Server thread started\n"); 
    }

    return 0;
}

int start_rx_thread(void) {
    
   return pthread_create(&thread_rx, NULL, (void *)thread_socket_rx, NULL);
}

socket_rx_callback myRxCallback;
void socket_register_rx_callback(socket_rx_callback callback) {

    myRxCallback = callback;
}

// TODO: wait pthread join
int stop_rx_thread(void) {
    int ret = 0;
    
    if (run == 0)
        return 0;
    
    run = 0;
    
    ret = pthread_cancel(thread_rx);
    //ret = pthread_join(thread_rx, NULL);
    if (ret != 0) {
        perror("[ERROR ]: pthread_join: ");
    } else {
        printf("[  OK  ]: RX thread stopped\n"); 
    }

    return ret;
}

int socket_tx(const unsigned char* data, unsigned int length) {

	int ret, i;
        unsigned char toSend[TAB_MAX_SIZE];
        unsigned char checksumByteArray[4] = {0};

        unsigned char lengthLsb = length & 0xFF;
        unsigned char lengthMsb = (length >> 8) & 0xFF;

        unsigned int checksum;
        
        int INDEX_CHECKSUM = INDEX_DATA + length;
        int TOTAL_LENGTH = INDEX_CHECKSUM +4;
        
        toSend[INDEX_STX] = STX;
        toSend[INDEX_LENGTH] = lengthLsb;
        toSend[INDEX_LENGTH +1] = lengthMsb;
        toSend[INDEX_ID] = 1;
        memcpy(&toSend[INDEX_DATA], data, length);
        checksum = crc32(toSend, INDEX_CHECKSUM);

        checksumByteArray[0] = checksum & 0x000000FF;
        checksumByteArray[1] = (checksum >> 8) & 0x000000FF;
        checksumByteArray[2] = (checksum >> 16) & 0x000000FF;
        checksumByteArray[3] = (checksum >> 24) & 0x000000FF;
        memcpy(&toSend[INDEX_CHECKSUM], checksumByteArray, 4);

	ret = send(client_sock_descr, toSend, TOTAL_LENGTH, MSG_NOSIGNAL);
	if (ret < 0) {
		perror("[ERROR ]: Send failed");
		//exit_failure();
		reconnect();
	}
	/*printf("[  OK  ]: Message sent with success :[");
        for (i = 0; i < TOTAL_LENGTH -1; i++) {
            printf("0x%x ", toSend[i]);
        }
        printf("0x%x]\n", toSend[TOTAL_LENGTH -1]);*/
        
        return ret;
}

unsigned char readNextByte(void) {
    int ret;
    unsigned char byteRx;
    
    ret = recv(client_sock_descr, &byteRx, 1, MSG_NOSIGNAL);
    /*if (ret < 0) {
	perror("[ERROR ]: Recv failed");
        stop_rx_thread();
	reconnect();
        return -1;
    }*/
    
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

    //char to_send[64] = {0};
    unsigned char* dataIn = NULL;
    unsigned char checksumByteArray[4] = {0};
    unsigned int checksumReceived;

    fleche_value ++;
    levage_value ++;
    porte_value ++;
    inclinoX_value ++;
    inclinoY_value ++;

    run = 1;
    
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
                    printf("[ERROR ]: malloc failed, dataIn = NULL\n");
                    run = 0;
                    break;
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

void *thread_socket_accept(void) {

    int size_sock;

    size_sock = sizeof(server);
    
    while (accept_thread_run) {
        
        printf("\tWaiting for incoming connection...\n");
        
        client_sock_descr = accept(sock_descr, (struct sockaddr *)&client,
                (socklen_t *)&size_sock);
        
        if (client_sock_descr < 0) {
            perror("[ERROR ]: Accept failed"); 
            accept_thread_run = 0;
            return NULL;
        } else {
            printf("[  OK  ]: New connected socket created\n");

            if (stop_rx_thread() != 0) {
                accept_thread_run = 0;
                return NULL;
            }
            
            if (start_rx_thread() != 0) {
                perror("[ERROR ]: creating RX thread: ");
                accept_thread_run = 0;
                return NULL;
             } else {
                printf("[  OK  ]: RX thread started\n");
            }            
        }
    }
}

static int reconnect(void) {
    int size_sock = sizeof(server);

    printf("\tWait a new connection\n");
    client_sock_descr = accept(sock_descr, (struct sockaddr *)&client,
                    (socklen_t *)&size_sock);
    if (client_sock_descr < 0) {
            perror("[ERROR ]: Accept failed");
            socket_server_stop();
           return -1;
     }
    
    printf("[  OK  ]: Reconnection to client success\n");
        
    if (stop_rx_thread() != 0) {
        printf("[ERROR ]: Unable to stop RX thread");
        socket_server_stop();
        return -1;
    }
    
    if (start_rx_thread() != 0) {
        perror("[ERROR ]: creating RX thread: ");
        socket_server_stop();
        return -1;
    } else {
        printf("[  OK  ]: RX thread started\n");
    }
    
    return 0;
}

void socket_server_stop(void) {
    if (client_sock_descr > 0)
        if (close(client_sock_descr) < 0)
                perror("[ERROR ]: Could not close client socket");
        else
            printf("[  OK  ]: Client socket closed\n");

    if (sock_descr > 0)
        if (close(sock_descr) < 0)
                perror("[ERROR ]: Could not close socket");
        else
            printf("[  OK  ]: Server socket closed\n");
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