#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//*************************************************************************//
//                             INCLUDES                                    //
//*************************************************************************//
#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QProcess>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QTcpServer>

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <math.h>

#include "Semantik.h"

//*************************************************************************//
//          Principal Interface for profil and choose a function           //
//*************************************************************************//

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
    void setupUI();
    void initVars();

public slots:
    void sendMessage(QTcpSocket *cible, QString message);
    void poseQuestion();
    //For the communication
    void connectToPrincipalServer();
    void upServer();
    void workData(QString message);
    void sendIdentity(QTcpSocket *cible);
    void SocketError(QAbstractSocket::SocketError erreur);
    void dataReceive();
    void serverReceiveData();
    void newConnection();
    void saySomething(QString message);
    int tempsAvantQuestion();

private:
    Semantik *semantik;
    //Communication
    QTcpServer *server;
    QList<QTcpSocket *> clients;
    QTcpSocket *socket; //To the Principal Server

    QString identity;
    QTcpSocket *socketAnswer;
    int temps;
    QTimer *timer;
};

#endif // MAINWINDOW_H
