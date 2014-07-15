#include "Channel.h"
#include <qwt_plot_curve.h>
#include <qwt_plot.h>
#include "tools.h"

Channel::Channel(int deviceType,datalogger *logger){
    static int numberUART=1;
    static int numberI2C=1;
    static int numberSPI=1;
    cout << "New Channel" << endl;
    this->ChannelID = ChannelID;
    this->logger = logger;

    if(deviceType == UART_DEVICE){
        string id = "UART";         //TODO: initialize topic automaticly
        this->subscribeChannel = new Subscriber("UART","192.168.178.39", 1883, 1,"EMBSY/UART" ,this);
        this->subscribeChannel->async_Connect();
        numberUART++;
    }
    //TODO: same processer for I2C and SPI

}

mosquitto_message Channel::convertToMessage(string data){

}

string Channel::convertToData(const mosquitto_message*){

}

void Channel::interpretMessage(const mosquitto_message *message){
    cout << "interpret Message"<< endl;
    char *s_payload = (char*)message->payload;
    logger->writeData(s_payload);
}

const char* Channel::stoc(string payload){
    return payload.c_str();
}
