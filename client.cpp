#include "client.h"

Client::Client()
{
    tcpSocket=new QTcpSocket;
    connect(tcpSocket, &QIODevice::readyRead, this, &Client::readFile);
    QNetworkConfigurationManager manager;
    if (manager.capabilities() & QNetworkConfigurationManager::NetworkSessionRequired) {
        // Get saved network configuration
        QSettings settings(QSettings::UserScope, QLatin1String("QtProject"));
        settings.beginGroup(QLatin1String("QtNetwork"));
        const QString id = settings.value(QLatin1String("DefaultNetworkConfiguration")).toString();
        settings.endGroup();

        // If the saved network configuration is not currently discovered use the system default
        QNetworkConfiguration config = manager.configurationFromIdentifier(id);
        if ((config.state() & QNetworkConfiguration::Discovered) !=
            QNetworkConfiguration::Discovered) {
            config = manager.defaultConfiguration();
        }


        networkSession = new QNetworkSession(config, this);
        connect(networkSession, &QNetworkSession::opened, this, &Client::sessionOpened);
        networkSession->open();
    }

}
void Client::requestNewFile()
{
    tcpSocket->abort();
    tcpSocket->connectToHost(_ip,_port);
    emit connecting();
}

void Client::readFile(){
    QString filename=QFileDialog::getSaveFileName(NULL,tr("Save File"));
    QFile file(filename); // download path
    tcpSocket->waitForReadyRead(3000);
    QByteArray bytes(tcpSocket->readAll());
    if(!file.fileName().isEmpty()){
        file.open(QIODevice::WriteOnly);
        qDebug()<<bytes.data();
        if(file.isOpen()){
            qDebug()<<"open file done!";
        }
        file.write(bytes);
    }
    file.close();
    emit youhavemail(filename);
}


void Client::sessionOpened()
{
    // Save the used configuration
    QNetworkConfiguration config = networkSession->configuration();
    QString id;
    if (config.type() == QNetworkConfiguration::UserChoice)
        id = networkSession->sessionProperty(QLatin1String("UserChoiceConfiguration")).toString();
    else
        id = config.identifier();

    QSettings settings(QSettings::UserScope, QLatin1String("QtProject"));
    settings.beginGroup(QLatin1String("QtNetwork"));
    settings.setValue(QLatin1String("DefaultNetworkConfiguration"), id);
    settings.endGroup();
}

void Client::connectionInfo(QString ip, quint16 port){
    _ip=ip;
    _port=port;
    qDebug()<<ip<<port;
    requestNewFile();
}

