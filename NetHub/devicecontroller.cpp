#include "devicecontroller.h"
#include <QtNetwork/QTcpSocket.h>

DeviceController::DeviceController(QObject *parent)
    : QObject{parent}
{
    // Create signals and slots between device controller and socket
    connect(&m_socket, &QTcpSocket::connected, this, &DeviceController::connected);
    connect(&m_socket, &QTcpSocket::disconnected, this, &DeviceController::disconnected);
    connect(&m_socket, &QTcpSocket::stateChanged, this, &DeviceController::stateChanged);
    connect(&m_socket, &QTcpSocket::errorOccurred, this, &DeviceController::errorOccurred);
    connect(&m_socket, &QTcpSocket::readyRead, this, &DeviceController::socket_readyRead);
}



void DeviceController::ConnectToDevice(QString IP, int port)
{
    if (m_socket.isOpen())
    {
        // Check if provided IP address and port number are matching iwth private variables
        if (m_ip == IP && m_port == port)
        {
            qDebug()<< "got the ip and port matched";
            return;
        }
        // If device is open close it.
        m_socket.close();
    }
    m_ip = IP;
    m_port = port;
    m_socket.connectToHost(m_ip, m_port);

}

void DeviceController::sendMessage(QString message)
{
    m_socket.write(message.toUtf8());
}


void DeviceController::socket_readyRead()
{
    auto data = m_socket.readAll();
    emit dataReady(data);
}




