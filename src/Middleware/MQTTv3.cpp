#include "MQTTv3.h"

MQTTv3::QTTv3(){

}

MQTTv3::MQTTv3(String BrokerAddress, itn BrokerPort,String HostID, String topic, int QoS){

}

void MQTTv3:: initializeMQTTv3(String BrokerAddress, itn BrokerPort,String HostID, String topic, int QoS){

}

void MQTTv3:: updateValue(const void *payload) {

}

int MQTTv3::Async_Connect(){

}

int MQTTv3::Sync_Connect(){

}

int MQTTv3::Disconnect(){

}

int MQTTv3::Reconnect(){

}

int MQTTv3::setConnectCallback (void ((*on_connect)(struct mosquitto *, void *, int))){

}

int MQTTv3::setDisconnectCallback(void 	((*on_disconnect)(struct mosquitto *, void *, int))){

}

int MQTTv3::setMessageCallback( void((*on_message)(struct mosquitto *, void *, const struct mosquitto_message *))){

}

int MQTTv3::setLogCallback(void ((*on_unsubscribe)(struct mosquitto *, void *, int, const char *))){

}
