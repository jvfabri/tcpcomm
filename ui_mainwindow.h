/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionOpen_2;
    QAction *act_open;
    QAction *act_receive;
    QAction *act_help;
    QWidget *centralWidget;
    QLabel *text_openfile;
    QStackedWidget *sendreceive;
    QWidget *sender_ui;
    QTextBrowser *text_show;
    QGraphicsView *graph_show;
    QFrame *gridFrame;
    QLabel *text_yourIP;
    QLabel *text_protocol;
    QLabel *text_toport;
    QComboBox *sel_protocol;
    QPushButton *but_send;
    QLabel *text_sent;
    QPushButton *send;
    QLabel *text_filename;
    QWidget *receive_ui;
    QLabel *text_filename_2;
    QTextBrowser *text_show_2;
    QGraphicsView *graph_show_2;
    QFrame *gridFrame_2;
    QLabel *text_clientIP;
    QLabel *text_client;
    QLabel *text_clientport;
    QPushButton *but_connect;
    QLineEdit *fiel_clientport;
    QComboBox *fiel_clientIP;
    QLabel *text_status;
    QWidget *help_ui;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menu_help;
    QMenu *menuFile;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 550);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 550));
        MainWindow->setMaximumSize(QSize(500, 550));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen_2 = new QAction(MainWindow);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        act_open = new QAction(MainWindow);
        act_open->setObjectName(QStringLiteral("act_open"));
        act_receive = new QAction(MainWindow);
        act_receive->setObjectName(QStringLiteral("act_receive"));
        act_help = new QAction(MainWindow);
        act_help->setObjectName(QStringLiteral("act_help"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        text_openfile = new QLabel(centralWidget);
        text_openfile->setObjectName(QStringLiteral("text_openfile"));
        text_openfile->setEnabled(false);
        text_openfile->setGeometry(QRect(9, 9, 210, 17));
        sendreceive = new QStackedWidget(centralWidget);
        sendreceive->setObjectName(QStringLiteral("sendreceive"));
        sendreceive->setGeometry(QRect(0, 0, 501, 531));
        sendreceive->setFrameShape(QFrame::StyledPanel);
        sendreceive->setFrameShadow(QFrame::Raised);
        sender_ui = new QWidget();
        sender_ui->setObjectName(QStringLiteral("sender_ui"));
        text_show = new QTextBrowser(sender_ui);
        text_show->setObjectName(QStringLiteral("text_show"));
        text_show->setGeometry(QRect(10, 200, 480, 321));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(text_show->sizePolicy().hasHeightForWidth());
        text_show->setSizePolicy(sizePolicy1);
        text_show->setMinimumSize(QSize(480, 300));
        text_show->setMaximumSize(QSize(480, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush1(QColor(238, 238, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        QBrush brush2(QColor(239, 239, 239, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        text_show->setPalette(palette);
        graph_show = new QGraphicsView(sender_ui);
        graph_show->setObjectName(QStringLiteral("graph_show"));
        graph_show->setGeometry(QRect(10, 200, 480, 321));
        sizePolicy.setHeightForWidth(graph_show->sizePolicy().hasHeightForWidth());
        graph_show->setSizePolicy(sizePolicy);
        graph_show->setMinimumSize(QSize(480, 300));
        graph_show->setMaximumSize(QSize(480, 321));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        graph_show->setPalette(palette1);
        gridFrame = new QFrame(sender_ui);
        gridFrame->setObjectName(QStringLiteral("gridFrame"));
        gridFrame->setGeometry(QRect(10, 0, 471, 161));
        sizePolicy.setHeightForWidth(gridFrame->sizePolicy().hasHeightForWidth());
        gridFrame->setSizePolicy(sizePolicy);
        text_yourIP = new QLabel(gridFrame);
        text_yourIP->setObjectName(QStringLiteral("text_yourIP"));
        text_yourIP->setGeometry(QRect(10, 50, 220, 20));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(text_yourIP->sizePolicy().hasHeightForWidth());
        text_yourIP->setSizePolicy(sizePolicy2);
        text_yourIP->setMinimumSize(QSize(200, 0));
        text_yourIP->setMaximumSize(QSize(500, 25));
        text_protocol = new QLabel(gridFrame);
        text_protocol->setObjectName(QStringLiteral("text_protocol"));
        text_protocol->setGeometry(QRect(9, 13, 117, 17));
        sizePolicy.setHeightForWidth(text_protocol->sizePolicy().hasHeightForWidth());
        text_protocol->setSizePolicy(sizePolicy);
        text_toport = new QLabel(gridFrame);
        text_toport->setObjectName(QStringLiteral("text_toport"));
        text_toport->setGeometry(QRect(10, 90, 220, 20));
        sel_protocol = new QComboBox(gridFrame);
        sel_protocol->setObjectName(QStringLiteral("sel_protocol"));
        sel_protocol->setGeometry(QRect(130, 10, 59, 25));
        sizePolicy.setHeightForWidth(sel_protocol->sizePolicy().hasHeightForWidth());
        sel_protocol->setSizePolicy(sizePolicy);
        but_send = new QPushButton(gridFrame);
        but_send->setObjectName(QStringLiteral("but_send"));
        but_send->setGeometry(QRect(10, 130, 71, 25));
        sizePolicy.setHeightForWidth(but_send->sizePolicy().hasHeightForWidth());
        but_send->setSizePolicy(sizePolicy);
        text_sent = new QLabel(gridFrame);
        text_sent->setObjectName(QStringLiteral("text_sent"));
        text_sent->setGeometry(QRect(310, 130, 151, 21));
        text_sent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        send = new QPushButton(gridFrame);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(90, 130, 71, 25));
        text_filename = new QLabel(sender_ui);
        text_filename->setObjectName(QStringLiteral("text_filename"));
        text_filename->setGeometry(QRect(10, 160, 481, 41));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(text_filename->sizePolicy().hasHeightForWidth());
        text_filename->setSizePolicy(sizePolicy3);
        text_filename->setMaximumSize(QSize(500, 300));
        text_filename->setAcceptDrops(false);
        text_filename->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        sendreceive->addWidget(sender_ui);
        receive_ui = new QWidget();
        receive_ui->setObjectName(QStringLiteral("receive_ui"));
        text_filename_2 = new QLabel(receive_ui);
        text_filename_2->setObjectName(QStringLiteral("text_filename_2"));
        text_filename_2->setGeometry(QRect(10, 160, 481, 41));
        sizePolicy3.setHeightForWidth(text_filename_2->sizePolicy().hasHeightForWidth());
        text_filename_2->setSizePolicy(sizePolicy3);
        text_filename_2->setMaximumSize(QSize(500, 300));
        text_filename_2->setAcceptDrops(false);
        text_filename_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        text_show_2 = new QTextBrowser(receive_ui);
        text_show_2->setObjectName(QStringLiteral("text_show_2"));
        text_show_2->setGeometry(QRect(10, 200, 480, 321));
        sizePolicy1.setHeightForWidth(text_show_2->sizePolicy().hasHeightForWidth());
        text_show_2->setSizePolicy(sizePolicy1);
        text_show_2->setMinimumSize(QSize(480, 300));
        text_show_2->setMaximumSize(QSize(480, 321));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        text_show_2->setPalette(palette2);
        graph_show_2 = new QGraphicsView(receive_ui);
        graph_show_2->setObjectName(QStringLiteral("graph_show_2"));
        graph_show_2->setGeometry(QRect(10, 200, 480, 321));
        sizePolicy.setHeightForWidth(graph_show_2->sizePolicy().hasHeightForWidth());
        graph_show_2->setSizePolicy(sizePolicy);
        graph_show_2->setMinimumSize(QSize(480, 300));
        graph_show_2->setMaximumSize(QSize(480, 321));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        graph_show_2->setPalette(palette3);
        gridFrame_2 = new QFrame(receive_ui);
        gridFrame_2->setObjectName(QStringLiteral("gridFrame_2"));
        gridFrame_2->setGeometry(QRect(10, 0, 471, 161));
        sizePolicy.setHeightForWidth(gridFrame_2->sizePolicy().hasHeightForWidth());
        gridFrame_2->setSizePolicy(sizePolicy);
        text_clientIP = new QLabel(gridFrame_2);
        text_clientIP->setObjectName(QStringLiteral("text_clientIP"));
        text_clientIP->setGeometry(QRect(10, 50, 220, 20));
        sizePolicy2.setHeightForWidth(text_clientIP->sizePolicy().hasHeightForWidth());
        text_clientIP->setSizePolicy(sizePolicy2);
        text_clientIP->setMinimumSize(QSize(200, 0));
        text_clientIP->setMaximumSize(QSize(500, 25));
        text_client = new QLabel(gridFrame_2);
        text_client->setObjectName(QStringLiteral("text_client"));
        text_client->setGeometry(QRect(9, 13, 161, 17));
        sizePolicy.setHeightForWidth(text_client->sizePolicy().hasHeightForWidth());
        text_client->setSizePolicy(sizePolicy);
        text_clientport = new QLabel(gridFrame_2);
        text_clientport->setObjectName(QStringLiteral("text_clientport"));
        text_clientport->setGeometry(QRect(10, 90, 241, 20));
        but_connect = new QPushButton(gridFrame_2);
        but_connect->setObjectName(QStringLiteral("but_connect"));
        but_connect->setGeometry(QRect(10, 130, 80, 25));
        sizePolicy.setHeightForWidth(but_connect->sizePolicy().hasHeightForWidth());
        but_connect->setSizePolicy(sizePolicy);
        fiel_clientport = new QLineEdit(gridFrame_2);
        fiel_clientport->setObjectName(QStringLiteral("fiel_clientport"));
        fiel_clientport->setGeometry(QRect(240, 90, 141, 25));
        fiel_clientport->setMaxLength(6);
        fiel_clientIP = new QComboBox(gridFrame_2);
        fiel_clientIP->setObjectName(QStringLiteral("fiel_clientIP"));
        fiel_clientIP->setGeometry(QRect(130, 50, 251, 25));
        fiel_clientIP->setEditable(true);
        text_status = new QLabel(gridFrame_2);
        text_status->setObjectName(QStringLiteral("text_status"));
        text_status->setGeometry(QRect(310, 130, 151, 21));
        sendreceive->addWidget(receive_ui);
        graph_show_2->raise();
        text_filename_2->raise();
        text_show_2->raise();
        gridFrame_2->raise();
        help_ui = new QWidget();
        help_ui->setObjectName(QStringLiteral("help_ui"));
        label = new QLabel(help_ui);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 471, 501));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        sendreceive->addWidget(help_ui);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 500, 22));
        menu_help = new QMenu(menuBar);
        menu_help->setObjectName(QStringLiteral("menu_help"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menu_help->menuAction());
        menu_help->addAction(act_help);
        menuFile->addAction(act_open);
        menuFile->addAction(act_receive);

        retranslateUi(MainWindow);

        sendreceive->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TCPComm", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionOpen_2->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        act_open->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        act_receive->setText(QApplication::translate("MainWindow", "Receive", Q_NULLPTR));
        act_help->setText(QApplication::translate("MainWindow", "Help  me!", Q_NULLPTR));
        text_openfile->setText(QApplication::translate("MainWindow", "Open the file you wish to send.", Q_NULLPTR));
        text_yourIP->setText(QApplication::translate("MainWindow", "IP", Q_NULLPTR));
        text_protocol->setText(QApplication::translate("MainWindow", "Sender protocol: ", Q_NULLPTR));
        text_toport->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        sel_protocol->clear();
        sel_protocol->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "TCP", Q_NULLPTR)
         << QApplication::translate("MainWindow", "UDP", Q_NULLPTR)
        );
        but_send->setText(QApplication::translate("MainWindow", "Set Up", Q_NULLPTR));
        text_sent->setText(QString());
        send->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        text_filename->setText(QApplication::translate("MainWindow", "You are reading \"\" ", Q_NULLPTR));
        text_filename_2->setText(QApplication::translate("MainWindow", "You are reading \"\" ", Q_NULLPTR));
        text_clientIP->setText(QApplication::translate("MainWindow", "Connection IP:  ", Q_NULLPTR));
        text_client->setText(QApplication::translate("MainWindow", "Client properties:", Q_NULLPTR));
        text_clientport->setText(QApplication::translate("MainWindow", "Receiving through port:", Q_NULLPTR));
        but_connect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        fiel_clientport->setPlaceholderText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        text_status->setText(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>Hello! You are using TCPComm, your favorite file transfering utility.</p><p><span style=\" text-decoration: underline;\">If you wish to send a file:</span></p><p>- Select <span style=\" font-weight:600;\">Send </span>from the drop down menu <span style=\" font-weight:600;\">File</span>.</p><p>- Select the file you wish to send using the file dialog.</p><p>- When everything is fired up, click <span style=\" font-weight:600;\">Set up</span> to configure your server.</p><p>- TCPComm automatically chooses the best IP and port to send</p><p>your file.</p><p>- Wait for the <span style=\" font-weight:600;\">Connected! </span>message to show up, and click <span style=\" font-weight:600;\">Send.</span></p><p><span style=\" text-decoration: underline;\">If you wish to receive a file:</span></p><p>- Select <span style=\" font-weight:600;\">Receive </span>from the drop down menu <span style=\" font-weight:600;\">File.</span></p><p>- Select the IP and port of the server you wish to receive the file</p"
                        "><p>from. A list of local IPs are also shown in the <span style=\" font-weight:600;\">IP</span> drop down.</p><p>- Click <span style=\" font-weight:600;\">Connect </span>to connect to the server and wait for the server</p><p>to send the file to you.</p><p>- When you receive the file, a pop up will appear asking for you </p><p>to save the file received. Name it and open it up! Congrats!</p><p><br/></p><p><br/></p></body></html>", Q_NULLPTR));
        menu_help->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
