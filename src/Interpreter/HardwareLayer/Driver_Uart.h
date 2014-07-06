/*
 * @author	Artjom Siebert
 * @date	17.05.2014
 * @brief
 * 
 * Driver_Uart.h:
 *
 * Copyright (c) 2012-2013 Gordon Henderson. <projects@drogon.net>
 ***********************************************************************
 * This file is part of wiringPi:
 *	https://projects.drogon.net/raspberry-pi/wiringpi/
 *
 *    wiringPi is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as 
 *    published by the Free Software Foundation, either version 3 of 
 *    the License, or (at your option) any later version.
 *
 *    wiringPi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General 
 *    Public License along with wiringPi.  
 *    If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************
 */
 
#ifndef __DRIVER_UART_
#define __DRIVER_UART_
#include "DriverUsage.h"
#include <wiringSerial.h>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string>

#define DATASIZE5	0
#define DATASIZE6	1
#define DATASIZE7	2
#define DATASIZE8	3

/**
 * Baudrate
 */
#define BAUD0		0 //disconnect
#define	BAUD50		1
#define	BAUD75		2
#define BAUD110		3 
#define BAUD134		4
#define BAUD150		5
#define BAUD200		6
#define BAUD300		7
#define BAUD600		8
#define BAUD1200	9
#define BAUD1800	10
#define BAUD2400	11
#define BAUD4800	12
#define BAUD9600	13
#define BAUD19200	14 
#define BAUD38400	15 
#define BAUD57600	16
#define BAUD115200	17
#define BAUD230400	16


static unsigned int dataSize[] = {CS5,CS6,CS7,CS8};
static speed_t baudconst[] = {B0,B50,B75,B110,B134,B150,B200,B300,B600,
							  B1200,B1800,B2400,B4800,B9600,B19200,B38400,
							  B57600,B115200,B230400};

static unsigned long baudValue[] = {0,50,75,110,134,150,200,300,600,
							  1200,1800,2400,4800,9600,19200,38400,
							  57600,115200,230400};


typedef struct {
	unsigned int cSize; 
	bool parityEnable; 
	bool parityOdd; 
	unsigned long baudrate;
}uart_settings;



class Driver_Uart: public DriverUsageInterface{
public:
	Driver_Uart(); 
	Driver_Uart(unsigned int cSize, bool parityEnable, bool parityOdd, unsigned long baudrate);
    bool DUI_Initialization() ;
	bool SendData(char*);
	R_data ReceiveData(); 
	bool SendDataMessage(char*);
	bool SendDataByte(unsigned char);
	void ChangeSettings(unsigned int , bool , bool , unsigned long );
	void getSettings(uart_settings *settings);
    mosquitto_message convertToMessage(String data);
    String convertToData(const *mosquitto_message);
	int fd ;					/*File descriptor*/
	struct termios options;		/*Advanced Serial Port Control*/
	uart_settings UARTSettings;
};
#endif /*__DRIVER_UART_*/

