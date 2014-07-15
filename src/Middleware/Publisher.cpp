#include "Publisher.h"
#include <iostream>
using namespace std;

Publisher::Publisher(const char *id, const char *host, int port, int qos, const char* topic,InterpreterInterface* interpreter) : MQTTv3(id,host,port,qos,topic, interpreter){
    cout << "Topic on Publisher" <<endl;
}

void Publisher::on_connect(int rc){
    publish(NULL,this->topic);
}


void Publisher::publishMessage(const char *message, const char *topic){
    publish(NULL,this->topic,strlen(message), message,1,false);
}

void Publisher::publishMessage(const char *message){
   publish(NULL,this->topic,strlen(message), message,1,false);
}
