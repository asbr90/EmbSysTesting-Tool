#include <mosquittopp.h>
#include <string>
#include "../InterpreterInterface.h"
#include "../../Middleware/Subscriber.h"
#include "../../Middleware/Publisher.h"
#include "../../Middleware/Message.h"
#include <iostream>
#include <list>

#define RPI_CONNECTED               1
#define RPI_GET_CONNECT_MESSAGE     2
#define RPI_GET_CONFIG_MESSAGE      3
#define RPI_GET_ERROR_MESSAGE       4
#define RPI_GET_DATA_MESSAGE        5
#define RPI_GET_DISCONNECT_MESSAGE  6

class Connector: public InterpreterInterface
{
public:
   Connector();
   mosquitto_message convertToMessage(string data);
   string convertToData(const mosquitto_message*);
   void interpretMessage(const mosquitto_message *);
   void Connector_loop();

   bool connectFlag;
   int  process;
   list<MQTTv3> mqttList;
};
