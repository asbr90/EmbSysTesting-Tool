#ifndef CONNECTIONUART_H
#define CONNECTIONUART_H

#define DIR_TRANSMITTER 0
#define DIR_RECEIVER    1
#define DIR_Transceiver 2

/*MQTTv3 active as*/
#define PUBLISHER   0
#define SUBSCRIBER  1

#include "ui_ConnectionUART.h"
#include "Channel.h"
#include "../../Middleware/Publisher.h"
#include "../../Middleware/Message.h"
#include <list>
#include "Channel.h"
using namespace std;
class EmbSysVisu;

class ConnectionUART : public QWidget, public Ui::Form
{
    Q_OBJECT
public:
    explicit ConnectionUART(QWidget *parent = 0);
    void setPublisher(Publisher* pub);
    void setList(list<Channel*> *channelList);
    void setEmbSysVisu(EmbSysVisu* visu);
private:
    /**
      * @brief Generate string of registered settings.
      * @return Return string in form: {"databits";"parityBits";"parityEnable";"baudrate";"dataDirection"}.
      */
    string generateSettings(Message *msg);

public:
    unsigned int databits;
    bool parityBit;
    bool parityEnable;
    unsigned long baudrate;
    short dataDirection;
    int mqttDirection;
     string delimiter;
    int columns;
    const char* host;
    const char* topic;
    string filename;
    Publisher* pub;
    list<Channel*> *channelList;
    QTabWidget* tabwidget;
    EmbSysVisu* visu;
signals:
    
public slots:
    void slotClose();
    void storeSettings();
    void storeDataBits();
    void storeParityBit();
    void storeBaudrate();
    void storeDirection();
    void storeMQTT();
    void storeFileSettings();

};

#endif // CONNECTIONUART_H
