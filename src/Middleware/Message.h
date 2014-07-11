#ifndef __MESSAGE_H
#define __MESSAGE_H
#include <iostream>
#include <string>
using namespace std;

/*Message types*/
#define CONNECTION_DEVICE_MESSAGE   0
#define CONFIG_DEVICE_MESSAGE       1
#define DATA_DEVICE_MESSAGE         2
#define DISCONNECT_DEVICE_MESSAGE   3
#define ERROR_DEVICE_MESSAGE        4

/*Device types*/
#define NO_DEVICE_SELECTED          -1
#define UART_DEVICE                 0
#define SPI_DEVICE                  1
#define I2C_DEVICE                  2

/*Type of connected device*/
#define NO_DEVICE_TYPE              0
#define SUBSCRIBER                  1
#define PUBLISHER                   2

class Message {
public:
    /**
      * @brief New wrapper message. This message should sent to sub/pub.
      * @param
      */
    Message(int deviceID, int messageType, int deviceType=-1, int typeOfConnectedDevice = 0);
    string connect_message();
    string config_message(string, int typeOfConnectedDevice);
    string disconnect_message();
    string data_message(string);
    string error_message(string);

public:
    int deviceID;
    int messageType;
    int deviceType;
    int typeOfConnectedDevice;  /*that means the device is a subscriber or publisher*/
    string error_code;
    string data;
    string settings;
    const char* delimiter = ";";

};

#endif /*__MESSAGE_H*/
