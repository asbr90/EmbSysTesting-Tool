#ifndef EMBSYS_H
#define EMBSYS_H

#include "ui_EmbSysVisu.h"
#include "connectionuart.h"
#include "../../Middleware/MQTTv3.h"
#include "../../Middleware/Message.h"
#include "../../Middleware/Subscriber.h"
#include "../../Middleware/Publisher.h"
#include "../InterpreterInterface.h"
class EmbSysVisu : public QMainWindow, public Ui::MainWindow, public InterpreterInterface{
        Q_OBJECT

        public:
                EmbSysVisu (QMainWindow *parent = 0);
                ~EmbSysVisu();
                mosquitto_message convertToMessage(string data);
                string convertToData(const mosquitto_message*);
                void interpretMessage(const mosquitto_message *);
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
