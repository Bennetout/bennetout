#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "leds/leds.h"
#include "inclino-sensors/inclino-sensors.h"
#include "rotation-sensors/rotation-sensors.h"

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

	system("modprobe mcp3422");
	system("echo mcp3424 0x68 > /sys/bus/i2c/devices/i2c-1/new_device");
	system("echo mcp3424 0x69 > /sys/bus/i2c/devices/i2c-1/new_device");

	/******************************************* INITIALISATIONS ***********************************************/
	led_init();
	inclino_init();
	rot_init();
	led_disable();
	/***************************************** FIN INITIALISATIONS *********************************************/

	while(run);

	led_disable();	
	inclino_destroy();
	rot_destroy();
	return 0;
}

/* Interrupt signal handler */
static void interrupt_handler(int status) {
	if (status == SIGINT) {
		run = FALSE;
	}
}

