#ifndef RELAYMODULEDRV_H
#define RELAYMODULEDRV_H

#include <stdio.h>
#include <stdlib.h>
#include "GpioRaspDrv.h"

#define RELAY_1     4
#define RELAY_2     17
#define RELAY_3     27
#define RELAY_4     23
#define RELAY_5     22
#define RELAY_6     24
#define RELAY_7     14
#define RELAY_8     15

#define RELAY_NB    8

#define STATE_HIGH  0
#define STATE_LOW   1

int relay_init(void);

int relay_disable_all(void);

int relay_set_state(int relay_number, int state);

#endif /* RELAYMODULEDRV_H */

