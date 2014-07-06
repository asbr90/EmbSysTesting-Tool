#include <string>
#include "mqtt3-client.h"
#include <stdio.h>
using namespace mosqpp;

#define ADDRESS     "tcp://localhost:1883"
#define CLIENTID    "ExampleClientPub"
#define TOPIC       "MQTT Examples"
#define PAYLOAD     "Hello World!"
#define QOS         1
#define TIMEOUT     10000L



mqtt_client::mqtt_client(const char *id, const char *host, int port) : mosquittopp(id)
{
    int keepalive = 60;

    /* Connect immediately. This could also be done by calling
     * mqtt_tempconv->connect(). */
    connect(host, port, keepalive);


}

void mqtt_client::on_connect(int rc){

    printf("Connect to Broker\n");
}

int main(int argc, char *argv[])
{
   class  mqtt_client *client;
    int rc;
    lib_init();

  //  client = mosquitto_new(CLIENTID,false,NULL);

    client = new mqtt_client(CLIENTID, "localhost", 1884);

    lib_cleanup();

    return 0;
}

