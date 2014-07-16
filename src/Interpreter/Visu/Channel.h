#ifndef CHANNEL_H
#define CHANNEL_H
#include <iostream>
#include "datalogger.h"
#include "../../Middleware/Subscriber.h"
#include "../InterpreterInterface.h"
#include "tools.h"
using namespace std;

class Channel: public InterpreterInterface {

public:
    Channel(int deviceType,datalogger *logger, const char *host);
    void Caller_Connect(int rc);
    void Caller_Disconnect(int rc) ;
    void Caller_Message(const char* message);
    void Caller_Log(const char* log);
    void Caller_Subscribe(const char* topic, int qos) ;
    void Caller_Publish(const char* message, const char* topic) ;
    void Caller_Unsubscribe();
    void interpretMessage(const mosquitto_message* message);
    const char* stoc(string payload);

private:
    datalogger* logger;
    const char* ChannelID;
    Subscriber *subscribeChannel;
};

#endif // CHANNEL_H
