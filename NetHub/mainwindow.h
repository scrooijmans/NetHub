#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QHostAddress>
#include "devicecontroller.h"
#include <QTimer>
#include "tcpserver.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ipLineEdit_textChanged(const QString &arg1);
    void on_connectDeviceButton_clicked();

    void device_connected();
    void device_disconnected();
    void device_stateChanged(QAbstractSocket::SocketState);
    void device_errorOccurred(QAbstractSocket::SocketError);
    void device_addReadData(QByteArray data);

    void connectionTimeOut();

    void on_sendButton_clicked();
    void on_newClientConnected();
    void clientDataReceived(QString data);
    void clientDisconnected();
    void on_sendAllClientsButton_clicked();

    void on_startServerButton_clicked();

private:
    Ui::MainWindow *ui;
    DeviceController m_deviceController;

    QTimer m_timer;

    TCPServer *m_tcpServer;

    void setDeviceController();



};
#endif // MAINWINDOW_H
