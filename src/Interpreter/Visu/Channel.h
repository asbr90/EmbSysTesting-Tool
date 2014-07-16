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
    void interpretMessage(const mosquitto_message * message);
    void Caller_Connect(int rc) ;
    void Caller_Disconnect(int rc) ;
    void Caller_Message(const char* message);
    void Caller_Log(const char* log) ;
    const char* stoc(string payload);

private:
    datalogger* logger;
    const char* ChannelID;
    Subscriber *subscribeChannel;
};

#endif // CHANNEL_H
