/**
  * @author Artjom Siebert
  * @date 06.07.2014
  *
  * @brief
  *
 **/


#ifndef __SUBSCRIBER_H_
#define __SUBSCRIBER_H_
#include "MQTTv3.h"
#include "Message.h"

class Subscriber : public MQTTv3{
public:
    Subscriber(const char *id, const char *host, int port, int qos, const char* topic, InterpreterInterface* interpreter);
    int subscribeTopic(int *mid, const char *sub,int qos);
    int unsubscribeTopic();
    void on_connect(int rc);
    void on_message(const struct mosquitto_message *message);

   /* virtual void on_disconnect(int rc){return;}

    virtual void on_subscribe(int mid, int qos_count, const int *granted_qos){return;}
    virtual void on_unsubscribe(int mid){return;}
    virtual void on_log(int level, const char *str){return;}
    virtual void on_error(){return;}*/
};

#endif/*__SUBSCRIBER_H_*/


