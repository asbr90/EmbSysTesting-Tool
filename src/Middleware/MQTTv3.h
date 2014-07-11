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
#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include "../Interpreter/InterpreterInterface.h"

using namespace std;

class MQTTv3 : public mosqpp::mosquittopp
{

public:
    MQTTv3();
    MQTTv3(const char *id, const char *host, int port, int qos, const char* topic, InterpreterInterface* interpreter);
    ~MQTTv3();
    void initializeMQTTv3(const char* BrokerAddress, int BrokerPort,const char* HostID,const char* topic, int QoS);
    void updateValue(const void *payload);
    /**
      * @brief Asynchronous connection between client and broker.
      */
    int async_Connect();
    int sync_Connect();
    int disconnectFromBroker(void);
    int reconnect();
    void send_Message(const char * message);
   /* int setConnectCallback (void ((*on_connect)(struct mosquitto *, void *, int)));
    int setDisconnectCallback(void 	((*on_disconnect)(struct mosquitto *, void *, int)));
    int setMessageCallback( void((*on_message)(struct mosquitto *, void *, const struct mosquitto_message *)));
    int setLogCallback(void ((*on_unsubscribe)(struct mosquitto *, void *, int, const char *)));
    */
    void ErrorCode(int error_code);

protected:
    const char * host;
    int port;
    const char* topic;
    const char* id;
    int qos;
    int keepalive ;
    int error_code;
    int *mid;

public:
    virtual  void on_connect(int rc){return;}
    virtual void on_disconnect(int rc){return;}
    void on_message(const struct mosquitto_message *message);
    virtual  void on_subscribe(int mid, int qos_count, const int *granted_qos){return;}
    virtual  void on_unsubscribe(int mid){return;}
    void on_log(int level, const char *str);
    virtual void on_error(){return;}
    InterpreterInterface *Interpreter;

};

#endif /*MQTTV3_H_*/
