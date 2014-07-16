/********************************************************************************
** Form generated from reading UI file 'ConnectionUART.ui'
**
** Created: Wed Jul 16 18:23:08 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONUART_H
#define UI_CONNECTIONUART_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QFrame *line;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *parityComboBox;
    QLabel *label_4;
    QLabel *label_3;
    QComboBox *baudCombobox;
    QLabel *label_5;
    QComboBox *StopbitsCombobox;
    QLabel *label_2;
    QComboBox *directionComboBox;
    QLabel *label_6;
    QComboBox *databitsCombobox;
    QLabel *label_7;
    QComboBox *ActiveAsCombobox;
    QLabel *label_10;
    QLabel *label_9;
    QLineEdit *storagefilenameText;
    QLineEdit *columnsText;
    QLineEdit *delimiterText;
    QLabel *label_8;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *CancelBtn;
    QPushButton *ConnectBtn;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(491, 452);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(19);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Form->sizePolicy().hasHeightForWidth());
        Form->setSizePolicy(sizePolicy);
        Form->setAutoFillBackground(true);
        line = new QFrame(Form);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 30, 491, 16));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 291, 21));
        gridLayoutWidget = new QWidget(Form);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 39, 461, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        parityComboBox = new QComboBox(gridLayoutWidget);
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));

        gridLayout->addWidget(parityComboBox, 3, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        baudCombobox = new QComboBox(gridLayoutWidget);
        baudCombobox->setObjectName(QString::fromUtf8("baudCombobox"));

        gridLayout->addWidget(baudCombobox, 1, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        StopbitsCombobox = new QComboBox(gridLayoutWidget);
        StopbitsCombobox->setObjectName(QString::fromUtf8("StopbitsCombobox"));

        gridLayout->addWidget(StopbitsCombobox, 4, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        directionComboBox = new QComboBox(gridLayoutWidget);
        directionComboBox->setObjectName(QString::fromUtf8("directionComboBox"));

        gridLayout->addWidget(directionComboBox, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        databitsCombobox = new QComboBox(gridLayoutWidget);
        databitsCombobox->setObjectName(QString::fromUtf8("databitsCombobox"));

        gridLayout->addWidget(databitsCombobox, 2, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        ActiveAsCombobox = new QComboBox(gridLayoutWidget);
        ActiveAsCombobox->setObjectName(QString::fromUtf8("ActiveAsCombobox"));

        gridLayout->addWidget(ActiveAsCombobox, 5, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        storagefilenameText = new QLineEdit(gridLayoutWidget);
        storagefilenameText->setObjectName(QString::fromUtf8("storagefilenameText"));

        gridLayout->addWidget(storagefilenameText, 7, 1, 1, 1);

        columnsText = new QLineEdit(gridLayoutWidget);
        columnsText->setObjectName(QString::fromUtf8("columnsText"));

        gridLayout->addWidget(columnsText, 8, 1, 1, 1);

        delimiterText = new QLineEdit(gridLayoutWidget);
        delimiterText->setObjectName(QString::fromUtf8("delimiterText"));

        gridLayout->addWidget(delimiterText, 6, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(Form);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(26, 380, 451, 44));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CancelBtn = new QPushButton(horizontalLayoutWidget);
        CancelBtn->setObjectName(QString::fromUtf8("CancelBtn"));

        horizontalLayout->addWidget(CancelBtn);

        ConnectBtn = new QPushButton(horizontalLayoutWidget);
        ConnectBtn->setObjectName(QString::fromUtf8("ConnectBtn"));

        horizontalLayout->addWidget(ConnectBtn);

        line->raise();
        label->raise();
        gridLayoutWidget->raise();
        horizontalLayoutWidget->raise();
        label_10->raise();

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "UART", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form", "Universal Asynchronous Receiver Transmitter", 0, QApplication::UnicodeUTF8));
        parityComboBox->clear();
        parityComboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "ODD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "EVEN", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("Form", "Data bits:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Form", "Bits per seconds:", 0, QApplication::UnicodeUTF8));
        baudCombobox->clear();
        baudCombobox->insertItems(0, QStringList()
         << QApplication::translate("Form", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "110", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "150", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "230400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "460800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "500000", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("Form", "Parity", 0, QApplication::UnicodeUTF8));
        StopbitsCombobox->clear();
        StopbitsCombobox->insertItems(0, QStringList()
         << QApplication::translate("Form", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "1.5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "2", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("Form", "Data Direction:", 0, QApplication::UnicodeUTF8));
        directionComboBox->clear();
        directionComboBox->insertItems(0, QStringList()
         << QApplication::translate("Form", "Transmitter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Receiver", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Transceiver", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("Form", "Stop bits:", 0, QApplication::UnicodeUTF8));
        databitsCombobox->clear();
        databitsCombobox->insertItems(0, QStringList()
         << QApplication::translate("Form", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "9", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("Form", "Active as:", 0, QApplication::UnicodeUTF8));
        ActiveAsCombobox->clear();
        ActiveAsCombobox->insertItems(0, QStringList()
         << QApplication::translate("Form", "Publisher", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Form", "Subscriber", 0, QApplication::UnicodeUTF8)
        );
        label_10->setText(QApplication::translate("Form", "Columns number:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Form", "Filename:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Form", "Delimiter:", 0, QApplication::UnicodeUTF8));
        CancelBtn->setText(QApplication::translate("Form", "Cancel", 0, QApplication::UnicodeUTF8));
        ConnectBtn->setText(QApplication::translate("Form", "Connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONUART_H
