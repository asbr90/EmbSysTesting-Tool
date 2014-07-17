#include <iostream>
#include <sstream>
#include "GPIO_Driver.h"
#include "Connector.h"
#include "../../Middleware/Message.h"
#include <sstream>
#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

Connector::Connector(){

}

void Connector::Connector_loop()
{
    Subscriber *rpi_subscriber = new Subscriber("Raspberry PI", "localhost", 1883, 1, "EMBSYS",this);
    rpi_subscriber->async_Connect();
    connectFlag = true;
    this->process = RPI_CONNECTED;
    
    do{

    }while(connectFlag);//while disconnect message received


    /*Driver_Uart *uart = new Driver_Uart(DATASIZE7,false,false,BAUD9600);

    //S_driver sd;
    char sendChar = 't';
    char *sendMessage = "Hallo Welt";
    unsigned char c = 'A';

    if (wiringPiSetup () == -1)
    {
     fprintf (stdout, "Unable to start wiringPi: %s\n", strerror (errno)) ;
     return 1 ;
    }

    cout << "Driver Test\n";
    cout << "Setup wiringPI was seccussfull\n";
    cout << "Try UART connection\n";
    cout << "---------------------------------" <<endl;
   // spi->DUI_Initialization(sd);

  if( uart->DUI_Initialization()){
    uart->SendData(&sendChar);
    uart->SendDataMessage(sendMessage);
    uart->SendDataByte(c);
    uart->ReceiveData();

    //uart->ChangeSettings(DATASIZE7,false,false,BAUD9600);
  }*/

}

void Connector::Caller_Connect(int rc)
{
	cout << "Connectors connection success" <<endl;
}

void Connector::Caller_Disconnect(int rc)
{
}

void Connector::Caller_Message(const char* message)
{
	cout <<  "Received message: " <<message<<endl;
}
void Connector::Caller_Log(const char* log)
{
	
}


void Connector::Caller_Subscribe(const char* topic, int qos)
{

}

void Connector::Caller_Publish(const char* message, const char* topic)
{
	
}

void Connector::Caller_Unsubscribe()
{

}

void Connector::interpretMessage(const mosquitto_message* message)
{
    int i_messagetype,i_messageID,i_messageConnectedType,i_messageSetting,i_messageDeviceType;
    const char* c_messageDeviceType;
	const char *c_payload = (const char*)message->payload;
    string s_payload(c_payload);
	
    if(process >= RPI_CONNECTED){

        cout << "RPI interpretMessage "<<endl;
        i_messagetype = getmessageTypeAsInt(s_payload,1);   
        i_messageID = getmessageTypeAsInt(s_payload,2);
         
		
        if(i_messagetype == CONNECTION_DEVICE_MESSAGE){
            cout << "Connection device message "<<endl;
            process = RPI_GET_CONNECT_MESSAGE;
        }

        if(i_messagetype == DISCONNECT_DEVICE_MESSAGE){
            if(process >= RPI_GET_CONNECT_MESSAGE){
                process = RPI_GET_DISCONNECT_MESSAGE;
                connectFlag = false;
            }
        }

        if(i_messagetype == ERROR_DEVICE_MESSAGE){
            if(process >= RPI_GET_CONNECT_MESSAGE){
                process = RPI_GET_ERROR_MESSAGE;
            }
        }

        // use that in children classes
        if(i_messagetype == DATA_DEVICE_MESSAGE){

        }

        if(i_messagetype == CONFIG_DEVICE_MESSAGE){
            if(process >= RPI_GET_CONNECT_MESSAGE){
             // c_messageDeviceType  = getmessageTypeAsInt(s_payload,3);
              i_messageDeviceType = getmessageTypeAsInt(s_payload,3);
              i_messageSetting = getmessageTypeAsInt(s_payload,4);
              i_messageConnectedType = getmessageTypeAsInt(s_payload,5);

              if(i_messageConnectedType == SUBSCRIBER_CONNECTED){
                  if(i_messageDeviceType == UART_DEVICE){
					  stringstream convert;
					  convert << i_messageDeviceType;
					  c_messageDeviceType = convert.str().c_str();
                     
                      if(i_messageConnectedType == SUBSCRIBER_CONNECTED)
						mqttList.push_back((MQTTv3*)new Subscriber(c_messageDeviceType,"localhost", 1883, 1, "RPI/UART", new Driver_Uart()));      //push element to end of list
                  
					  if(i_messageConnectedType == PUBLISHER_CONNECTED)
						mqttList.push_back((MQTTv3*)new Publisher(c_messageDeviceType,"localhost", 1883, 1, "RPI/UART", new Driver_Uart()));      //push element to end of list
             
                  }
                  if(i_messageDeviceType == SPI_DEVICE)
                     mqttList.push_back ((MQTTv3*) new Subscriber(c_messageDeviceType,"localhost", 1883, 1, "RPI/SPI", new Driver_Uart()));   //TODO: new SPI instance
                  if(i_messageDeviceType == I2C_DEVICE)
                     mqttList.push_back((MQTTv3*)new Subscriber(c_messageDeviceType,"localhost", 1883, 1, "RPI/I2C", new Driver_Uart()));  // TODO: new I2C instance
              }
            }
        }
    }

}


int Connector::getmessageTypeAsInt(string s_payload, int number)
{
	string dummy_payload = s_payload;
	vector<string> vec;
	istringstream buf(dummy_payload);
	int i;
	string token;
	int i_type;
	
	for(token; getline(buf,token, ';');)
		vec.push_back(token);
		
	for(i=0;i<number;i++)
		i_type = atoi(vec[i].c_str());
	
	return i_type;	
	 
}



