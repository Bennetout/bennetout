#ifndef SENSORVALUESGENERATOR_H
#define SENSORVALUESGENERATOR_H

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_RETURN_BUF_SIZE 50

int getRandomValues(char* buf);

int getRandomValuesLogic(char* buf);

#endif /* SENSORVALUESGENERATOR_H */