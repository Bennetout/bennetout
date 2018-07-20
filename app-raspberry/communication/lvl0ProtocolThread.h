#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <pthread.h>
#include <arpa/inet.h>
#include "../leds/leds.h"
#include "../inclino-sensors/inclino-sensors.h"
#include "../rotation-sensors/rotation-sensors.h"

/* Use a private port for the programming example */
#define PORT_NUMBER			65000

//#define IP_ADDRESS			INADDR_ANY
#define IP_ADDRESS			"192.168.42.1"

#define CMD_GET_SENSORS		1
#define CMD_SND_SENSORS		2

#define STATE_READ			1
#define STATE_WRITE			2

typedef void (*socket_rx_callback) (const char *data, unsigned int length);

int socket_init(void);

int socket_start_rx_thread(socket_rx_callback callback);

int socket_stop_rx_thread(void);

int socket_tx(const char* data, unsigned int length);
