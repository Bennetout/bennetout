/*
 * server.c
 *
 * Copyright (C) 2016, STMicroelectronics - All Rights Reserved
 * Author: MONIER <clement.monier@st.com> for STMicroelectronics.
 *
 * License type: GPLv2
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#include <errno.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>

/* Use a private port for the programming example */
#define PORT_NUMBER		65000

/* INADDR_ANY will bind the socket to all available interfaces
 * INADDR_LOOPBACK for binding with the loopback device */
#define IP_ADDRESS		INADDR_ANY
//#define IP_ADDRESS		"192.168.42.1"

static int sock_descr = -1, client_sock_descr = -1;

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

int main(int argc, char *argv[])
{
	int ret;
	int reuseaddr_enable = 1;
	struct sockaddr_in server, client;
	int size_sock;
	char *message = "hello world\n";

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
		perror("[ERROR ]: setsockopt(SO_REUSEADDR) failed");

	server.sin_addr.s_addr = htonl(IP_ADDRESS);
	//server.sin_addr.s_addr = inet_addr(IP_ADDRESS);
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
	client_sock_descr = accept(sock_descr, (struct sockaddr *)&client,
			(socklen_t *)&size_sock);
	if (client_sock_descr < 0) {
		perror("[ERROR ]: Accept failed");
		exit_failure();
	}
	printf("[  OK  ]: New connected socket created\n");

	while(1) {
	/**
	 * Equivalent to write(client_sock_descr, message, strlen(message));
	 * because last parameter (flags) is 0
	 **/
	ret = send(client_sock_descr, message, strlen(message), 0);
	if (ret < 0) {
		perror("[ERROR ]: Send failed");
		exit_failure();
	}
	printf("[  OK  ]: Message sent with success\n");
	printf("\tNumber of bytes sent = %d\n", ret);
	sleep(1);
	}
	if (close(client_sock_descr) < 0)
		perror("[ERROR ]: Could not close socket");

	if (close(sock_descr) < 0)
		perror("[ERROR ]: Could not close socket");

	printf("[  OK  ]: Sockets closed\n");
	return 0;
}
