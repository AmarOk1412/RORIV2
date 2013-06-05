#include "MainWindow.h"

MainWindow::MainWindow()
{
    setupUI();
    initVars();
    //Communication
    upServer();
    connectToPrincipalServer();
}

void MainWindow::setupUI()
{
    //Window
    setWindowTitle("R.O.R.I v2.0");
    showMaximized();
}

void MainWindow::initVars()
{
    semantik = new Semantik;
    connect(semantik, SIGNAL(saySomething(QString)), this, SLOT(saySomething(QString)));
    temps = tempsAvantQuestion();
    timer = new QTimer (this);
    connect(timer, SIGNAL(timeout()), this, SLOT(poseQuestion()));
        timer->start(temps);

    socketAnswer = new QTcpSocket;
    //Receive data
    connect(socketAnswer, SIGNAL(readyRead()), this, SLOT(dataReceive()));
    connect(socketAnswer, SIGNAL(disconnected()), this, SLOT(disconnectClient()));
    connect(socketAnswer, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(SocketError(QAbstractSocket::SocketError)));
}

//Start the server for receive data from semantik
void MainWindow::upServer()
{
    int basicGate = 1413;
    bool ok = false;

    server = new QTcpServer(this);
    while(!ok)
    {
        ++basicGate;
        if (server->listen(QHostAddress::Any, basicGate))
        {
            //Start the programm
            ok = true;
            connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));
        }
    }
    //To identify what program it is
    identity = "RORI:127.0.0.1:" + QString::number(server->serverPort());
}

//Connect to the principal server to had a position in to the hierarchie.
void MainWindow::connectToPrincipalServer()
{
    socket = new QTcpSocket;
    socket->connectToHost("127.0.0.1", 1412);
    int i = 0;
    while(!socket->isValid() && i < 150000000)
    {
        ++i;
    }

    if(socket->isValid())
    {
        sendIdentity(socket);

        //Receive data
        connect(socket, SIGNAL(readyRead()), this, SLOT(dataReceive()));
        connect(socket, SIGNAL(disconnected()), this, SLOT(disconnectClient()));
        connect(socket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(SocketError(QAbstractSocket::SocketError)));
    }
    else
    {
        QMessageBox::critical(0, "ERROR", "The server is already out");
        this->close();
    }
}

void MainWindow::newConnection()
{
    QTcpSocket *newClient = server->nextPendingConnection();
    connect(newClient, SIGNAL(readyRead()), this,SLOT(serverReceiveData()));
    connect(newClient, SIGNAL(disconnected()), this, SLOT(disconnectClient()));
}


void MainWindow::dataReceive()
{
    /* When we receive a packet, we look the size if we have the full message
       Then we work on this message */
       QDataStream in(socket);
       QString ReceiveMessage;
       in >> ReceiveMessage;
       workData(ReceiveMessage);
}

//If we receive data as server
void MainWindow::serverReceiveData()
{
    QTcpSocket *socket2 = qobject_cast<QTcpSocket *>(sender());
    QDataStream in(socket2);
    QString messages;
    in >> messages;
    workData(messages);
}

//Work with the message (parse the message, see the doc)
void MainWindow::workData(QString message)
{
    int ifNtc = message.indexOf("-|-NTC-|-");
    int ifMemInt = message.indexOf("MEMINT");
    if(ifNtc != -1)
    {
        QString ip, gate;
        int i = ifNtc + 9;
        while(message[i] != ':' && i < message.length())
        {
            ip += message[i];
            ++i;
        }
        ++i;
        while(i < message.length())
        {
            gate += message[i];
            ++i;
        }

        socketAnswer->connectToHost(ip, gate.toInt());
        while(!socketAnswer->isValid())
        {

        }
    }
    else if(ifMemInt != -1)
    {
        QMessageBox::information(0, "debug", message);
    }
    else
        semantik->workData(message);
}

//Send the identity to the principal server
void MainWindow::sendIdentity(QTcpSocket *cible)
{
    QByteArray paquet;
    QDataStream out(&paquet, QIODevice::WriteOnly);
    out << identity.trimmed();//Add the message
    cible->write(paquet);
}

void MainWindow::sendMessage(QTcpSocket *cible, QString message)
{
    QByteArray paquet;
    QDataStream out(&paquet, QIODevice::WriteOnly);
    out << message.trimmed();//Add the message
    //Send the message
    cible->write(paquet);
}

void MainWindow::saySomething(QString message)
{
    sendMessage(socketAnswer, message);
}

//If an error occurs
void MainWindow::SocketError(QAbstractSocket::SocketError error)
{
    switch(error)
    {
        case QAbstractSocket::HostNotFoundError:
        QMessageBox::critical(0, "ERROR", "<em>ERROR : No server found. Check IP and gate.</em>");
        break;
        case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::critical(0, "ERROR" ,"<em>ERROR : Server don't want to be connected with you. Check if the server is up, ip adress and gates.</em>");
        break;
        case QAbstractSocket::RemoteHostClosedError:
        QMessageBox::critical(0, "ERROR" ,"<em>ERROR : Server disconnect.</em>");
        break;
        default:
        QMessageBox::critical(0, "ERROR" ,"<em>ERROR : ") + socket->errorString() + tr("</em>");
    }
}

int MainWindow::tempsAvantQuestion()
{
    return 5000*3600*exp(0-rand()%10);
}

void MainWindow::poseQuestion()
{
    temps = tempsAvantQuestion();
    //semantik->getProfiler()->getAgenda()->getAnAction();
    timer = new QTimer (this);
    connect(timer, SIGNAL(timeout()), this, SLOT(poseQuestion()));
        timer->start(temps);
}
