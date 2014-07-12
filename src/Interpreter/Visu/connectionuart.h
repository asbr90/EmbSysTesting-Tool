#ifndef CONNECTIONUART_H
#define CONNECTIONUART_H

#define DIR_TRANSMITTER 0
#define DIR_RECEIVER    1
#define DIR_Transceiver 2

/*MQTTv3 active as*/
#define SUBSCRIBER  1
#define PUBLISHER   2

#include "ui_ConnectionUART.h"
#include "Channel.h"

class ConnectionUART : public QWidget, public Ui::Form
{
    Q_OBJECT
public:
    explicit ConnectionUART(QWidget *parent = 0);

public:
   // Driver_Uart *uartDriver;
    unsigned int databits;
    bool parityBit;
    bool parityEnable;
    unsigned long baudrate;
    short dataDirection;
    int mqttDirection;

signals:
    
public slots:
    void slotClose();
    void storeSettings();
    void storeDataBits();
    void storeParityBit();
    void storeBaudrate();
    void storeDirection();
    void storeMQTT();
};

#endif // CONNECTIONUART_H
