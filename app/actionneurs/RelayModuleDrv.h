#ifndef RELAYMODULEDRV_H
#define RELAYMODULEDRV_H

#include <stdio.h>
#include <stdlib.h>
#include "GpioRaspDrv.h"

// Il faut mettre le nom de la GPIO et pas le numéro de la sortie physique de la Raspberry
#define RELAY_1     4
#define RELAY_2     17
#define RELAY_3     27
#define RELAY_4     23
#define RELAY_5     22
#define RELAY_6     24
#define RELAY_7     14
#define RELAY_8     15

#define RELAY_9     5
#define RELAY_10    6
#define RELAY_11    13
#define RELAY_12    19
#define RELAY_13    26
#define RELAY_14    21
#define RELAY_15    20
#define RELAY_16    16

#define RELAY_NB    16

#define STATE_HIGH  0
#define STATE_LOW   1

int relay_init(void);

int relay_disable_all(void);

int relay_set_state(int relay_number, int state);

#endif /* RELAYMODULEDRV_H */

