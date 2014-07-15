#include "MQTTv3.h"
#include <stdio.h>

MQTTv3::MQTTv3(const char *id, const char *host, int port, int qos, const char* topic,InterpreterInterface* interpreter): mosquittopp(id)
{
    mosqpp::lib_init();

    this->keepalive = 60;
    this->id = id;
    this->port = port;
    this->host = host;
    this->topic = topic;
    this->qos = qos;
    this->Interpreter = interpreter;
    cout << "Topic on MQTTv3 "<< this->topic << endl;
}


void MQTTv3::on_message(const struct mosquitto_message *message){
    printf("\t%s %s\n",message->topic, message->payload);
}

void MQTTv3::on_log(int level, const char *str){
    cout << str << endl;
}

int MQTTv3::async_Connect(){
   error_code = connect_async(host, port, keepalive);
   loop_start();
}

int MQTTv3::sync_Connect(){
    error_code= connect(host, port, keepalive);
}

int MQTTv3::disconnectFromBroker(void){
   error_code=disconnect();
}

int MQTTv3::reconnect(){

}

void MQTTv3::ErrorCode(int error_code){
    cout << "[";
    switch(error_code){
    case MOSQ_ERR_SUCCESS:
        cout << "MOSQ_ERR_SUCCESS";
        break;
    case MOSQ_ERR_INVAL:
        cout << "MOSQ_ERR_INVAL";
        break;
    case MOSQ_ERR_ERRNO:
        cout << "MOSQ_ERR_ERRNO";
        break;
    case MOSQ_ERR_UNKNOWN:
        cout << "MOSQ_ERR_UNKNOWN";
        break;
    case MOSQ_ERR_NOMEM:
        cout << "MOSQ_ERR_NOMEM" ;
        break;
    case MOSQ_ERR_PROTOCOL:
        cout << "MOSQ_ERR_PROTOCOL";
        break;
    case MOSQ_ERR_NO_CONN:
        cout << "MOSQ_ERR_NO_CONN";
        break;
    case MOSQ_ERR_CONN_REFUSED:
        cout << "MOSQ_ERR_CONN_REFUSED" ;
        break;
    case MOSQ_ERR_NOT_FOUND:
        cout << "MOSQ_ERR_NOT_FOUND";
        break;
    case MOSQ_ERR_CONN_LOST:
        cout << "MOSQ_ERR_CONN_LOST";
        break;
    case MOSQ_ERR_TLS:
        cout << "MOSQ_ERR_TLS" ;
        break;
    case MOSQ_ERR_PAYLOAD_SIZE:
        cout << "MOSQ_ERR_PAYLOAD_SIZE" ;
        break;
    case MOSQ_ERR_NOT_SUPPORTED:
        cout << "MOSQ_ERR_NOT_SUPPORTED";
        break;
    case MOSQ_ERR_AUTH:
        cout << "MOSQ_ERR_AUTH";
        break;
    case MOSQ_ERR_ACL_DENIED :
        cout << "MOSQ_ERR_ACL_DENIED";
        break;
    }
    cout << "]" <<endl;
}

MQTTv3::~MQTTv3(){
    loop_stop();
    mosqpp::lib_cleanup();
}

