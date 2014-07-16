/********************************************************************************
** Form generated from reading UI file 'EmbSysVisu.ui'
**
** Created: Wed Jul 16 19:05:49 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMBSYSVISU_H
#define UI_EMBSYSVISU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionInfo;
    QAction *actionUART;
    QAction *actionSPI;
    QAction *actionI2C;
    QWidget *centralwidget;
    QLabel *label_2;
    QLineEdit *host;
    QLabel *label_3;
    QLineEdit *port;
    QLabel *label_4;
    QLineEdit *qos;
    QPushButton *connectBtn;
    QPushButton *disconnectBtn;
    QLabel *ConnectionState;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuNew_Connection;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1216, 875);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionUART = new QAction(MainWindow);
        actionUART->setObjectName(QString::fromUtf8("actionUART"));
        actionSPI = new QAction(MainWindow);
        actionSPI->setObjectName(QString::fromUtf8("actionSPI"));
        actionI2C = new QAction(MainWindow);
        actionI2C->setObjectName(QString::fromUtf8("actionI2C"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 57, 20));
        host = new QLineEdit(centralwidget);
        host->setObjectName(QString::fromUtf8("host"));
        host->setGeometry(QRect(60, 20, 113, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 20, 57, 20));
        port = new QLineEdit(centralwidget);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(250, 20, 113, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 20, 57, 20));
        qos = new QLineEdit(centralwidget);
        qos->setObjectName(QString::fromUtf8("qos"));
        qos->setGeometry(QRect(440, 20, 113, 21));
        connectBtn = new QPushButton(centralwidget);
        connectBtn->setObjectName(QString::fromUtf8("connectBtn"));
        connectBtn->setGeometry(QRect(840, 20, 88, 31));
        disconnectBtn = new QPushButton(centralwidget);
        disconnectBtn->setObjectName(QString::fromUtf8("disconnectBtn"));
        disconnectBtn->setGeometry(QRect(940, 20, 88, 31));
        ConnectionState = new QLabel(centralwidget);
        ConnectionState->setObjectName(QString::fromUtf8("ConnectionState"));
        ConnectionState->setGeometry(QRect(590, 20, 161, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1216, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNew_Connection = new QMenu(menuFile);
        menuNew_Connection->setObjectName(QString::fromUtf8("menuNew_Connection"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(menuNew_Connection->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuNew_Connection->addAction(actionUART);
        menuNew_Connection->addAction(actionSPI);
        menuNew_Connection->addAction(actionI2C);
        menuHelp->addAction(actionInfo);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EmbSysVisu", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionInfo->setText(QApplication::translate("MainWindow", "Info", 0, QApplication::UnicodeUTF8));
        actionUART->setText(QApplication::translate("MainWindow", "UART", 0, QApplication::UnicodeUTF8));
        actionSPI->setText(QApplication::translate("MainWindow", "SPI", 0, QApplication::UnicodeUTF8));
        actionI2C->setText(QApplication::translate("MainWindow", "I2C", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Host:", 0, QApplication::UnicodeUTF8));
        host->setText(QApplication::translate("MainWindow", "localhost", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        port->setText(QApplication::translate("MainWindow", "1883", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "QoS:", 0, QApplication::UnicodeUTF8));
        qos->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        connectBtn->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        disconnectBtn->setText(QApplication::translate("MainWindow", "Disconnect", 0, QApplication::UnicodeUTF8));
        ConnectionState->setText(QApplication::translate("MainWindow", "Connection: no connection", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuNew_Connection->setTitle(QApplication::translate("MainWindow", "New Connection..", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMBSYSVISU_H
