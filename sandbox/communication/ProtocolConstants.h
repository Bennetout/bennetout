/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProtocolConstants.h
 * Author: monier
 *
 * Created on August 23, 2018, 1:50 PM
 */

#ifndef PROTOCOLCONSTANTS_H
#define PROTOCOLCONSTANTS_H

    #define TAB_MAX_SIZE                256

    // 8 KiloBytes = 8 Ko =  64000 bits = 64 kbits
    #define TRAME_LENGTH_MAX_SIZE          8000

    #define ERROR_EPIPE                    -2
    #define ERROR_UNKNOW                   -1
    #define NO_ERROR                       0

    #define STATUS_CONNECTED               1
    #define STATUS_NOT_CONNECTED           2

    #define ID_ACK                        0xFD
    #define ID_NACK                       0xFE

    #define ID_GET_SENSORS_VALUES         0xE0
    #define ID_SEND_SENSORS_VALUES        0xE1

    #define ID_USELESS                    0xD0
    
#endif /* PROTOCOLCONSTANTS_H */

