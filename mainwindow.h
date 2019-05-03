#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "client.h"
#include "server.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString file_name;
    bool is_image=false;
    QGraphicsScene *scene;
    bool isTCP=false;
    bool isServer=false;
    bool isClient=false;
    QByteArray *ba;
    Server *server;
    Client *client;
    QString ip;
    quint16 port=0;

public slots:
    void openclicked();
    void receiveclicked();
    void helpclicked();
    void sentOk();
    void handshook();
    void clientConnected();
    void mailarrived(QString s);

private slots:
    void on_sel_protocol_currentIndexChanged(int index);
    void on_but_send_clicked();
    void on_send_clicked();
    void on_fiel_clientIP_currentIndexChanged(const QString &arg1);
    void on_fiel_clientport_editingFinished();
    void on_but_connect_clicked();

signals:
    void sendFile(QByteArray *bytes);
    void connectionInfo(QString _ip,quint16 _port);

};

#endif // MAINWINDOW_H
