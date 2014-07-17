#include "Subscriber.h"
#include <stdio.h>

using namespace std;

Subscriber::Subscriber(const char *id, const char *host, int port, int qos, const char *topic, InterpreterInterface* interpreter):MQTTv3(id,host,port,qos,topic,interpreter)
{
    cout << "topic: "<< topic<<endl;
}

void Subscriber::subscribeTopic(int *mid, const char *sub, int qos)
{
    this->mid = mid;
    this->topic = sub;
    this->qos = qos;
    Interpreter->Caller_Subscribe(topic,qos);
    subscribe(this->mid, sub, this->qos);
}

void Subscriber::unsubscribeTopic()
{
    Interpreter->Caller_Unsubscribe();
    unsubscribe(NULL, topic);
}

void Subscriber::on_connect(int rc)
{
    cout << "MID: "<< this->mid <<endl;
    cout << "TOPIC: "<< topic << endl;
    cout << "QoS: " << this->qos <<endl;
    Interpreter->Caller_Connect(rc);
    subscribe(NULL, topic, qos);
}


void Subscriber::on_message(const struct mosquitto_message *message)
{
	cout << "on_message" <<endl;
    const char *s_payload = (char*)message->payload;
    Interpreter->interpretMessage(message);
    Interpreter->Caller_Message(s_payload);
}
