#include <errno.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include "leds/leds.h"
#include "inclino-sensors/inclino-sensors.h"

#define TRUE				1
#define FALSE				0

/* Use a private port for the programming example */
#define PORT_NUMBER			65000

#define IP_ADDRESS			INADDR_ANY

#define HEADER				0xAE
#define TAIL				0xBD
#define MAX_LEN				100

#define CMD_GET_SENSORS		1
#define CMD_SND_SENSORS		2

#define STATE_READ			1
#define STATE_WRITE			2

/* definition of signal handler */
static void interrupt_handler(int status);

int sock_descr = -1, client_sock_descr = -1;
struct sockaddr_in server, client;
int run = 1;

struct bennetout_message {
	char header;
	char command;
	char len;
	char payload[MAX_LEN];
};

static void exit_failure()
{
	if (client_sock_descr > 0)
		if (close(client_sock_descr) < 0)
			perror("[ERROR ]: Could not close socket");

	if (sock_descr > 0)
		if (close(sock_descr) < 0)
			perror("[ERROR ]: Could not close socket");

	printf("EXIT_FAILURE\n");
	exit(EXIT_FAILURE);
}

static void print_message (struct bennetout_message msg)
{
	int i = 0;

	printf("\t[0x%x | 0x%x | 0x%x | ", msg.header, msg.command, msg.len);

	while (msg.payload[i] != TAIL) {
		printf("0x%x", msg.payload[i++]);
	}

	if (msg.payload[0] == TAIL)
		printf("0x%x]\n", msg.payload[0]);
	else
		printf(" | 0x%x]\n", msg.payload[i]);
}

static void reconnect(void)
{
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

int main(int argc, char *argv[])
{
	int ret;
	int reuseaddr_enable = 1;
	int size_sock;
	struct sigaction saio;
	int current_state = STATE_READ;
	struct bennetout_message message;
	float rot_value = 0, inclinoX_value = 0, inclinoY_value = 0;

	/* Define interrupt handler */
	saio.sa_handler = interrupt_handler;
	sigemptyset(&saio.sa_mask);
	saio.sa_flags = 0;

	/* For ctrl^C interruption */
	sigaction(SIGINT, &saio, 0);

	led_init();
	inclino_init();
	rot_init();

	led_disable();

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

	server.sin_addr.s_addr = htonl(IP_ADDRESS);
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

	/***********TEST***************/
	rot_value = rot_get_value(1);
	inclinoX_value = inclino_getX_value(2);
	inclinoY_value = inclino_getY_value(3);
	/******************************/


	while (run) {
		switch (current_state) {
		case STATE_READ:
			ret = recv(client_sock_descr, &message, sizeof(message), MSG_NOSIGNAL);
			if (ret < 0) {
				perror("[ERROR ]: Recv failed");
				//exit_failure();
				reconnect();
			} else {
				printf("[  OK  ]: Message received with success\n");
				print_message(message);
			}
			current_state = STATE_WRITE;

			break;
		case STATE_WRITE:
			message.header = HEADER;
			message.command = CMD_SND_SENSORS;
			message.payload[0] = 0xAA;
			message.payload[1] = 0xBB;
			message.payload[2] = 0xCC;
			message.payload[3] = 0xDD;
			message.payload[4] = 0xEE;
			message.payload[5] = 0xFF;
			message.payload[6] = TAIL;
			message.len = 10;
			ret = send(client_sock_descr, &message, (message.len), MSG_NOSIGNAL);
			if (ret < 0) {
				perror("[ERROR ]: Send failed");
				//exit_failure();
				reconnect();
			}
			printf("[  OK  ]: Message sent with success\n");
			current_state = STATE_READ;

			break;
		}
	}

	if (close(client_sock_descr) < 0)
		perror("[ERROR ]: Could not close socket");

	if (close(sock_descr) < 0)
		perror("[ERROR ]: Could not close socket");

	led_disable();	
	printf("[  OK  ]: Sockets closed\n");
	inclino_destroy();
	rot_destroy();
	return 0;
}

/* Interrupt signal handler */
static void interrupt_handler(int status)
{
	if (status == SIGINT) {
		//exit_failure();
		led_disable();
		run = FALSE;
	}
}

