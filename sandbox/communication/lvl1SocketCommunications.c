#include "lvl1SocketCommunications.h"

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

void messageFromLvl0(const char *data, unsigned int length) {
    printf("%s\n", data);
}

int com_start_server(void) {
    int ret;
    
    ret = socket_init();
    if (ret != 0)
        return ret;
    
    ret = socket_start_rx_thread(messageFromLvl0);
    
    return ret;
}

int com_stop_server(void) {
    socket_stop_rx_thread();
    socket_close();
}
