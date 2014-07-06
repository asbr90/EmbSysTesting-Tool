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

class Publisher : MQTTv3{
public:
    int publishMessage(int *mid, const void *payload, bool retain);
    int setPublishCallback(void((*on_publish)(struct mosquitto *, void *, int)));

};

#endif/*__PUBLISHER_H_*/


