#include <iostream>
#include "GPIO_Driver.h"
#include <wiringPi.h>
using namespace std;  

int main() 
{
    Driver_I2C *i2c = new Driver_I2C();	
    S_driver sd;	 
	
    wiringPiSetup();
    cout << "Driver Test\n";
	cout << "Connect to I2C\n";
} 
