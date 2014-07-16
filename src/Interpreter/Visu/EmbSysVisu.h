#ifndef EMBSYS_H
#define EMBSYS_H

#include "ui_EmbSysVisu.h"
#include "connectionuart.h"
#include "../../Middleware/MQTTv3.h"
#include "../../Middleware/Message.h"
#include "../../Middleware/Subscriber.h"
#include "../../Middleware/Publisher.h"
#include "../InterpreterInterface.h"
#include <list>
class EmbSysVisu : public QMainWindow, public Ui::MainWindow, public InterpreterInterface{
    Q_OBJECT

public:
    EmbSysVisu (QMainWindow *parent = 0);
    ~EmbSysVisu();
    void Caller_Connect(int rc);
    void Caller_Disconnect(int rc);
    void Caller_Message(const char* message);
    void Caller_Log(const char* log) ;

private slots:
    void slotClose();
    void newUART();
    void connectionHandler();
    void disconnectHandler();

private:
    const char* ConnectorHost;
    const char* ConnectorTopic;
    int ConnectorPort;
    ConnectionUART *uart;
    Publisher *pub;
    list<Channel*> channelList;
};

#endif //EMBSYS_H
