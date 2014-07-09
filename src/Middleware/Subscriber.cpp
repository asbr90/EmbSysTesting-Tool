#include "Subscriber.h"
#include <stdio.h>

using namespace std;

Subscriber::Subscriber(const char *id, const char *host, int port, int qos, const char *topic):MQTTv3(id,host,port,qos,topic){

}

int Subscriber::subscribeTopic(int *mid, const char *sub, int qos){
    this->mid = mid;
    this->topic = sub;
    this->qos = qos;
    subscribe(this->mid, topic, this->qos);
}

int Subscriber::unsubscribeTopic(){
    unsubscribe(NULL, topic);
}

void Subscriber::on_connect(int rc){
    subscribe(NULL, topic, qos);
}
