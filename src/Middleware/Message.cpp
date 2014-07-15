#include "Message.h"
#include <sstream>

Message::Message(int deviceID, int messageType, int deviceType, int typeOfConnectedDevice)
{
    this->deviceID = deviceID;
    this->messageType = messageType;
    this->deviceType = deviceType;
    this->typeOfConnectedDevice = typeOfConnectedDevice;
}


string Message::connect_message()
{
    stringstream strs_id, strs_type, strs_messageType;

    strs_id << this->deviceID;
    string s_deviceID = strs_id.str();

    strs_type << this->deviceType;
    string s_deviceType = strs_type.str();

    strs_messageType << this->messageType;
    string s_messageType = strs_messageType.str();

    return (s_messageType + delimiter + s_deviceID  + delimiter + s_deviceType + delimiter);
}


string  Message::config_message(string settings, int typeOfConnectedDevice)
{
    this->settings = settings;
    this->typeOfConnectedDevice = typeOfConnectedDevice;
    stringstream strs_id, strs_typeofConnectedDevice, strs_messageType, strs_settings,strs_type;

    strs_id << this->deviceID;
    string s_deviceID = strs_id.str();

    strs_type << this->deviceType;
    string s_deviceType = strs_type.str();

    strs_typeofConnectedDevice << this->typeOfConnectedDevice;
    string s_typeofConnectedDevice = strs_typeofConnectedDevice.str();

    strs_messageType << this->messageType;
    string s_messageType = strs_messageType.str();

    strs_settings << this->settings;
    string s_settings = strs_settings.str();

    return (s_messageType + delimiter + s_deviceID  + delimiter + s_deviceType + delimiter + s_settings + delimiter +s_typeofConnectedDevice + delimiter);
}

string  Message::disconnect_message()
{
    stringstream strs_id, strs_messageType;

    strs_id << this->deviceID;
    string s_deviceID = strs_id.str();

    strs_messageType << this->messageType;
    string s_messageType = strs_messageType.str();

    return (s_messageType + delimiter + s_deviceID  + delimiter);
}

string  Message::data_message(string data)
{
    this->data = data;
    stringstream strs_id, strs_data, strs_messageType;

    strs_id << this->deviceID;
    string s_deviceID = strs_id.str();

    strs_data << this->data;
    string s_data = strs_data.str();

    strs_messageType << this->messageType;
    string s_messageType = strs_messageType.str();

    return (s_messageType + delimiter + s_deviceID  + delimiter + s_data + delimiter);
}

string  Message::error_message(string error_code)
{
    this->error_code = error_code;
    stringstream strs_id, strs_errorCode, strs_messageType;

    strs_id << this->deviceID;
    string s_deviceID = strs_id.str();

    strs_errorCode << this->deviceType;
    string s_errorCode = strs_errorCode.str();

    strs_messageType << this->messageType;
    string s_messageType = strs_messageType.str();

    return (s_messageType + delimiter + s_deviceID  + delimiter + s_errorCode + delimiter);
}

const char* Message::stoc(string payload){
    return payload.c_str();
}
