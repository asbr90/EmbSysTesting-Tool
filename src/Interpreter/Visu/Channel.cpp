#include "Channel.h"
#include <qwt_plot_curve.h>
#include <qwt_plot.h>
#include "tools.h"
#include <sstream>

int numberUART=1;
Channel::Channel(int deviceType,datalogger *logger, string host, const char* topic){
    static int numberI2C=1;
    static int numberSPI=1;

    this->logger = logger;

    if(deviceType == UART_DEVICE){
        stringstream ss;
        ss << numberUART;
        string id = string("UART") + string(ss.str());
        this->ChannelID = id.c_str();
        this->subscribeChannel = new Subscriber(ChannelID,  host.c_str(), 1883, 1, topic ,this);
        this->subscribeChannel->async_Connect();
        numberUART++;
    }
    //TODO: same processer for I2C and SPI
}

void Channel::interpretMessage(const mosquitto_message *message){
    char *s_payload = (char*)message->payload;
    logger->writeData(s_payload);
}

string Channel::getID(void)
{
    return ChannelID;
}

void Channel::Disconnect(void){
    subscribeChannel->disconnectFromBroker();
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
