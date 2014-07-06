#include "EmbSysVisu.h"
#include <qwt_plot_curve.h>
#include <qwt_plot.h>

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

   double x[101];
    double y[101];

    for ( int i = 0; i < 101; i++ ) {
        x[i] =  i / 10.0;
        y[i] = sin(x[i]);
    }

    QwtPlotCurve *curve = new QwtPlotCurve();
    curve->setRawData(x, y, 101);
    curve->attach(qwtPlot);
    qwtPlot->replot();

}

void EmbSysVisu::slotClose(){
    close();
}

