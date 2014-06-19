#include "EmbSysVisu.h"
#include <iostream>
using namespace std;

EmbSysVisu::EmbSysVisu(QMainWindow *parent) : QMainWindow(parent){
        setupUi(this);
        connect(actionQuit,SIGNAL (triggered()), this, SLOT(slotClose()));

}


EmbSysVisu::~EmbSysVisu(){
}


void EmbSysVisu::slotClose(){
    close();
}
