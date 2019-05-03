#ifndef SOCKET_H
#define SOCKET_H

#include <QObject>
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


class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client();
    QString _ip;
    quint16 _port;

private slots:
    void requestNewFile();
    void readFile();
    void sessionOpened();
    void connectionInfo(QString ip,quint16 port);

private:
    QTcpSocket *tcpSocket = nullptr;
    QByteArray currentByte;
    QNetworkSession *networkSession = nullptr;

signals:
    void connecting();
    void youhavemail(QString s);

};
#endif // SOCKET_H
