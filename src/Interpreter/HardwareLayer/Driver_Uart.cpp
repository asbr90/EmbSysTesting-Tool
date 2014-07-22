/**
* @module:	Driver_Uart.cpp
* @author:	Artjom Siebert
* @date:	17.05.2014
*
* @brief:
*/

#include "Driver_Uart.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <wiringPi.h>

using namespace std;

void TX(void) { cout << "TX data" <<endl; }
void RX (void) { cout << "RX data" <<endl; }


int Driver_Uart::foo1(int a, int b)
{
	cout << a << "* " <<b << endl;
}
Driver_Uart::Driver_Uart(){
	
	wiringPiISR (14, INT_EDGE_BOTH, &TX);
	
	wiringPiISR (15, INT_EDGE_BOTH, &RX);


}

Driver_Uart::Driver_Uart(unsigned int cSize, bool parityEnable, bool parityOdd, unsigned long baudrate){
	ChangeSettings(cSize,parityEnable,parityOdd,baudrate);

}


void Driver_Uart::usefoo(){
	//(this->*_currentPtr)();
}
void Driver_Uart::seInterruptFunction(){
	/*_currentPtr = &Driver_Uart::RX;
	wiringPiISR (15, INT_EDGE_FALLING, (_currentPtr));*/
}
void Driver_Uart::transmitData(const char* data) {

}

const char* Driver_Uart::receiveData(){
return 0;
}

void Driver_Uart::Caller_Connect(int rc)
{
	
}

void Driver_Uart::Caller_Disconnect(int rc)
{
}

void Driver_Uart::Caller_Message(const char* message)
{
}
void Driver_Uart::Caller_Log(const char* log)
{
	
}


void Driver_Uart::Caller_Subscribe(const char* topic, int qos)
{

}

void Driver_Uart::Caller_Publish(const char* message, const char* topic)
{
	
}

void Driver_Uart::Caller_Unsubscribe()
{

}

void Driver_Uart::interpretMessage(const mosquitto_message* message)
{
	cout << "Driver interpreter" <<endl;
}
	

bool Driver_Uart::DUI_Initialization(){
	cout << "Initialize UART Port" << endl;

if ((fd = serialOpen ("/dev/ttyAMA0", 9600)) < 0)
  {
    fprintf (stderr, "Unable to open serial device: %s\n", strerror (errno)) ;
    return false;
  }else{
     cout << "Open serial Port /dev/ttyAMA0" << endl;
  }

return true;
}

bool Driver_Uart::SendData(char *s) {
 cout << "Send data char '" << *s  <<"'" << endl;
 if(fd != -1){
	serialPuts(fd, s);
 }
return true;
}

bool Driver_Uart::SendDataMessage(char *message) {
 cout << "Send data message '" << message  <<"'" << endl;
 if(fd != -1){
	serialPrintf(fd, message);

 }
return true;
}

bool Driver_Uart::SendDataByte(unsigned char c) {
 cout << "Send data message '" << c  <<"'" << endl;
 if(fd != -1){
	serialPutchar(fd, c);

 }
return true;
}
/*
void Driver_Uart::ReceiveData(){
	while(1){
		putchar(serialGetchar(fd));
		fflush(stdout);
	}
}
*/
void Driver_Uart::ChangeSettings(unsigned int cSize, bool parityEnable, bool parityOdd, unsigned long baudrate){

	//set settings in the structure
	UARTSettings.cSize = cSize;
	UARTSettings.parityEnable = parityEnable;
	UARTSettings.parityOdd = parityOdd;
	UARTSettings.baudrate = baudrate;

	if(tcgetattr(fd, &options) == 0){		//get terminal attributes
		cout << "Read settings..." <<endl;
		if(parityEnable)
			options.c_cflag |= PARENB;
		else
			options.c_cflag |= ~PARENB;

		if(parityOdd)
			options.c_cflag |= PARODD;
		else
			options.c_cflag |= ~PARODD;

		options.c_cflag |= dataSize[cSize];

		if(cfsetospeed(&options, baudconst[baudrate]) == 0)
			cout << "OutputSpeed set to: " << baudValue[cfgetospeed(&options)] <<endl;

		if(cfsetispeed(&options, baudconst[baudrate]) == 0)
			cout << "IutputSpeed set to: " << baudValue[cfgetispeed(&options)] <<endl;

		if(tcsetattr(fd, TCSANOW, &options)== 0)		//set terminal attributes
			cout << "Change settings and save" << endl;

	}else
		cout << "Can not read settings" << endl;
}

void Driver_Uart::getSettings(uart_settings *settings){
	settings = &UARTSettings;
}



