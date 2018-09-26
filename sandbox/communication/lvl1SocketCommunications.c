#include "lvl1SocketCommunications.h"
#include "ProtocolConstants.h"
#include "sensorValuesGenerator.h"
#include <time.h>

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

int ackReceived = 0;

void messageFromLvl0(const unsigned char *data, unsigned int length) {
    
    int i;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

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

     unsigned char id;
     unsigned char arg;

     id = data[0];
     switch (id) {
         case ID_USELESS:
             printf("%s", data);
             break;

         case ID_ACK:
             ackReceived = 1;
             break;

         case ID_GET_SENSORS_VALUES:
            sendSensorsValues();
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
    
    char randomvalues[MAX_RETURN_BUF_SIZE];
    //int length = getRandomValues(randomvalues);
    int length = getRandomValuesLogic(randomvalues);
    unsigned char toSend[TAB_MAX_SIZE];
    
    if (length > TAB_MAX_SIZE) {
        printf("[ERROR ]: sendSensorsValues(), length > TAB_MAX_SIZE\n");
        return;
    }
    
    toSend[0] = ID_SEND_SENSORS_VALUES;
    memcpy(&toSend[1], randomvalues, length);
    
    socket_tx(toSend, length +1);
}