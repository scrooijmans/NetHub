#ifndef TCPSERVER_H
#define TCPSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket> // Each client will be managed through a socket

class TCPServer : public QObject
{
    Q_OBJECT
public:
    explicit TCPServer(QObject *parent = nullptr, int port = 1234);
    bool hasStarted() const {return has_started;}

    void sendMessageToAllClients(QString message);

signals:
    // Signal if the server cannnot be started
    void serverError(QString error);

    void newClientConnected();

    void clientDataReceived(QString data);
    void clientDisconnected();

private slots:
    void on_clientConnecting();
    void on_clientDisconnected() {emit clientDisconnected();};
    void on_clientDataReady();


private:
    QTcpServer *m_server;
    QList<QTcpSocket*> m_clients; // Connect multiple clients to the server
    bool has_started = false;



signals:
};

#endif // TCPSERVER_H
