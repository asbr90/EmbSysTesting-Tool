/**
* Module:	DriverUsage.h
* Author:	Artjom Siebert
* Date:		14.05.2014
* 
* Description:
* This module defines the Interface between Middleware and the connection to Hardware (drivers). 
* Implement this Interface, if you develop new drivers. 
*/

#ifndef __DRIVER_USAGE_
#define __DRIVER_USAGE_

class DriverUsageInterface{
	public:
    virtual void transmitData(const char* data) = 0;
    virtual const char* receiveData() = 0;

};
#endif /*__DRIVER_USAGE_*/

