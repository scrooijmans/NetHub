/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *grpSendData;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *sendButton;
    QLabel *label_3;
    QLineEdit *messageLineEdit;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *ipLineEdit;
    QSpinBox *portSpinbox;
    QLabel *label;
    QPushButton *connectDeviceButton;
    QListWidget *listWidget;
    QGroupBox *groupBox_2;
    QListWidget *loggerListWidget;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QSpinBox *tcpPortSpinbox;
    QPushButton *startServerButton;
    QLabel *label_4;
    QGroupBox *grpSendData_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *sendAllClientsButton;
    QLabel *label_5;
    QLineEdit *messageToAllClients;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1576, 834);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        grpSendData = new QGroupBox(centralwidget);
        grpSendData->setObjectName("grpSendData");
        grpSendData->setEnabled(false);
        grpSendData->setGeometry(QRect(50, 560, 621, 121));
        gridLayoutWidget_2 = new QWidget(grpSendData);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(20, 30, 551, 82));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        sendButton = new QPushButton(gridLayoutWidget_2);
        sendButton->setObjectName("sendButton");

        gridLayout_2->addWidget(sendButton, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        messageLineEdit = new QLineEdit(gridLayoutWidget_2);
        messageLineEdit->setObjectName("messageLineEdit");

        gridLayout_2->addWidget(messageLineEdit, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(60, 0, 581, 541));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(29, 49, 541, 271));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        ipLineEdit = new QLineEdit(gridLayoutWidget);
        ipLineEdit->setObjectName("ipLineEdit");
        ipLineEdit->setClearButtonEnabled(true);

        gridLayout->addWidget(ipLineEdit, 0, 2, 1, 1);

        portSpinbox = new QSpinBox(gridLayoutWidget);
        portSpinbox->setObjectName("portSpinbox");
        portSpinbox->setMaximum(999999);
        portSpinbox->setValue(1024);

        gridLayout->addWidget(portSpinbox, 1, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        connectDeviceButton = new QPushButton(gridLayoutWidget);
        connectDeviceButton->setObjectName("connectDeviceButton");

        gridLayout->addWidget(connectDeviceButton, 2, 2, 1, 1);

        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 340, 551, 169));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(60, 680, 1471, 101));
        loggerListWidget = new QListWidget(groupBox_2);
        loggerListWidget->setObjectName("loggerListWidget");
        loggerListWidget->setGeometry(QRect(10, 30, 1461, 61));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(680, 0, 751, 371));
        gridLayoutWidget_4 = new QWidget(groupBox_3);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(29, 49, 701, 271));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        tcpPortSpinbox = new QSpinBox(gridLayoutWidget_4);
        tcpPortSpinbox->setObjectName("tcpPortSpinbox");
        tcpPortSpinbox->setMinimum(1024);
        tcpPortSpinbox->setMaximum(65535);
        tcpPortSpinbox->setValue(1024);

        gridLayout_4->addWidget(tcpPortSpinbox, 0, 2, 1, 1);

        startServerButton = new QPushButton(gridLayoutWidget_4);
        startServerButton->setObjectName("startServerButton");

        gridLayout_4->addWidget(startServerButton, 1, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_4);
        label_4->setObjectName("label_4");

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        grpSendData_2 = new QGroupBox(centralwidget);
        grpSendData_2->setObjectName("grpSendData_2");
        grpSendData_2->setEnabled(true);
        grpSendData_2->setGeometry(QRect(680, 410, 751, 121));
        gridLayoutWidget_3 = new QWidget(grpSendData_2);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(20, 30, 721, 82));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        sendAllClientsButton = new QPushButton(gridLayoutWidget_3);
        sendAllClientsButton->setObjectName("sendAllClientsButton");

        gridLayout_3->addWidget(sendAllClientsButton, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        messageToAllClients = new QLineEdit(gridLayoutWidget_3);
        messageToAllClients->setObjectName("messageToAllClients");

        gridLayout_3->addWidget(messageToAllClients, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1576, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        grpSendData->setTitle(QCoreApplication::translate("MainWindow", "Send Data to Server", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        ipLineEdit->setInputMask(QCoreApplication::translate("MainWindow", "000.000.000.000;_", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP Address", nullptr));
        connectDeviceButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Logger", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "TCP Server", nullptr));
        startServerButton->setText(QCoreApplication::translate("MainWindow", "Start new TCP Server", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        grpSendData_2->setTitle(QCoreApplication::translate("MainWindow", "Send Message to All Clients", nullptr));
        sendAllClientsButton->setText(QCoreApplication::translate("MainWindow", "Send Message to All TCP Server Clients", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
