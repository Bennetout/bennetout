#include "inclino-sensors.h"
#include <errno.h>
#include "../libiio/iio.h"
#include <stdio.h>
#include <string.h>
#include <signal.h>

#define BUFFER_SIZE			10
#define MCP_68				"1-0068"
#define MCP_69				"1-0069"

static struct iio_context *ctx;

void inclino_init(void)
{
	/* Creation of an IIO context */
	ctx = iio_create_local_context();
	if (ctx == NULL) {
		perror("[ERROR ]: Failed to create local context");
	}
}

void inclino_destroy(void)
{
	/* Destroy the IIO context */
	iio_context_destroy(ctx);
}

float inclino_getX_value(int channel)
{
	struct iio_device *device_inclino;
	struct iio_channel *channel_inclino;
	int real_channel;
	char buffer[BUFFER_SIZE] = {0};

	float a = 0.010416666666667;
	float b = -10.416666666667;
	float result = 0;

	if (channel > 4) {
		device_inclino = iio_context_find_device(ctx, MCP_69);
		if (device_inclino == NULL)
			printf("[ERROR ]: Failed to load %s device\n", MCP_69);
		real_channel = channel - 5;
	} else {
		device_inclino = iio_context_find_device(ctx, MCP_68);
		if (device_inclino == NULL)
			printf("[ERROR ]: Failed to load %s device\n", MCP_68);
		real_channel = channel - 1;		
	}

	channel_inclino = iio_device_get_channel(device_inclino, real_channel);
	if (channel_inclino == NULL) {
		printf("[ERROR ]: Failed to load %d channel", channel);
	}

	if (iio_channel_attr_read(channel_inclino, "raw", buffer, BUFFER_SIZE) > 0) {
		result = a * (float)atoi(buffer) + b;

		//printf("x = %s\n", buffer);
		//printf("x = %.1f\n", result);
	}

	if (result > 10)
		result = 10;
	if (result < -10)
		result = -10;
	if (result > -1 && result < 1)
		result = 0;

	return result;
}

float inclino_getY_value(int channel)
{
	struct iio_device *device_inclino;
	struct iio_channel *channel_inclino;
	int real_channel;
	char buffer[BUFFER_SIZE] = {0};

	float a = 0.010416666666667;
	float b = -10.416666666667;
	float result = 0;

	if (channel > 4) {
		device_inclino = iio_context_find_device(ctx, MCP_69);
		if (device_inclino == NULL)
			printf("[ERROR ]: Failed to load %s device\n", MCP_69);
		real_channel = channel - 5;
	} else {
		device_inclino = iio_context_find_device(ctx, MCP_68);
		if (device_inclino == NULL)
			printf("[ERROR ]: Failed to load %s device\n", MCP_68);
		real_channel = channel - 1;		
	}

	channel_inclino = iio_device_get_channel(device_inclino, real_channel);
	if (channel_inclino == NULL) {
		printf("[ERROR ]: Failed to load %d channel", channel);
	}

	if (iio_channel_attr_read(channel_inclino, "raw", buffer, BUFFER_SIZE) > 0) {
		result = a * (float)atoi(buffer) + b;

		//printf("x = %s\n", buffer);
		//printf("y = %.1f\n", result);
	}

	if (result > 10)
		result = 10;
	if (result < -10)
		result = -10;
	if (result > -1 && result < 1)
		result = 0;

	return result;

}
