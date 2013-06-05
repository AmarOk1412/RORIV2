#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//*************************************************************************//
//                             INCLUDES                                    //
//*************************************************************************//
//Inclusion du module graphique
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QCheckBox>
//For the communication
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QTcpServer>
//To speak
#include <QProcess>
#include <QFile>
#include <QTimer>
//Inclusion des commandes system
#include <iostream>
#include <stdio.h>

//*************************************************************************//
//                An Interface to communicate with R.O.R.I                 //
//*************************************************************************//

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
    void setupUI();
    void initVars();

    //Getters and Setters
    inline QString getParoleIAText() { return paroleIA->toPlainText(); }
    void addParoleIAText(QString toAddAndSay);
    void addParoleUserText(QString toAddAndSay);
    void sendMessage(QTcpSocket *cible, QString message);

public slots:
    void sendClicked();
    //For the communication
    void connectToPrincipalServer();
    void upServer();
    void dataReceive();
    void serverReceiveData();
    void workData(QString message);
    void sendIdentity(QTcpSocket *cible);
    void SocketError(QAbstractSocket::SocketError erreur);
    void newConnection();
    void onTimerFinish();
    void descendre();
    void enableIRCSlot(bool enable);
    void ircHistory();

private:
    //Graphics
    QVBoxLayout *layoutPrincipal;
    QHBoxLayout *layoutUser;
    QHBoxLayout *layoutIRC;
    QCheckBox *enableIRC;
    QLineEdit *serverln;
    QLineEdit *channel;
    QTextEdit *paroleIA;
    QLineEdit *paroleUser;
    QPushButton *send;
    QAction *entree;

    //Communication
    QTcpServer *server;
    QList<QTcpSocket *> clients;
    QTcpSocket *socket; //To the Principal Server

    QString identity;
    QTcpSocket *socketAnswer;
    QProcess *speechReco;
    QTimer *timer;
    bool irc;
    QTimer *timer2;
};

#endif // MAINWINDOW_H

