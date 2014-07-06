#include <mosquittopp.h>

class mqtt_client : public mosqpp::mosquittopp{

public:
    mqtt_client(const char *id, const char *host, int por);
    void on_connect(int rc);
};
