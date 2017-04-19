#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <wiringPi.h>
#include <pthread.h>
#include "leds.h"

/* GPIO22(15) from raspberry pinout */
#define GPIO_LED		3

static void *blink_led(void);

static char run = TRUE;

static pthread_t threadLed;

void led_init(void)
{
	wiringPiSetup();
	pinMode(GPIO_LED, OUTPUT);
}

void led_enable(void)
{
	digitalWrite(GPIO_LED, HIGH);
}

void led_disable(void)
{
	digitalWrite(GPIO_LED, LOW);
}

void start_blinking(void)
{
	int ret;

	run = TRUE;
	ret = pthread_create(&threadLed, NULL, (void *)blink_led, NULL);
	if (ret != 0)
		printf("[ERROR ]: Failed to create blinking led thread\n");
}

void stop_blinking(void)
{
	run = FALSE;
	pthread_join(threadLed, NULL);
}

static void *blink_led(void)
{
	while (run) {
		led_enable();
		usleep(200000);
		led_disable();
		usleep(200000);
	}
	pthread_exit(0);
}
