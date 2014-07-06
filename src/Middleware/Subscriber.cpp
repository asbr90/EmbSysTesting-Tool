#include "Subscriber.h"

int Subscriber::ubscribeTopic(int *mid, const void *sub){

}

int Subscriber::unsubscribeTopic(int *mid, const void *sub){

}

int Subscriber::setSubscribeCallback(void((*on_publish)(struct mosquitto *, void *, int))){

}

int Subscriber::setSubscribeCallback(void((*on_subscribe)(struct mosquitto *, void *, int, int, const int *))){

}

int Subscriber::setUnsubscribeCallback(void((*on_unsubscribe)(struct mosquitto *, void *, int))){

}
