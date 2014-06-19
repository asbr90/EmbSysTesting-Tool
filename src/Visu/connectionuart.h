#ifndef CONNECTIONUART_H
#define CONNECTIONUART_H

#define DIR_TRANSMITTER 0
#define DIR_RECEIVER    1
#define DIR_Transceiver 2

#include "../HardwareLayer/DriverUsage.h"
#include "../HardwareLayer/GPIO_Driver.h"

#include "ui_ConnectionUART.h"

class ConnectionUART : public QWidget, public Ui::Form
{
    Q_OBJECT
public:
    explicit ConnectionUART(QWidget *parent = 0);

public:
    Driver_Uart *uartDriver;
    unsigned int databits;
    bool parityBit;
    bool parityEnable;
    unsigned long baudrate;
    short dataDirection;

signals:
    
public slots:
    void slotClose();
    void storeSettings();
    void storeDataBits();
    void storeParityBit();
    void storeBaudrate();
    void storeDirection();

};

#endif // CONNECTIONUART_H
