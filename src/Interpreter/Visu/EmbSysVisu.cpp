#include "EmbSysVisu.h"
#include <qwt_plot_curve.h>
#include <qwt_plot.h>
#include <iostream>
using namespace std;

EmbSysVisu::EmbSysVisu(QMainWindow *parent) : QMainWindow(parent){
        setupUi(this);
        connect(actionQuit,SIGNAL (triggered()), this, SLOT(slotClose()));
        connect(actionUART, SIGNAL(triggered()), this, SLOT(newUART()));
        connect(connectBtn, SIGNAL(pressed()),this,SLOT(connectionHandler()));

        tabWidget->hide();

}

EmbSysVisu::~EmbSysVisu(){
}

mosquitto_message EmbSysVisu::convertToMessage(string data){

}

string EmbSysVisu::convertToData(const mosquitto_message*){

}

void EmbSysVisu::interpretMessage(const mosquitto_message *){

}

void EmbSysVisu::connectionHandler()
{

    int s_port = port->text().toInt();
    int s_qos  = qos->text().toInt();
    const char* s_host = host->text().toStdString().c_str();

    this->pub = new Publisher("EmbSysVisu", s_host, s_port, s_qos, "EMBSYS", this);
    pub->async_Connect();
}


void EmbSysVisu::newUART(){
    uart = new ConnectionUART();
    uart->setList(channelList);
    uart->setPublisher(pub);
    uart->showPanels(tabWidget);
    uart->show();
}

void EmbSysVisu::slotClose(){
    pub->disconnect();
    close();
}

