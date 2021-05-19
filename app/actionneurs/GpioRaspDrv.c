#include "GpioRaspDrv.h"

#define LOW  0
#define HIGH 1

#define DIRECTION_MAX   35
#define VALUE_MAX       30
#define BUFFER_MAX 3

int GPIOExport(int pin) {
	char buffer[BUFFER_MAX];
	ssize_t bytes_written;
	int fd;

	fd = open("/sys/class/gpio/export", O_WRONLY);
	if (-1 == fd) {
		perror("Failed to open export for writing");
		return(-1);
	}

	bytes_written = snprintf(buffer, BUFFER_MAX, "%d", pin);
	write(fd, buffer, bytes_written);
	close(fd);
	return(0);
}

int GPIOUnexport(int pin) {
	char buffer[BUFFER_MAX];
	ssize_t bytes_written;
	int fd;

	fd = open("/sys/class/gpio/unexport", O_WRONLY);
	if (-1 == fd) {
		perror("Failed to open unexport for writing");
		return(-1);
	}

	bytes_written = snprintf(buffer, BUFFER_MAX, "%d", pin);
	write(fd, buffer, bytes_written);
	close(fd);
	return(0);
}

int GPIODirection(int pin, int dir) {
	static const char s_directions_str[]  = "in\0out";

	char path[DIRECTION_MAX];
	int fd;

	snprintf(path, DIRECTION_MAX, "/sys/class/gpio/gpio%d/direction", pin);
	fd = open(path, O_WRONLY);
	if (-1 == fd) {
		perror("Failed to open gpio direction for writing");
		return(-1);
	}

	if (-1 == write(fd, &s_directions_str[IN == dir ? 0 : 3], IN == dir ? 2 : 3)) {
		perror("Failed to set direction");
		return(-1);
	}

	close(fd);
	return(0);
}

int GPIORead(int pin) {
	char path[VALUE_MAX];
	char value_str[3];
	int fd;

	snprintf(path, VALUE_MAX, "/sys/class/gpio/gpio%d/value", pin);
	fd = open(path, O_RDONLY);
	if (-1 == fd) {
		perror("Failed to open gpio value for reading");
		return(-1);
	}

	if (-1 == read(fd, value_str, 3)) {
		perror("Failed to read value");
		return(-1);
	}

	close(fd);

	return(atoi(value_str));
}

int GPIOWrite(int pin, int value) {
	static const char s_values_str[] = "01";

	char path[VALUE_MAX];
	int fd;

	snprintf(path, VALUE_MAX, "/sys/class/gpio/gpio%d/value", pin);
	fd = open(path, O_WRONLY);
	if (-1 == fd) {
		perror("Failed to open gpio value for writing");
		return(-1);
	}

	if (1 != write(fd, &s_values_str[LOW == value ? 0 : 1], 1)) {
		perror("Failed to write value");
		return(-1);
	}

	close(fd);
	return(0);
}