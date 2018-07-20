#include "lvl0ProtocolThread.h"

static pthread_t thread_rx;
struct sockaddr_in server, client;
int sock_descr = -1, client_sock_descr = -1;
static int run = 1;

static void *thread_socket_rx(void);
static void reconnect(void);
static void exit_failure();

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
		exit_failure();
	}
	printf("[  OK  ]: Socket endpoint created\n");

	/**
	 * Permits multiple AF_INET sockets to be bound to an identical
	 * socket address. Useful fos this programming example when relaunching
	 * the program many times
	 **/
	if (setsockopt(sock_descr, SOL_SOCKET, SO_REUSEADDR, &reuseaddr_enable,
			sizeof(reuseaddr_enable)) < 0)
		perror("[ERROR ]: Setsockopt(SO_REUSEADDR) failed");

	//server.sin_addr.s_addr = htonl(IP_ADDRESS);
	server.sin_addr.s_addr = inet_addr(IP_ADDRESS);
	/* AF_INET is IP version 4 */
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT_NUMBER);

	if (bind(sock_descr, (struct sockaddr *)&server, sizeof(server)) < 0) {
		perror("[ERROR ]: Bind failed");
		exit_failure();
	}
	printf("[  OK  ]: Address probing success\n");

	/* Maximum length of the pending connection queue = 1 */
	if (listen(sock_descr, 1) < 0) {
		perror("[ERROR ]: Listen failed");
		exit_failure();
	}
	printf("[  OK  ]: Socket set as passive\n");
	printf("\tWaiting for incoming connection...\n");

	size_sock = sizeof(server);
	start_blinking();
	client_sock_descr = accept(sock_descr, (struct sockaddr *)&client,
			(socklen_t *)&size_sock);
	if (client_sock_descr < 0) {
		perror("[ERROR ]: Accept failed");
		exit_failure();
	}
	stop_blinking();
	led_enable();
	printf("[  OK  ]: New connected socket created\n");

}

int socket_start_rx_thread(socket_rx_callback callback) {

	int ret;

	ret = pthread_create(&thread_rx, NULL, (void *)thread_socket_rx, NULL);
	if (ret != 0) {
		perror("Error creating thread: ");
		return -1;
	} else {
		printf("START THREAD rx \n");
	}
}

int socket_stop_rx_thread(void) {
	run = 0;
}

int socket_tx(const char* data, unsigned int length) {

	char to_send[64] = {'\0'};
	int ret;

	float fleche_value = 0;
	float levage_value = 0;
	float porte_value = 0;
	float inclinoX_value = 0;
	float inclinoY_value = 0;

	fleche_value = rot_get_value(1);
	levage_value = rot_get_value(2);
	porte_value = rot_get_value(3);
	inclinoX_value = inclino_getX_value(4);
	inclinoY_value = inclino_getY_value(5);

	printf("fleche_value = %.1f\nlevage_value = %.1f\nporte_value = %.1f\nX = %.1f\nY = %.1f\n", fleche_value, levage_value, porte_value, inclinoX_value, inclinoY_value);
	snprintf(to_send, 64, "/%.1f/%.1f/%.1f/%.1f/%.1f/", fleche_value, levage_value, porte_value, inclinoX_value, inclinoY_value);
	printf("to send = %s\n", to_send);

	ret = send(client_sock_descr, to_send, 64, MSG_NOSIGNAL);
	if (ret < 0) {
		perror("[ERROR ]: Send failed");
		//exit_failure();
		reconnect();
	}
	printf("[  OK  ]: Message sent with success\n");
	memset(to_send, '\0', 64);
}

void *thread_socket_rx(void) {

	char byteRx = 0x00;
	int ret;

	while (run) {

		printf("[  OK  ]: Waiting a new message\n");
		ret = recv(client_sock_descr, &byteRx, 1, MSG_NOSIGNAL);
		if (ret < 0) {
			perror("[ERROR ]: Recv failed");
			//exit_failure();
			reconnect();
		}
	}
}

static void reconnect(void) {
	int size_sock = sizeof(server);

	printf("\tWait a new connection\n");
	start_blinking();
	client_sock_descr = accept(sock_descr, (struct sockaddr *)&client,
			(socklen_t *)&size_sock);
	if (client_sock_descr < 0) {
		perror("[ERROR ]: Accept failed");
		exit_failure();
	}
	stop_blinking();
	led_enable();
	printf("[  OK  ]: Reconnection to client success\n");
}

static void exit_failure() {
	if (client_sock_descr > 0)
		if (close(client_sock_descr) < 0)
			perror("[ERROR ]: Could not close socket");

	if (sock_descr > 0)
		if (close(sock_descr) < 0)
			perror("[ERROR ]: Could not close socket");

	printf("EXIT_FAILURE\n");
	exit(EXIT_FAILURE);
}
