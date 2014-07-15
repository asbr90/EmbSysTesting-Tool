#include "Subscriber.h"
#include <stdio.h>

using namespace std;

Subscriber::Subscriber(const char *id, const char *host, int port, int qos, const char *topic, InterpreterInterface* interpreter):MQTTv3(id,host,port,qos,topic,interpreter){
    cout <<"Topic on Subscriber: "<< topic << endl;

}

int Subscriber::subscribeTopic(int *mid, const char *sub, int qos){

    this->mid = mid;
    this->topic = sub;
    this->qos = qos;

    subscribe(this->mid, sub, this->qos);
}

int Subscriber::unsubscribeTopic(){
    unsubscribe(NULL, topic);
}

void Subscriber::on_connect(int rc){
    cout << "MID: "<< this->mid <<endl;
    cout << "TOPIC: "<< this->topic << endl;
    cout << "QoS: " << this->qos <<endl;
    subscribe(NULL, topic, qos);
}


void Subscriber::on_message(const struct mosquitto_message *message){
    Interpreter->interpretMessage(message);
}
