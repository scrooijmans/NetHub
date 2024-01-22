#include "mainwindow.h"

#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QtWidgets>


/**
 * Server is the applacition that provides service to various clients per request.
 * Protocol: standard pattern of exchanging infomraiton, eg rules and steps of communicating
 * TCP: transport control protocol. connection based. Guarantees data sent gets there in right order
 * slow overhead time of setting up, therefore not great for low latency.
 *
 * UDP: user datagram protocol, like sending mail through postal service. Messages are indendent of each other
 * Protoocol that sends independent packets of data without guarantee of arrival. Not connection based.
 * Not great for sensitive data.
 *
 * Port: - entry point into an applciation.
 * Computer has single IP address
 * Port is a number that identifies a specific application running on a computer.
 * 0-1023 are reserved for system use.
 * 1024-49151 are registered ports
 * 49152-65535 are dynamic ports
 *
 * LAN is a network of computers in a small area, eg home or office.
 * WAN is a network of computers over a large area, eg internet.
 * IP address is a unique number assigned to each device on a network.
 * IPv4 is 32 bit number, 4 bytes, 8 bits per byte. 0-255
 * IPv6 is 128 bit number, 16 bytes, 8 bits per byte. 0-255
 * IPv4 is 4.3 billion addresses, IPv6 is 340 undecillion addresses.
 * IPv4 is 32 bits, IPv6 is 128 bits.
 *
 * Ethernet is a protocol for connecting devices together in a LAN.
 * Ethernet is a physical and data link layer technology for LAN networking.
 * Ethernet is a family of networking technologies.
 *
 *
 * Sockets are the endpoints of a connection.
 *
 *
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
