#include <iostream>
#include "GPIO_Driver.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>

using namespace std; 

int main()
{
    Driver_Uart *uart = new Driver_Uart(DATASIZE7,false,false,BAUD9600);
    
    S_driver sd;
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
  
  if( uart->DUI_Initialization(sd)){
	uart->SendData(&sendChar);	
	uart->SendDataMessage(sendMessage);
	uart->SendDataByte(c);	   
	uart->ReceiveData();
	
	//uart->ChangeSettings(DATASIZE7,false,false,BAUD9600);
  }

}
