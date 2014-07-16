/**
  * @author Artjom Siebert
  * @date 06.07.2014
  *
  * @brief
  *
 **/


#ifndef __PUBLISHER_H_
#define __PUBLISHER_H_
#include "MQTTv3.h"

class Publisher :public MQTTv3{
public:
    Publisher(const char *id, const char *host, int port, int qos, const char* topic, InterpreterInterface *interpreter);
    void publishMessage(const char *message);
    void publishMessage(const char *message, const char *topic);


protected:
    void on_connect(int rc);
    void on_disconnect(int rc);
   /* virtual void on_disconnect(int rc){return;}
    virtual void on_message(const struct mosquitto_message *message){return;}
    virtual  void on_subscribe(int mid, int qos_count, const int *granted_qos){return;}
    virtual  void on_unsubscribe(int mid){return;}
    virtual void on_log(int level, const char *str){return;}
    virtual void on_error(){return;}*/
};

#endif/*__PUBLISHER_H_*/


