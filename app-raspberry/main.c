#include <errno.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include "leds/leds.h"
#include "inclino-sensors/inclino-sensors.h"
#include "rotation-sensors/rotation-sensors.h"

#define TRUE				1
#define FALSE				0

/* Use a private port for the programming example */
#define PORT_NUMBER			65000

//#define IP_ADDRESS			INADDR_ANY
#define IP_ADDRESS			"192.168.42.1"

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

static void print_message(struct bennetout_message msg)
{
	int i = 0;

	printf("\t[0x%x | 0x%x | 0x%x | ", msg.header, msg.command, msg.len);

	while (msg.payload[i] != TAIL && (i < MAX_LEN)) {
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
	int i = 0;
	int reuseaddr_enable = 1;
	int size_sock;
	struct sigaction saio;
	int current_state = STATE_READ;
	struct bennetout_message message_tx;
	struct bennetout_message message_rx;
	char message_rx_test[4] = {'\0'};
	char to_send[64] = {'\0'};

	float fleche_value = 0;
	float levage_value = 0;
	float porte_value = 0;
	float inclinoX_value = 0;
	float inclinoY_value = 0;

	/* Define interrupt handler */
	saio.sa_handler = interrupt_handler;
	sigemptyset(&saio.sa_mask);
	saio.sa_flags = 0;

	/* For ctrl^C interruption */
	sigaction(SIGINT, &saio, 0);

	system("modprobe mcp3422");
	system("echo mcp3424 0x68 > /sys/bus/i2c/devices/i2c-1/new_device");
	system("echo mcp3424 0x69 > /sys/bus/i2c/devices/i2c-1/new_device");

	/******************************************* INITIALISATIONS ***********************************************/
	led_init();
	inclino_init();
	rot_init();
	led_disable();
	/***************************************** FIN INITIALISATIONS *********************************************/

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

	while (run) {
		switch (current_state) {
		case STATE_READ:
			memset(&message_rx, 0, sizeof(message_rx));
			memset(message_rx_test, '\0', sizeof(message_rx_test));

			printf("[  OK  ]: Waiting a new message\n");
			ret = recv(client_sock_descr, message_rx_test, sizeof(message_rx_test), MSG_NOSIGNAL);
			if (ret < 0) {
				perror("[ERROR ]: Recv failed");
				//exit_failure();
				reconnect();
			} else {
				//printf("[  OK  ]: Message received with success ret = %d\n", ret);
				//print_message(message_rx);
				for(i = 0; i<ret; i++)
					printf("0x%x\n", message_rx_test[i]);
			}
			current_state = STATE_WRITE;

			break;
		case STATE_WRITE:

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

