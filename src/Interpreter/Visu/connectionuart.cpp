#include "connectionuart.h"
#include "ui_EmbSysVisu.h"
#include <iostream>
#include <string>
#include "tools.h"
#include <map>
using namespace std;

ConnectionUART::ConnectionUART(QWidget *parent) :  QWidget(parent){
    setupUi(this);
    connect(CancelBtn, SIGNAL (clicked()), this, SLOT(slotClose()));
    connect(ConnectBtn, SIGNAL (clicked()), this, SLOT(storeSettings()));

    connect(databitsCombobox, SIGNAL(currentIndexChanged(int)), this, SLOT(storeDataBits()));
    connect(parityComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(storeParityBit()));
    connect(baudCombobox, SIGNAL(currentIndexChanged(int)), this, SLOT(storeBaudrate()));
    connect(directionComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(storeDirection()));
    connect(delimiterText, SIGNAL(editingFinished()), this, SLOT(storeFileSettings()));
    connect(storagefilenameText, SIGNAL(editingFinished()), this, SLOT(storeFileSettings()));
    connect(columnsText, SIGNAL(editingFinished()), this, SLOT(storeFileSettings()));

    this->storeDataBits();
    this->storeBaudrate();
    this->storeDirection();
    this->storeParityBit();
    this->storeMQTT();
    this->storeFileSettings();
}

void ConnectionUART::slotClose(){
    close();
}

void ConnectionUART::storeFileSettings(){
    this->delimiter = delimiterText->text().toStdString();
    this->filename = storagefilenameText->text().toStdString();
    this->columns = columnsText->text().toInt();
}

void ConnectionUART::setList(list<Channel*> *channelList){
    this->channelList = channelList;
}

void ConnectionUART::setPublisher(Publisher *pub)
{
    this->pub = pub;
}

void ConnectionUART::storeMQTT(){
    this->mqttDirection = ActiveAsCombobox->currentIndex();

}

void ConnectionUART::storeSettings(){
    cout << "\nstoreSetting" << endl;
    //store the combobox values

    cout << "Data bits :    "       << databits         << endl;
    cout << "Parity bit :   "       << parityBit        << endl;
    cout << "Parity enable  :   "   << parityEnable     << endl;
    cout << "Baudrate   :   "       << baudrate         << endl;
    cout << "Direction  :   "       << dataDirection    << endl;
    cout << "Active as  :   "       << mqttDirection    << endl;
    //here create instance of interface for communicate beteween hardware and software

    Message *msg = new Message(1,CONNECTION_DEVICE_MESSAGE,UART_DEVICE);
    string s_msg = msg->connect_message();
    const char* c_msg = msg->stoc(s_msg);
    pub->publishMessage(c_msg);

    msg = new Message(1,CONFIG_DEVICE_MESSAGE,UART_DEVICE,mqttDirection);
    string s_settings = generateSettings(msg);
    cout << s_settings << endl;

    datalogger *logger = new datalogger(msg->stoc(delimiter), UART_DEVICE,  msg->stoc(filename), columns);
    pub->publishMessage(msg->stoc(msg->config_message(s_settings,mqttDirection)));
    channelList->push_back(new Channel(UART_DEVICE,logger));
    centralWidget->show();
   close();
}

void ConnectionUART::storeDataBits(){
    databits = databitsCombobox->currentText().toUInt();
}

void ConnectionUART::storeParityBit(){
    int parity = parityComboBox->currentIndex();
    parityBit = true;

    if(parity != 0){
        parityEnable = true;
        if(parity == 1)
            parityBit = true;
        else if(parity == 2)
            parityBit = false;
    }else
        parityEnable = false;
}

void ConnectionUART::storeBaudrate(){
    baudrate = baudCombobox->currentText().toULong();
}

void ConnectionUART::storeDirection(){
    int dir = directionComboBox->currentIndex();
    switch(dir){
    case DIR_TRANSMITTER:   dataDirection = DIR_TRANSMITTER; break;
    case DIR_RECEIVER:      dataDirection = DIR_RECEIVER; break;
    case DIR_Transceiver:   dataDirection = DIR_Transceiver; break;
    }
}

string ConnectionUART::generateSettings(Message *msg)
{
    string dbits =  NumberToString(databits);
    string parityBit = NumberToString(this->parityBit);
    string parityEnable = NumberToString(this->parityEnable);
    string baudrate = NumberToString(this->baudrate);
    string dataDirection = NumberToString(this->dataDirection);

    return ("{"+dbits+msg->delimiter+parityBit+msg->delimiter+parityEnable+msg->delimiter+baudrate+msg->delimiter+dataDirection+"}");
}


void ConnectionUART:: showPanels(QWidget* centralWidget){
    this->centralWidget = centralWidget;
}
