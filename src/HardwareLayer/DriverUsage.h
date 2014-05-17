/**
* Module:	DriverUsage.h
* Author:	Artjom Siebert
* Date:		14.05.2014
* 
* Description:
* This module defines the Interface between Middleware and the connection to Hardware (drivers). 
* Implement this Interface, if you develop new drivers. 
*/
#include "../Middleware/header/Middleware_Structs.h"
#include <wiringPi.h>

class DriverUsageInterface{
	public:
	/**
	 * @brief
	 * @param S_driver
	 * @return
	 */
	 virtual bool DUI_Initialization(S_driver) = 0;

	/**
	 * @brief
	 * @return
	 */
	 virtual bool SendData() = 0;
	 
	/**
	 * @brief
	 * @return
	 */
	 virtual R_data ReceiveData() = 0; 	 		
};
