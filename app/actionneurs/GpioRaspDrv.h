/*
 * Gpio library for Raspberry Pi 3
 * From https://elinux.org/RPi_GPIO_Code_Samples#sysfs
 */

#ifndef GPIORASPDRV_H
#define GPIORASPDRV_H

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define IN  0
#define OUT 1

int GPIOExport(int pin);
int GPIOUnexport(int pin);
int GPIODirection(int pin, int dir);
int GPIORead(int pin);
int GPIOWrite(int pin, int value);

#endif /* GPIORASPDRV_H */