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
#define TRAME_LENGTH_MAX_SIZE       8000

#define ERROR_EPIPE                 -2
#define ERROR_UNKNOW                -1
#define NO_ERROR                    0

#define STATUS_CONNECTED            1
#define STATUS_NOT_CONNECTED        2

#define ID_ACK                      0xFD
#define ID_NACK                     0xFE

#define ID_GET_SENSORS_VALUES       0xE0
#define ID_SEND_SENSORS_VALUES      0xE1
#define ID_ACTION                   0xE2

#define ID_USELESS                  0xD0

#define ID_GET_VERSION              0xB0
#define ID_SEND_VERSION             0xB1

#define ARG_ACTION_1                0x00
#define ARG_ACTION_2                0x01
#define ARG_ACTION_3                0x02
#define ARG_ACTION_4                0x03
#define ARG_ACTION_5                0x04
#define ARG_ACTION_6                0x05
#define ARG_ACTION_7                0x06
#define ARG_ACTION_8                0x07

#define ARG_PORTE                   0x01
#define ARG_FLECHE                  0x02
#define ARG_LEVAGE                  0x03

#endif /* PROTOCOLCONSTANTS_H */

