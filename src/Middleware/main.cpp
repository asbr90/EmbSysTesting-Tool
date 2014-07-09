#include "MQTTv3.h"
#include "Subscriber.h"
#include "Publisher.h"
#include <mosquittopp.h>
#include <string>
#include <stdio.h>

int main(){
     Subscriber *subMQTTV3;
     Publisher *pubMQTTV3;

     char key[] = "exit";
     char buffer[80];

    subMQTTV3 = new Subscriber("Visualization", "localhost", 1883, 1, "RPI/UART");
    pubMQTTV3 = new Publisher("Raspberry PI", "localhost", 1883, 2, "RPI/UART");

    subMQTTV3->async_Connect();
    pubMQTTV3->async_Connect();

   do {
        fflush (stdout);
        scanf ("%79s",buffer);
        pubMQTTV3->publishMessage(buffer);
    } while (strcmp (key,buffer) != 0);

    //subMQTTV3->unsubscribeTopic(NULL,NULL);
    subMQTTV3->disconnectFromBroker();
    pubMQTTV3->disconnectFromBroker();

    return 0;

}
