/*
 * @author	Artjom Siebert
 * @date	17.05.2014
 * @brief
 * 
 * Driver_SPI.h:
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
 
#ifndef __DRIVER_SPI_
#define __DRIVER_SPI_
#include "DriverUsage.h"
#include "wiringPiSPI.h"
#define SPI_SETUP_ERROR	-1

class Driver_SPI: public DriverUsageInterface{
public:
	Driver_SPI(int channel, int speed); 
	Driver_SPI(S_driver); 
	bool DUI_Initialization(S_driver) ;
	bool SendData(char*);
	R_data ReceiveData(); 
private:
	int channel;
	int speed;
};
#endif /*__DRIVER_SPI_*/
