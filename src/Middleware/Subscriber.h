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

class Subscriber : MQTTv3{
public:
    int subscribeTopic(int *mid, const void *sub);
    int unsubscribeTopic(int *mid, const void *sub);
    int setSubscribeCallback(void((*on_publish)(struct mosquitto *, void *, int)));
    int setSubscribeCallback(void((*on_subscribe)(struct mosquitto *, void *, int, int, const int *)));
    int setUnsubscribeCallback(void((*on_unsubscribe)(struct mosquitto *, void *, int)));

};

#endif/*__SUBSCRIBER_H_*/


