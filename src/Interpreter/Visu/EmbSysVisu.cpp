#include "EmbSysVisu.h"
#include <qwt_plot_curve.h>
#include <qwt_plot.h>
#include <iostream>
using namespace std;


EmbSysVisu::EmbSysVisu(QMainWindow *parent) : QMainWindow(parent){
    setupUi(this);
    connect(actionQuit,SIGNAL (triggered()), this, SLOT(slotClose()));
    connect(actionUART, SIGNAL(triggered()), this, SLOT(newUART()));
    connect(connectBtn, SIGNAL(clicked()),this,SLOT(connectionHandler()));
    connect(disconnectBtn, SIGNAL(clicked()),this,SLOT(disconnectHandler()));

    disconnectBtn->setEnabled(false);
}

EmbSysVisu::~EmbSysVisu(){
    pub->disconnectFromBroker();
}


void EmbSysVisu::Caller_Connect(int rc)
{
    if(rc == 0)
        ConnectionState->setText("Connection: success");
    else if(rc == 1)
        ConnectionState->setText("Connection: unacceptable protocol version");
    else if(rc == 2)
        ConnectionState->setText("Connection: identifier rejected");
    else if(rc == 3)
        ConnectionState->setText("Connection: broker unavailable");
    else
        ConnectionState->setText("Connection: reserved for future use");

    disconnectBtn->setEnabled(true);
    connectBtn->setEnabled(false);
}

void EmbSysVisu::Caller_Disconnect(int rc)
{
    if(rc != 0)
        ConnectionState->setText("Connection: disconnect is unexpected");
    else
        ConnectionState->setText("Connection: disconnected");

    disconnectBtn->setEnabled(false);
    connectBtn->setEnabled(true);
}

void EmbSysVisu::Caller_Message(const char* message)
{
    cout << "Caller_Message EmbSysVisu: " << message <<endl;
}

void EmbSysVisu::Caller_Log(const char* log){

}


void EmbSysVisu::Caller_Subscribe(const char* topic, int qos)
{

}

void EmbSysVisu::Caller_Publish(const char* message, const char* topic)
{

}

void EmbSysVisu::Caller_Unsubscribe()
{

}

void EmbSysVisu::interpretMessage(const mosquitto_message* message)
{

    cout << "interpret Message EmbSysVisu: "<< (char*)message->payload  <<endl;
}

void EmbSysVisu::disconnectHandler()
{
    Channel *channel;
    list<Channel>::iterator i;
    pub->disconnectFromBroker();

    //close all connection in order to disconnect properly
    cout << "size: "<< channelList.size();
    for(std::list<Channel*>::iterator list_iter = channelList.begin();
        list_iter != channelList.end(); list_iter++)
    {
        channel = *list_iter;
        channel->Disconnect();
    }

}

void EmbSysVisu::connectionHandler()
{
    if(!port->text().isEmpty() && !qos->text().isEmpty() && !host->text().isEmpty()){
        this->ConnectorHost = host->text().toStdString().c_str();
        this->ConnectorPort = port->text().toInt();
        this->ConnectorTopic = "EMBSYS";
        int s_qos  = qos->text().toInt();
        this->pub = new Publisher("EmbSysVisu", ConnectorHost, ConnectorPort, s_qos, ConnectorTopic, this);
        pub->async_Connect();
    }
}


void EmbSysVisu::newUART(){
    uart = new ConnectionUART();
    uart->setEmbSysVisu(this);
    uart->setList(&channelList);
    uart->setPublisher(pub);
    uart->show();
}


void EmbSysVisu::slotClose(){
    pub->disconnectFromBroker();
    close();
}

