/**
  * @author Artjom Siebert
  * @date 06.07.2014
  *
  * @brief
  *
 **/

#ifndef __INTERPRETER_INTERFACE_
#define __INTERPRETER_INTERFACE_

#include <mosquittopp.h>
#include <string>
#include <list>
using namespace std;


class InterpreterInterface{
    public:
    /**
      * @brief Caller function will be used if connection was successful.
      * @param CONNACK is Connection Acknowledge.The CONNACK message is
      *        the message sent by the server in response to a CONNECT request from a client.
      *        CONNACK is set 0 if connection is established.    
      * 		0 - success
      *         1 - connection refused (unacceptable protocol version)
      *         2 - connection refused (identifier rejected)
      *         3 - connection refused (broker unavailable)
      *         4-255 - reserved for future use
      */
    virtual void Caller_Connect(int rc) = 0;

    /**
      * @brief  Caller function will be used if client disconnect.
      * @param integer value indicating the reason for the disconnect.
      *        A value of 0 means the client has called mosquitto_disconnect.
      *        Any other value indicates that the disconnect is unexpected.
      */
    virtual void Caller_Disconnect(int rc) = 0;

    /**
      * @brief Caller function will be used if message recieved.
      * @param message get received message.
      */
    virtual void Caller_Message(const char* message)=0;

    /**
      * @brief Caller function will be used if logged state.
      * @param log get current log message of mqtt
      */
    virtual void Caller_Log(const char* log) =0;

    /**
      * @brief Caller function will be used if subscriber get message on his topic. This function is not pur virtual.
      *        That means that this function can be overridden. If not, an empty function called.
      * @param topic get the topic on which message received.
      * @param qos is the qos for this topic.
      */
    void Caller_Subscribe(const char* topic, int qos) {}

    /**
      * @brief Caller function will be used if publish message on topic. This function is not pur virtual.
      *        That means that this function can be overridden. If not, an empty function called.
      * @param message is the message that published.
      * @param topic is topic on which the message published
      */
    void Caller_Publish(const char* message, const char* topic) {}
	
     /**
      * @brief Caller function will be used if unsubscriber from his topic. This function is not pur virtual.
      *        That means that this function can be overridden. If not, an empty function called.
      */    	
     void Caller_Unsubscribe() {}

    /**
      * @brief This function should be used to interpret the incoming message. This function is not pur virtual.
      *        That means that this function can be overridden. If not, an empty function called.
      * @param mosquitto_message is structure with infromation about whole message. For more information about this see mosquitto.h.
      */
    void interpretMessage(const mosquitto_message*) {}
};
#endif /*__INTERPRETER_INTERFACE_*/
