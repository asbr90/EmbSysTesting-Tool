#include "Publisher.h"
#include <iostream>
using namespace std;

Publisher::Publisher(const char *id, const char *host, int port, int qos, const char* topic,InterpreterInterface* interpreter) : MQTTv3(id,host,port,qos,topic, interpreter)
{
}

void Publisher::on_connect(int rc)
{
    Interpreter->Caller_Connect(rc);
}

void Publisher::on_disconnect(int rc)
{
    Interpreter->Caller_Disconnect(rc);
}

void Publisher::publishMessage(const char *message, const char *topic)
{
    Interpreter->Caller_Publish(message,topic);
    publish(NULL,this->topic,strlen(message), message,1,false);
}

void Publisher::publishMessage(const char *message)
{
   Interpreter->Caller_Publish(message,topic);
   publish(NULL,this->topic,strlen(message), message,1,false);
}

