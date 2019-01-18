#include "rotation-sensors.h"
#include <errno.h>
#include "../libiio/iio.h"
#include <stdio.h>
#include <string.h>
#include <signal.h>

#define BUFFER_SIZE			10
#define MCP_68				"1-0068"
#define MCP_69				"1-0069"

static struct iio_context *ctx;

void rot_init(void)
{
	/* Creation of an IIO context */
	ctx = iio_create_local_context();
	if (ctx == NULL) {
		perror("[ERROR ]: Failed to create IIO local context");
	}
}

void rot_destroy(void)
{
	/* Destroy the IIO context */
	iio_context_destroy(ctx);
}

float rot_get_value(int channel)
{
	struct iio_device *device_rot;
	struct iio_channel *channel_rot;
	int real_channel;
	char buffer[BUFFER_SIZE] = {0};

	float a = 0.071513706793802;
	float b = 3.611442193087;
	float result = 0;

	if (channel > 4) {
		device_rot = iio_context_find_device(ctx, MCP_69);
		if (device_rot == NULL)
			printf("[ERROR ]: Failed to load %s device\n", MCP_69);
		real_channel = channel - 5;
	} else {
		device_rot = iio_context_find_device(ctx, MCP_68);
		if (device_rot == NULL)
			printf("[ERROR ]: Failed to load %s device\n", MCP_68);
		real_channel = channel - 1;		
	}

	channel_rot = iio_device_get_channel(device_rot, real_channel);
	if (channel_rot == NULL) {
		printf("[ERROR ]: Failed to load %d channel", channel);
	}

	if (iio_channel_attr_read(channel_rot, "raw", buffer, BUFFER_SIZE) > 0) {
		result = a * (float)atoi(buffer) + b;			
		//printf("%s\n", buffer);
		//printf("angle = %.1f\n", result);
	}

	return result;
}
