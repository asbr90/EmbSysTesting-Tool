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

using namespace std;

class InterpreterInterface{
    public:
    virtual mosquitto_message convertToMessage(string data) = 0;
    virtual string convertToData(const mosquitto_message*) = 0;
};
#endif /*__INTERPRETER_INTERFACE_*/
