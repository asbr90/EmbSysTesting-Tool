#include "Channel.h"
#include <qwt_plot_curve.h>
#include <qwt_plot.h>
#include "tools.h"

Channel::Channel(int deviceType,datalogger *logger, const char* host){
    static int numberUART=1;
    static int numberI2C=1;
    static int numberSPI=1;

    this->ChannelID = ChannelID;
    this->logger = logger;

    if(deviceType == UART_DEVICE){
        string id = "UART";         //TODO: initialize topic automaticly
        cout << host <<endl;
        this->subscribeChannel = new Subscriber("UART",host, 1883, 1,"EMBSYS/UART" ,this);
        this->subscribeChannel->async_Connect();
        numberUART++;
    }
    //TODO: same processer for I2C and SPI

}

void Channel::interpretMessage(const mosquitto_message *message){
    cout << "interpret Channel "<<endl;
    char *s_payload = (char*)message->payload;
    logger->writeData(s_payload);
}

void Channel::Caller_Connect(int rc)
{

}

void Channel::Caller_Disconnect(int rc)
{

}

void Channel::Caller_Message(const char* message)
{

}

void Channel::Caller_Log(const char* log){

}

void Channel::Caller_Subscribe(const char* topic, int qos)
{

}

void Channel::Caller_Publish(const char* message, const char* topic)
{

}

void Channel::Caller_Unsubscribe()
{

}



const char* Channel::stoc(string payload){
    return payload.c_str();
}
