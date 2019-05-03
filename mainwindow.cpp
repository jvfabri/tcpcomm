#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->act_open,SIGNAL(triggered(bool)),this,SLOT(openclicked()));
    connect(ui->act_receive,SIGNAL(triggered(bool)),this,SLOT(receiveclicked()));
    ui->sender_ui->setVisible(false);
    ui->receive_ui->setVisible(false);
    ui->text_show->setVisible(false);
    ui->graph_show->setVisible(false);

    scene= new QGraphicsScene;
    ba=new QByteArray;
    server=new Server;
    client=new Client;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene;
    delete ba; 
    delete server;
    delete client;

}

void MainWindow::openclicked(){

    isServer=true;
    ui->send->setEnabled(false);
    connect(this,SIGNAL(sendFile(QByteArray*)),server,SLOT(sendFile(QByteArray*)));
    connect(server,SIGNAL(fileSent()),this,SLOT(sentOk()));
    connect(server,SIGNAL(handshake()),this,SLOT(handshook()));

    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"/home", tr("Images (*.png *.xpm *.jpg);;Text files (*.txt)"));
    if(fileName==NULL) return;

    int j=fileName.lastIndexOf('/'),k=fileName.size();
    QString name= fileName.mid(j+1,j-k);

    ui->text_show->setVisible(false);
    ui->graph_show->setVisible(false);

    ui->text_openfile->setVisible(false);
    this->file_name=fileName;
    ui->sender_ui->setVisible(true);
    ui->receive_ui->setVisible(false);

    if (file_name.endsWith(".txt")){
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QTextStream stream(&file);
        QString content = stream.readAll();
        file.close();
        ui->text_show->setPlainText(content);
        ui->text_show->setVisible(true);
        QString you("You are reading ");
        you.append(name);
        you.append(".");
        ui->text_filename->setText(you);
        is_image=false;


    } else if (file_name.endsWith(".png") || file_name.endsWith(".xpm") || file_name.endsWith(".jpg")){

        QPixmap pixmap(fileName);
        is_image=true;
        if(pixmap.isNull()){
            QMessageBox::information(this,"Image Viewer","Error Displaying image");
            return;
        }
        ui->graph_show->setVisible(true);
        scene->addPixmap(pixmap);
        ui->graph_show->setScene(scene);
        ui->graph_show->show();
        QString you("You are seeing ");
        you.append(name);
        you.append(".");
        ui->text_filename->setText(you);

    } else {
        QString you("You are seeing ");
        you.append(name);
        you.append(".\nPreview is not available for this file extension.");
        ui->text_filename->setText(you);


    }
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QByteArray content = file.readAll();
    ba->insert(0,content);

    file.close();
}

void MainWindow::receiveclicked(){
    isClient=true;
    ui->text_openfile->setVisible(false);

    ui->sender_ui->setVisible(false);
    ui->receive_ui->setVisible(true);

    ui->text_show_2->setVisible(false);
    ui->graph_show_2->setVisible(false);
    ui->text_filename_2->setVisible(false);

    connect(this,SIGNAL(connectionInfo(QString,quint16)),client,SLOT(connectionInfo(QString,quint16)));
    connect(client,SIGNAL(connecting()),this,SLOT(clientConnected()));
    connect(client,SIGNAL(youhavemail(QString)),this,SLOT(mailarrived(QString)));

    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        if (!ipAddressesList.at(i).isLoopback())
            ui->fiel_clientIP->addItem(ipAddressesList.at(i).toString());
    }
    for (int i = 0; i < ipAddressesList.size(); ++i) {
        if (ipAddressesList.at(i).isLoopback())
            ui->fiel_clientIP->addItem(ipAddressesList.at(i).toString());
    }


}


void MainWindow::on_sel_protocol_currentIndexChanged(int index)
{
    if(index==0){ //TCP
        isTCP=true;
        qDebug() <<"tcp";
    }else{ //UDP
        isTCP=false;
        qDebug() <<"udp";
    }
}

void MainWindow::on_but_send_clicked()
{
    ui->text_yourIP->setText("Sending to "+server->_ip);
    quint16 prt=server->_port;
    ui->text_toport->setText("Port: "+QString::number(prt));
    ui->text_sent->setText("All set!");

}

void MainWindow::sentOk(){
    ui->text_sent->setText("File sent!");
}

void MainWindow::on_send_clicked()
{
    emit sendFile(ba);
}

void MainWindow::handshook(){
    ui->send->setEnabled(true);
    ui->text_sent->setText("Connected!");
}


void MainWindow::on_fiel_clientIP_currentIndexChanged(const QString &arg1)
{
    ip=arg1;
}

void MainWindow::on_fiel_clientport_editingFinished()
{
    port=ui->fiel_clientport->text().toInt();
}


void MainWindow::on_but_connect_clicked()
{
    qDebug()<<"emitting";
    emit connectionInfo(ip,port);
    qDebug()<<"emitted";
}

void MainWindow::clientConnected()
{
    ui->text_status->setText("Conected!");

}

void MainWindow::mailarrived(QString s){
    qDebug()<<"you have mail!";
    int j=s.lastIndexOf('/'),k=s.size();
    QString name= s.mid(j+1,j-k);
    ui->text_filename_2->setVisible(true);
    if (s.endsWith(".txt")){
        QFile file(s);
        file.open(QIODevice::ReadOnly);
        QTextStream stream(&file);
        QString content = stream.readAll();
        file.close();
        ui->text_show_2->setPlainText(content);
        ui->text_show_2->setVisible(true);
        QString you("You are reading ");
        you.append(name);
        you.append(".");
        ui->text_filename_2->setText(you);
        is_image=false;

    } else if (s.endsWith(".png") || s.endsWith(".xpm") || s.endsWith(".jpg")){
        QPixmap pixmap(s);
        is_image=true;
        if(pixmap.isNull()){
            QMessageBox::information(this,"Image Viewer","Error Displaying image");
            return;
        }
        ui->graph_show_2->setVisible(true);
        scene->addPixmap(pixmap);
        ui->graph_show_2->setScene(scene);
        ui->graph_show_2->show();
        QString you("You are seeing ");
        you.append(name);
        you.append(".");
        ui->text_filename_2->setText(you);

    } else {
        QString you("You are seeing ");
        you.append(name);
        you.append(".\nPreview is not available for this file extension.");
        ui->text_filename_2->setText(you);
    }

}
