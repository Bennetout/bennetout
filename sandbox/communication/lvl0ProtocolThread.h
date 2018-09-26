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

/* Use a private port for the programming example */
#define PORT_NUMBER			65000

//#define IP_ADDRESS			INADDR_ANY
#define IP_ADDRESS			"10.3.141.1"

#define CMD_GET_SENSORS		1
#define CMD_SND_SENSORS		2

#define STATE_READ			1
#define STATE_WRITE			2

typedef void (*socket_rx_callback) (const unsigned char *data, unsigned int length);

int socket_server_start(void);

void socket_server_stop(void);

void socket_register_rx_callback(socket_rx_callback callback);

int socket_tx(const unsigned char* data, unsigned int length);
