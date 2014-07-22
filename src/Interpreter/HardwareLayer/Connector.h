#include <mosquittopp.h>
#include <string>
#include "../InterpreterInterface.h"
#include "../../Middleware/Subscriber.h"
#include "../../Middleware/Publisher.h"
#include "../../Middleware/Message.h"
#include "../../Middleware/MQTTv3.h"
#include <iostream>
#include <list>
#include "Driver_Uart.h"

using namespace std;
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
   void Caller_Connect(int rc);
   void Caller_Disconnect(int rc);
   void Caller_Message(const char* message);
   void Caller_Log(const char* log) ;
   void Caller_Subscribe(const char* topic, int qos) ;
   void Caller_Publish(const char* message, const char* topic) ;
   void Caller_Unsubscribe();
   void interpretMessage(const mosquitto_message* message);
   void Connector_loop();
   int getmessageTypeAsInt(string s_payload, int number);
   void	ProcessMQTTSettings(string s_payload);
   bool connectFlag;
   int  process;
   list<MQTTv3*> mqttList;
   
private: /*need connection setting in order to obsorve*/   
	const char* topic;
	const char* qos;
	const char* host;
	const char* ChannelID;
	int ConnectedAs;
	
	Driver_Uart *uart;
};
