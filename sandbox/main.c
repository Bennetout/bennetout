#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "communication/lvl1SocketCommunications.h"

#define TRUE				1
#define FALSE				0

/* definition of signal handler */
static void interrupt_handler(int status);

static int run = 1;

int main(int argc, char *argv[]) {
	struct sigaction saio;


	/* Define interrupt handler */
	saio.sa_handler = interrupt_handler;
	sigemptyset(&saio.sa_mask);
	saio.sa_flags = 0;

	/* For ctrl^C interruption */
	sigaction(SIGINT, &saio, 0);

        if(com_start_server() == 0)
            while(run);
            
        com_stop_server();

	return 0;
}

/* Interrupt signal handler */
static void interrupt_handler(int status) {
	if (status == SIGINT) {
            run = FALSE;
	}
}

