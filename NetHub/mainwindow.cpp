#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtNetwork/QHostAddress>
#include <QMetaObject.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Conjenct timer timeout signal to a slot
    connect(&m_timer, &QTimer::timeout, this, &MainWindow::connectionTimeOut);
    // Set single shot does not repeat
    m_timer.setSingleShot(true);
    // Set timeout duration
    m_timer.setInterval(2000);
    // Set up connections
    setDeviceController();
    m_tcpServer = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ipLineEdit_textChanged(const QString &arg1)
{
    QHostAddress address(arg1);

    if (QAbstractSocket::IPv4Protocol == address.protocol())
    {
        qDebug()<<"success in matchignn IPV4 address with input";
    }
    else{
        qDebug()<<"No success yet in mathcing IPV4 address with input";
    }
}

void MainWindow::on_connectDeviceButton_clicked()
{

    if (m_deviceController.isConnected())
    {
        m_deviceController.disconnect();
    }
    else
    {
        auto ip = ui->ipLineEdit->text();
        auto port = ui->portSpinbox->text().toInt();
        m_deviceController.ConnectToDevice(ip, port);
    }
}

void MainWindow::device_connected()
{
    ui->listWidget->addItem("Connected to device");
    ui->connectDeviceButton->setText("Disconnect");
    ui->grpSendData->setEnabled(true);
}

void MainWindow::device_disconnected()
{
    ui->listWidget->addItem("Disconnected from device");
    ui->connectDeviceButton->setText("Connect");

    ui->grpSendData->setEnabled(false);
}

void MainWindow::device_stateChanged(QAbstractSocket::SocketState state)
{
    // Convert Q_ENUM to string
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketState>();
    ui->listWidget->addItem(metaEnum.valueToKey(state));
}

void MainWindow::device_errorOccurred(QAbstractSocket::SocketError error)
{
    ui->listWidget->addItem(" errorOccurred");
    // Convert enums to string
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    ui->listWidget->addItem(metaEnum.valueToKey(error));
}

void MainWindow::connectionTimeOut()
{
    ui->listWidget->addItem(" Connection Timeout");

}

void MainWindow::device_addReadData(QByteArray data)
{
    // Print received data
    ui->listWidget->addItem(data);
}

void MainWindow::setDeviceController()
{
    // Create signals and slots between device controller and main window
    connect(&m_deviceController, &DeviceController::connected, this, &MainWindow::device_connected);
    connect(&m_deviceController, &DeviceController::disconnected, this, &MainWindow::device_disconnected);
    connect(&m_deviceController, &DeviceController::stateChanged, this, &MainWindow::device_stateChanged);
    connect(&m_deviceController, &DeviceController::errorOccurred, this, &MainWindow::device_errorOccurred);
    connect(&m_deviceController, &DeviceController::dataReady, this, &MainWindow::device_addReadData);
}

// Checks if the input is a valid IPv4 address

void MainWindow::on_sendButton_clicked()
{
    auto message = ui->messageLineEdit->text();
    // m_deviceController.sendMessage(message);
}

void MainWindow::on_newClientConnected()
{
    ui->listWidget->addItem("New client connected");
}


void MainWindow::clientDataReceived(QString data)
{
    ui->loggerListWidget->addItem(data);
}

void MainWindow::clientDisconnected()
{
    ui->listWidget->addItem("Client disconnected");
}

void MainWindow::on_sendAllClientsButton_clicked()
{
    auto message = ui->messageToAllClients->text();
    m_tcpServer->sendMessageToAllClients(message);
}

void MainWindow::on_startServerButton_clicked()
{
    if (m_tcpServer == nullptr)
    {
        auto port = ui->tcpPortSpinbox->value();
        m_tcpServer = new TCPServer(this, port);
        connect(m_tcpServer, &TCPServer::newClientConnected, this, &MainWindow::on_newClientConnected);
        connect(m_tcpServer, &TCPServer::clientDataReceived, this, &MainWindow::clientDataReceived);
    }
}




