#include "EmbSysVisu.h"
#include "../HardwareLayer/Driver_Uart.h"

#include <iostream>
using namespace std;

EmbSysVisu::EmbSysVisu(QMainWindow *parent) : QMainWindow(parent){
        setupUi(this);
        connect(actionQuit,SIGNAL (triggered()), this, SLOT(slotClose()));
        connect(actionUART, SIGNAL(triggered()), this, SLOT(newUART()));
}

EmbSysVisu::~EmbSysVisu(){
}

void EmbSysVisu::newUART(){
    uart = new ConnectionUART();
    uart->show();
}

void EmbSysVisu::slotClose(){
    close();
}
