#ifndef DEVICECONTROLLER_H
#define DEVICECONTROLLER_H

#include <QObject>
#include <QtNetwork/QAbstractSocket.h>
#include <QTcpSocket>  // Include the complete definition of QTcpSocket

class DeviceController : public QObject
{
    Q_OBJECT
public:
    explicit DeviceController(QObject *parent = nullptr);
    void ConnectToDevice(QString IP, int port);

    void sendMessage(QString message);

signals:
    void connected();
    void disconnected();
    void stateChanged(QAbstractSocket::SocketState state);
    void errorOccurred(QAbstractSocket::SocketError state);

    // Signal emitted when data is ready to be absorbed
    void dataReady(QByteArray data);



private slots:
    // slot for when data is received
    void socket_readyRead();


private:
    QTcpSocket m_socket;
    QString m_ip;
    int m_port;



signals:
};

#endif // DEVICECONTROLLER_H
