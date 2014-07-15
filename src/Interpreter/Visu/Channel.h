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
    Channel(int deviceType,datalogger *logger);
    mosquitto_message convertToMessage(string data);
    string convertToData(const mosquitto_message*);
    void interpretMessage(const mosquitto_message * message);
    const char* stoc(string payload);

private:
    datalogger* logger;
    const char* ChannelID;
    Subscriber *subscribeChannel;
};

#endif // CHANNEL_H
