#include "mosquitto.h"
#include <mosquittopp.h>

#include <stdio.h>

int main(){

int major;
int minor;
int revision;
	mosquitto_lib_init();

	printf("Version: %d\n" ,mosquitto_lib_version(	&major,
	&minor,
	&revision	));

	printf("Major: %d\n",major);
	printf("Minor: %d\n",minor);
	printf("revision: %d\n",revision);

}
