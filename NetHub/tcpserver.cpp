#include "tcpserver.h"

TCPServer::TCPServer(QObject *parent, int port)
    : QObject{parent}
{
    m_server = new QTcpServer(this);
    // connect server tothe TCPServer
    connect(m_server, &QTcpServer::newConnection, this, &TCPServer::on_clientConnecting);

    // Establish where server is listening
    bool status = m_server->listen(QHostAddress::Any, port);
    if (!status)
    {
        qDebug() << "Error: Server could not start";
        has_started = false;
        emit serverError(m_server->errorString());
    }
    else
    {
        qDebug() << "Server started";
    }
}

void TCPServer::sendMessageToAllClients(QString message)
{
    foreach (auto socket, m_clients)
    {
        socket->write(message.toUtf8());
    }
}

void TCPServer::on_clientConnecting()
{
    qDebug()<<"client connnecting" ;
    // Get the socket of the client
    auto socket = m_server->nextPendingConnection();

    // Give client ability to send messages back to the server
    connect(socket, &QTcpSocket::readyRead, this, &TCPServer::on_clientDataReady);
    connect(socket, &QTcpSocket::disconnected, this, &TCPServer::on_clientDisconnected);
    // Add the socket to the list of clients
    m_clients.append(socket);
    socket->write("Client has been added to the server");
    emit newClientConnected();
}

void TCPServer::on_clientDataReady()
{
    auto socket = qobject_cast<QTcpSocket*>(sender());
    auto data = socket->readAll();
    emit clientDataReceived(QString(data));

    // Send the same data to all other clients
    foreach (auto s, m_clients)
    {
        if (s != socket)
        {
            s->write(data);
        }
    }
}
