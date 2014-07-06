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

class InterpreterInterface{
    public:
    virtual mosquitto_message convertToMessage(String data) = 0;
    virtual String convertToData(const *mosquitto_message) = 0;

};
#endif /*__INTERPRETER_INTERFACE_*/
