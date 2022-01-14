#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "communication/lvl1SocketCommunications.h"
#include "capteurs/inclino-sensors/inclino-sensors.h"
#include "capteurs/rotation-sensors/rotation-sensors.h"
#include "actionneurs/RelayModuleDrv.h"

#define TRUE				1
#define FALSE				0

/* definition of signal handler */
static void interrupt_handler(int status);
static void adc_driver_init(void);
static void adc_driver_destroy(void);

static int run = 1;

int main(int argc, char *argv[]) {
	struct sigaction saio;

	/* Define interrupt handler */
	saio.sa_handler = interrupt_handler;
	sigemptyset(&saio.sa_mask);
	saio.sa_flags = 0;

    printf("Started bennetout sever version %s\r\n", BENNETOUT_SERVER_VERSION);

	/* For ctrl^C interruption */
	sigaction(SIGINT, &saio, 0);
              
        adc_driver_init();
        rot_init();
        inclino_init();
        if (relay_init() != 0) {
            printf("[ERROR ]: unable to initialize relays\n");
            return -1;
        }
        printf("[  OK  ]: Relays initializations success\n");
    
        if(com_start_server() == 0)
            while(run);
            
        com_stop_server();
        inclino_destroy();
        rot_destroy();
        adc_driver_destroy();
        
	return 0;
}

static void adc_driver_init(void) {
    
    system("modprobe mcp3422");
    system("echo mcp3424 0x68 > /sys/bus/i2c/devices/i2c-1/new_device");
    system("echo mcp3424 0x69 > /sys/bus/i2c/devices/i2c-1/new_device");
}

static void adc_driver_destroy(void) {
    system("echo 0x69 > /sys/bus/i2c/devices/i2c-1/delete_device");
    system("echo 0x68 > /sys/bus/i2c/devices/i2c-1/delete_device");
    system("modprobe -r mcp3422");
}

/* Interrupt signal handler */
static void interrupt_handler(int status) {
	if (status == SIGINT) {
            run = FALSE;
	}
}

