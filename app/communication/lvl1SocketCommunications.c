#include "lvl1SocketCommunications.h"
#include "ProtocolConstants.h"
#include "../simulations/sensorValuesGenerator.h"
#include "../actionneurs/RelayModuleDrv.h"
#include "../capteurs/inclino-sensors/inclino-sensors.h"
#include "../capteurs/rotation-sensors/rotation-sensors.h"
#include "../user-defines.h"

#include <time.h>
#include <stdbool.h>

//                snprintf(to_send, 64, "/%.1f/%.1f/%.1f/%.1f/%.1f/", fleche_value, levage_value, porte_value, inclinoX_value, inclinoY_value);
//
//		printf("[  OK  ]: Waiting a new message\n");
//		ret = recv(client_sock_descr, &byteRx, 1, MSG_NOSIGNAL);
//		if (ret < 0) {
//			perror("[ERROR ]: Recv failed");
//			//exit_failure();
//			reconnect();
//		} else {
//                    socket_tx(to_send, 64);

void sendSensorsValues(void);
void processSetSensorValue(int relayNbPlus, int relayNbMoins, int sensorNb, double sensorValueToBe, unsigned char *toSendOnFinish, int length);

int ackReceived = 0;
char to_send[64] = {'\0'};

void messageFromLvl0(const unsigned char *data, unsigned int length) {
    
    int i;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    unsigned char id;
    unsigned char arg;
    unsigned char state;
    signed char value;
    int relayNbPlus, relayNbMoins, sensorNb;
     
    /*printf("%d-%d-%d %d:%d:%d ", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    printf("Rx: [");
    for (i = 0; i < length -1; i++) {
        printf("0x%x ", data[i]);
    }
    printf("0x%x]\n", data[length -1]);*/
    
    if (length < 1) {
         printf("Empty data received from Socket");
         return;
     }

     id = data[0];
     switch (id) {
         case ID_GET_VERSION:
            to_send[0] = ID_SEND_VERSION;
            snprintf(&to_send[1], 3, "%s", BENNETOUT_SERVER_VERSION);
            socket_tx(to_send, 3);
            break;

         case ID_USELESS:
             printf("%s", data);
             break;

         case ID_ACK:
             ackReceived = 1;
             break;

         case ID_GET_SENSORS_VALUES:
            sendSensorsValues();
            break;
            
         case ID_ACTION:
             if (length < 3) {
                printf("[ERROR ]: empty arg for id ID_ACTION");
                return;
             }
             arg = data[1];
             state = data[2];
             if (state != STATE_HIGH && state != STATE_LOW) {
                 printf("[ERROR ]: unknown state(%x0x) for id ID_ACTION", state);
                return;
             }
             relay_set_state(arg, state);
             break;
     }
}

int com_start_server(void) {
    int ret;
    
    ret = socket_server_start();
    if (ret != 0) {
        printf("[ERROR ]: Cannot launch the server\n"); 
        return ret;
    }
    
    socket_register_rx_callback(messageFromLvl0);
        
    return ret;
}

int com_stop_server(void) {
    socket_server_stop();
}

void sendSensorsValues(void) {
    
    //char randomvalues[MAX_RETURN_BUF_SIZE];
    //int length = getRandomValues(randomvalues);
    //int length = getRandomValuesLogic(randomvalues);

    float fleche_value = 0;
    float levage_value = 0;
    float porte_value = 0;
    float inclinoX_value = 0;
    float inclinoY_value = 0;
    float tamis_value = 0;
    int length;
        
    fleche_value = rot_get_value(CAPTEUR_FLECHE);
    levage_value = rot_get_value(CAPTEUR_LEVAGE);
    porte_value = rot_get_value(CAPTEUR_PORTE);
    tamis_value = rot_get_value(CAPTEUR_TAMIS);
    inclinoX_value = inclino_getX_value(INCLINO_X);
    inclinoY_value = inclino_getY_value(INCLINO_Y);

    //printf("fleche_value = %.1f\nlevage_value = %.1f\nporte_value = %.1f\nX = %.1f\nY = %.1f\n", fleche_value, levage_value, porte_value, inclinoX_value, inclinoY_value);
    snprintf(to_send, 64, "/%.1f/%.1f/%.1f/%.1f/%.1f/%.1f/", fleche_value, levage_value, porte_value, inclinoX_value, inclinoY_value, tamis_value);
    //printf("to send = %s\n", to_send);
    length = strlen(to_send);

    unsigned char toSend[TAB_MAX_SIZE];
    
    if (length > TAB_MAX_SIZE) {
        printf("[ERROR ]: sendSensorsValues(), length > TAB_MAX_SIZE\n");
        return;
    }
    
    toSend[0] = ID_SEND_SENSORS_VALUES;
    memcpy(&toSend[1], to_send, length);

    socket_tx(toSend, length +1);
}
