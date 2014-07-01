/********************************************************************************
** Form generated from reading UI file 'EmbSysVisu.ui'
**
** Created: Thu Jun 19 23:55:20 2014
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
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionInfo;
    QAction *actionI2C;
    QAction *actionUART;
    QAction *actionSPI;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *logicAnalyzer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QwtPlot *qwtPlot;
    QWidget *dataAnalyzer;
    QWidget *dbb;
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
        MainWindow->resize(1216, 783);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionI2C = new QAction(MainWindow);
        actionI2C->setObjectName(QString::fromUtf8("actionI2C"));
        actionUART = new QAction(MainWindow);
        actionUART->setObjectName(QString::fromUtf8("actionUART"));
        actionSPI = new QAction(MainWindow);
        actionSPI->setObjectName(QString::fromUtf8("actionSPI"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1211, 751));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        logicAnalyzer = new QWidget();
        logicAnalyzer->setObjectName(QString::fromUtf8("logicAnalyzer"));
        verticalLayoutWidget = new QWidget(logicAnalyzer);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 1181, 691));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        qwtPlot = new QwtPlot(verticalLayoutWidget);
        qwtPlot->setObjectName(QString::fromUtf8("qwtPlot"));

        horizontalLayout->addWidget(qwtPlot);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget->addTab(logicAnalyzer, QString());
        dataAnalyzer = new QWidget();
        dataAnalyzer->setObjectName(QString::fromUtf8("dataAnalyzer"));
        tabWidget->addTab(dataAnalyzer, QString());
        dbb = new QWidget();
        dbb->setObjectName(QString::fromUtf8("dbb"));
        tabWidget->addTab(dbb, QString());
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
        menuNew_Connection->addAction(actionI2C);
        menuNew_Connection->addAction(actionUART);
        menuNew_Connection->addAction(actionSPI);
        menuHelp->addAction(actionInfo);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EmbSysVisu", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionInfo->setText(QApplication::translate("MainWindow", "Info", 0, QApplication::UnicodeUTF8));
        actionI2C->setText(QApplication::translate("MainWindow", "I2C", 0, QApplication::UnicodeUTF8));
        actionUART->setText(QApplication::translate("MainWindow", "UART", 0, QApplication::UnicodeUTF8));
        actionSPI->setText(QApplication::translate("MainWindow", "SPI", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Channel:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(logicAnalyzer), QApplication::translate("MainWindow", "Logic Analyzer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(dataAnalyzer), QApplication::translate("MainWindow", "Data Analyzer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(dbb), QApplication::translate("MainWindow", "BDD - Editor", 0, QApplication::UnicodeUTF8));
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
