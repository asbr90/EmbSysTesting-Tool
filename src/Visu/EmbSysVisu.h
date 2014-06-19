#ifndef EMBSYS_H
#define EMBSYS_H

#include "ui_EmbSysVisu.h"
#include "connectionuart.h"

class EmbSysVisu : public QMainWindow, public Ui::MainWindow{
        Q_OBJECT

        public:
                EmbSysVisu (QMainWindow *parent = 0);
                ~EmbSysVisu();
        private slots:
                /**
                  * @brief Close the MainWindow
                  */
                void slotClose();
                void newUART();

        public:
                 ConnectionUART *uart;
};
#endif //EMBSYS_H
