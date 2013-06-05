#include "MainWindow.h"
#include <QProcess>
#include <QScrollBar>

MainWindow::MainWindow()
{
    setupUI();

    //Communication
    upServer();
    initVars();
    connectToPrincipalServer();

    timer2 = new QTimer();
    connect(timer2, SIGNAL(timeout()), this, SLOT(ircHistory()));
    timer2->start(100);
}

/**
 * @brief MainWindow::setupUI create the UI
 */
void MainWindow::setupUI()
{
    //Window
    setWindowTitle("RORI Tchat v1.0");
    showMaximized();
    //Layouts
    layoutPrincipal = new QVBoxLayout(this);
    layoutUser = new QHBoxLayout(this);
    //Graphic Object

    layoutIRC = new QHBoxLayout();
        enableIRC = new QCheckBox(this);
        layoutIRC->addWidget(enableIRC);
        serverln = new QLineEdit("irc.freenode.net", this);
        layoutIRC->addWidget(serverln);
        channel = new QLineEdit("roriprogramm", this);
        layoutIRC->addWidget(channel);
    paroleIA = new QTextEdit(this);
    paroleIA->show();
    paroleUser = new QLineEdit(this);
    paroleUser->show();
    send = new QPushButton("Send", this);
    send->show();
    //SetLayouts
    layoutPrincipal->addWidget(paroleIA);
    //layoutPrincipal->addLayout(layoutIRC);
    layoutUser->addWidget(paroleUser);
    layoutUser->addWidget(send);
    layoutUser->setAlignment(Qt::AlignLeft);
    layoutPrincipal->addLayout(layoutUser);
    setLayout(layoutPrincipal);

    //Connect
    connect(send, SIGNAL(clicked()), this, SLOT(sendClicked()));
    paroleUser->setFocus();
    connect(paroleIA, SIGNAL(textChanged()), this, SLOT(descendre()));
    connect(enableIRC, SIGNAL(toggled(bool)), this, SLOT(enableIRCSlot(bool)));
}

void MainWindow::initVars()
{
    paroleIA->setText("Bienvenue sur RORI v2.0");
    socketAnswer = new QTcpSocket;
    //speechReco->start("sh stt.sh");//Speech Recognizer

    timer = new QTimer (this);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimerFinish()));
        timer->start(1000);
}

/**
 * @brief Start the server
 */
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
    identity = "TCHAT:127.0.0.1:" + QString::number(server->serverPort());
}

/**
 * @brief MainWindow::connectToPrincipalServer
 */
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

/**
 * @brief MainWindow::newConnection
 */
void MainWindow::newConnection()
{
    QTcpSocket *newClient = server->nextPendingConnection();
    connect(newClient, SIGNAL(readyRead()), this,SLOT(serverReceiveData()));
    connect(newClient, SIGNAL(disconnected()), this, SLOT(disconnectClient()));
}

/**
 * @brief MainWindow::dataReceive
 */
void MainWindow::dataReceive()
{
    /* When we receive a packet, we look the size if we have the full message
       Then we work on this message */
       QDataStream in(socket);

       QString ReceiveMessage;
       in >> ReceiveMessage;
       workData(ReceiveMessage);
}

/**
 * @brief MainWindow::serverReceiveData
 */
void MainWindow::serverReceiveData()
{
    QTcpSocket *socket = qobject_cast<QTcpSocket *>(sender());
    QDataStream in(socket);
    QString messages;
    in >> messages;
    workData(messages);
}

/**
 * @brief MainWindow::workData
 * @param message receive via socket
 */
void MainWindow::workData(QString message)
{
        int ifNsc = message.indexOf("-|-NRC-|-");
        int ifProfilerSay = message.indexOf("RORISAY:");
        if(ifNsc != -1)
        {
            QString ip, gate;
            int i = ifNsc + 9;
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
            sendMessage(socketAnswer, "-OPEN-");
        }
        else if(ifProfilerSay == 0)
        {
            QString say;
            for(int i = 8; i < message.length(); ++i)
                say += message[i];
            if(irc)
            {
                QFile ircAnswer("toSayIRC");
                ircAnswer.open(QIODevice::WriteOnly);
                QTextStream out(&ircAnswer);
                out << say;
            }
            addParoleIAText(say);
        }
}

/**
 * @brief MainWindow::sendIdentity
 * @param cible 6> principal Server
 */
void MainWindow::sendIdentity(QTcpSocket *cible)
{
    QByteArray paquet;
    QDataStream out(&paquet, QIODevice::WriteOnly);
    out << identity.trimmed();//Add the message
    cible->write(paquet);
}

void MainWindow::sendClicked()
{
    if(!paroleUser->text().isEmpty())
    {
        sendMessage(socketAnswer, paroleUser->text().trimmed());
        paroleUser->clear();
    }
}

void MainWindow::sendMessage(QTcpSocket *cible, QString message)
{
    QByteArray paquet;
    QDataStream out(&paquet, QIODevice::WriteOnly);
    out << "TCHAT:" + message.trimmed();//Add the message
    //Send the message
    cible->write(paquet);
    if(message != "-OPEN-" && !irc)
        addParoleUserText(message);
}

//Update the ParoleIA TextBox and say the new Phrase
void MainWindow::addParoleIAText(QString toAddAndSay)
{
    QString text;
    text = getParoleIAText() + '\n' + "RORI : " + toAddAndSay;
    paroleIA->setText(text);
    QProcess::startDetached("python tts.py " + toAddAndSay);
}

//Update the ParoleIA TextBox and say the new Phrase
void MainWindow::addParoleUserText(QString toAddAndSay)
{
    QString text;
    text = getParoleIAText() + '\n' + "Me : " + toAddAndSay;
    paroleIA->setText(text);
}

//If an error occurs
void MainWindow::SocketError(QAbstractSocket::SocketError error)
{
    switch(error)
    {
        case QAbstractSocket::HostNotFoundError:
        QMessageBox::critical(0, "ERROR", "<em>ERROR : No server found. Check IP and gate.</em>");
        break;

        void sendMessage(QTcpSocket *cible, QString message); case QAbstractSocket::ConnectionRefusedError:
        QMessageBox::critical(0, "ERROR" ,"<em>ERROR : Server don't want to be connected with you. Check if the server is up, ip adress and gates.</em>");
        break;
        case QAbstractSocket::RemoteHostClosedError:
        QMessageBox::critical(0, "EROOR" ,"<em>ERROR : Server disconnect.</em>");
        break;
        default:
        QMessageBox::critical(0, "ERROR" ,"<em>ERROR : ") + socket->errorString() + tr("</em>");
    }
}

/**
 * @brief for speaking order
 */
void MainWindow::onTimerFinish()
{
    QFile file("../records.txt");
    if(file.exists())
    {
        file.open(QIODevice::ReadOnly);
        if(file.isOpen())
        {
            QString speech = file.readAll();
            if(!speech.trimmed().isEmpty())
            {
                file.close();
                file.remove();
                paroleUser->setText(speech);
                sendClicked();
            }
        }
    }
}

void MainWindow::descendre()
{
    //TODO Descendre scroll
}

void MainWindow::enableIRCSlot(bool enable)
{
    irc = enable;
    if(enable)
        QProcess::startDetached("python irc.py " + serverln->text().trimmed() + ' ' + channel->text().trimmed());
}

void MainWindow::ircHistory()
{
    if(irc)
    {
        QFile ircHistoryFile("historyIRC");
        if(ircHistoryFile.exists())
        {
            ircHistoryFile.open(QIODevice::ReadWrite);
            QString ligne = ircHistoryFile.readAll();
            QString parole;
            bool pass = false;
            for(int i = 0; i < ligne.length(); ++i)
            {
                if(ligne[i] == ':'){
                    pass = true;
                    i += 2;
                }
                if(pass)
                    parole += ligne[i];
            }
            ircHistoryFile.close();
            ircHistoryFile.remove();
            sendMessage(socketAnswer, parole);
        }
    }
}
