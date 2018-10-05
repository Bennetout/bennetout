#include "RelayModuleDrv.h"

char relays[RELAY_NB] = {RELAY_1, RELAY_2, RELAY_3, RELAY_4, RELAY_5, RELAY_6, RELAY_7, RELAY_8};

int relay_init() {
    int i;
    
    for (i = 0; i < RELAY_NB; i++) {
        if (GPIOExport(relays[i]) != 0)
            return -1;
    }
    
    sleep(1);
    for (i = 0; i < RELAY_NB; i++) {
        if (GPIODirection(relays[i], OUT) != 0)
            return -1;
    }
    
    for (i = 0; i < RELAY_NB; i++) {
        if (GPIOWrite(relays[i], STATE_HIGH) != 0)
            return -1;
    }
    
    return 0;
}

int relay_set_state(int relay_number, int state) {
    
}