#ifndef SERVER_H
#define SERVER_H

#include <QDebug>
#include <QFileDialog>
#include <QDockWidget>
#include <QMessageBox>
#include <QGraphicsScene>
#include <QBuffer>
#include <QDialog>
#include <QString>
#include <QObject>
#include <QFile>
#include <QTcpSocket>
#include <QUdpSocket>
#include <QTcpServer>
#include <QNetworkInterface>
#include <QNetworkConfigurationManager>
#include <QNetworkSession>
#include <QSettings>

class Server: public QObject
{
    Q_OBJECT
public:
    Server();
    QString _ip;
    quint16 _port;

private:
    QTcpServer *tcpServer = nullptr;
    QNetworkSession *networkSession = nullptr;

public slots:
    void sendFile(QByteArray *bytes);
    void sendHandshake();
    void sessionOpened();

signals:
    void fileSent();
    void handshake();
};

#endif // SOCKET_H
