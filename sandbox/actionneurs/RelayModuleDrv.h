#ifndef RELAYMODULEDRV_H
#define RELAYMODULEDRV_H

#include <stdio.h>
#include <stdlib.h>

#define RELAY_1     1
#define RELAY_2     2
#define RELAY_3     3
#define RELAY_4     4
#define RELAY_5     5
#define RELAY_6     6
#define RELAY_7     7
#define RELAY_8     8

#define STATE_HIGH  1
#define STATE_LOW   0

int relay_init(int relay_number);

int relay_set_state(int relay_number, int state);

#endif /* RELAYMODULEDRV_H */

