/**
  * @author Artjom Siebert
  * @date 06.07.2014
  *
  * @brief
  *
 **/

#ifndef __MQTTV3_H_
#define __MQTTV3_H_

#include <mosquittopp.h>
#include <string>
#include "../Interpreter/InterpreterInterface.h"

class MQTTv3 : public mosqpp::mosquittopp{

public:
    MQTTv3();
    MQTTv3(String BrokerAddress, itn BrokerPort,String HostID, String topic, int QoS);
    void initializeMQTTv3(String BrokerAddress, itn BrokerPort,String HostID, String topic, int QoS);
    void updateValue(const void *payload);
    int Async_Connect();
    int Sync_Connect();
    int Disconnect();
    int Reconnect();
    int setConnectCallback (void ((*on_connect)(struct mosquitto *, void *, int)));
    int setDisconnectCallback(void 	((*on_disconnect)(struct mosquitto *, void *, int)));
    int setMessageCallback( void((*on_message)(struct mosquitto *, void *, const struct mosquitto_message *)));
    int setLogCallback(void ((*on_unsubscribe)(struct mosquitto *, void *, int, const char *)));


private:
    String BrokerAddress;
    int BrokerPort;
    String topic;
    String HostID;
    int QoS;
    int keepalive;

    InterpreterInterface *Interpreter;

};

#endif /*MQTTV3_H_*/
