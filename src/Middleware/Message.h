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
    string config_message(string settings, int typeOfConnectedDevice);
    string disconnect_message();
    string data_message(string);
    string error_message(string);
    const char* stoc(string payload);

public:
    int deviceID;               /*every device gets his own id number*/
    int messageType;            /*type of message*/
    int deviceType;             /*type of devices. That are the types of sensors or other (end-)devices*/
    int typeOfConnectedDevice;  /*that means the device is a subscriber or publisher*/
    string error_code;          /*contain any error code*/
    string data;                /*contain the data values*/
    string settings;            /*contain settings for devices*/
    const char* delimiter = ";";

};

#endif /*__MESSAGE_H*/
