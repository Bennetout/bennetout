/*
 * client-loopback.c
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
#include <sys/socket.h>

/* Use a private port for the programming example */
#define PORT_NUMBER		65000

#define IP_ADDRESS		"127.0.0.1"

int sock_descr = -1;

static void exit_failure() {
	if (sock_descr)
		if (close(sock_descr) < 0)
			perror("[ERROR ]: Could not close socket");

	printf("EXIT_FAILURE\n");
	exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
	int ret;
	struct sockaddr_in server;
	char message[20];

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

	server.sin_addr.s_addr = inet_addr(IP_ADDRESS);
	/* AF_INET is IP version 4 */
    server.sin_family = AF_INET;
    server.sin_port = htons(PORT_NUMBER);

	if (connect(sock_descr, (struct sockaddr *)&server, sizeof(server)) < 0) {
		perror("[ERROR ]: Connect failed");
		exit_failure();
	}
	printf("[  OK  ]: Socket and address connected\n");

	printf("\t Waiting for new message...\n");

	/**
	 * Equivalent to read(sock_descr, message, sizeof(message));
	 * because last parameter (flags) is 0
	 **/	
	ret = recv(sock_descr, message, sizeof(message), 0);
	if (ret < 0) {
		perror("[ERROR ]: Recv failed");
		exit_failure();
	}
	printf("[  OK  ]: Message received with success\n\tmessage = %s\n", message);

	printf("\tNumber of bytes received = %d\n", ret);

	if (close(sock_descr) < 0)
		perror("[ERROR ]: Could not close socket");
	printf("[  OK  ]: Socket closed\n");

	return 0;
}
