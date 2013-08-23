#include "MainWindow.h"
#include <QList>

MainWindow::MainWindow()
{
    setupUI();
    initVars();
    //Communication
    upServer();
    connectToPrincipalServer();

    QStringList makeRegexList;
    /*makeRegexList.append("Rori tu chantes ?");
    makeRegexList.append("tu chante ?");
    makeRegexList.append("chante tu ?");
    makeRegexList.append("chantes tu ?");*/
    makeRegexList.append("Rori es-tu vraiment énervé ou non?");
    makeRegexList.append("es-tu énervé RORI?");
    makeRegexList.append("tu es enervé en ce moment ?");
    makeRegexList.append("es-tu énervé?");
    makeRegexList.append("es tu franchement énervé quand je te demande ça?");
    makeRegexList.append("Maintenant tu es enerve?");
    //makeRegex(makeRegexList);
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
    timerAndroid = new QTimer (this);
    connect(timerAndroid, SIGNAL(timeout()), this, SLOT(getAndroidConnection()));
        timerAndroid->start(500);

    socketAnswer = new QTcpSocket;
    lastRqAndroid = "";
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

QString MainWindow::makeRegex(QStringList phrases)
{
    QString finalRegex;

    //1. On découpe les phrases en QList de QStringList TODO : !? en fin de phrase
    QList<QStringList> sentenceList;
    QString separator = " ,;:./-()\\\"'{[|_)]}?/!'\n";
    for(int i = 0; i < phrases.count(); ++i)
    {
        QStringList listeMot;
        QString mot;
        for(int j = 0; j < phrases.at(i).count(); ++j)
        {
            if(separator.indexOf(phrases.at(i)[j]) != -1 && j < phrases.at(i).count()-1 )
            {
                mot = mot.toLower();
                listeMot.append(mot);
                mot.replace("é", "e");
                mot.replace("è", "e");
                mot.replace("ç", "c");
                mot.replace("à", "a");
                mot.replace("ä", "a");
                mot.replace("â", "a");
                mot.replace("ï", "i");
                mot.replace("î", "i");
                mot.replace("ö", "o");
                mot.replace("ô", "o");
                mot.replace("ü", "u");
                mot.replace("û", "u");
                mot.replace("ù", "u");
                listeMot.append(mot);
                mot.clear();
            }
            else
                mot += phrases.at(i)[j];
        }
        sentenceList.append(listeMot);
    }
    //2. On regarde les mots présents dans tous les tableaux
    QStringList allPresent;
    for(int i = 0; i < sentenceList.at(0).count(); ++i)
    {
        bool present = true;
        for(int j = 1; j < phrases.count(); ++j)
        {
            QString temp = phrases.at(j);
            temp.replace("é", "e");
            temp.replace("è", "e");
            temp.replace("ç", "c");
            temp.replace("à", "a");
            temp.replace("ä", "a");
            temp.replace("â", "a");
            temp.replace("ï", "i");
            temp.replace("î", "i");
            temp.replace("ö", "o");
            temp.replace("ô", "o");
            temp.replace("ü", "u");
            temp.replace("û", "u");
            temp.replace("ù", "u");
            if(temp.indexOf(sentenceList.at(0)[i]) == -1)
            {
                present = false;
                break;
            }
        }
        if(present && !allPresent.contains(sentenceList.at(0)[i]))
            allPresent.append(sentenceList.at(0)[i]);
    }

    //See if the first of all present is the first word
    bool firstWordIsTheSame = true;
    for(int i = 0; i < phrases.count(); ++i)
    {
        if(phrases.at(i).indexOf(allPresent.at(0)) != 0)
        {
            firstWordIsTheSame = false;
            break;
        }
    }
    if(firstWordIsTheSame)
        finalRegex = "^";

    //See the distance between each important word
    QList<int> distances;
    QList<bool> invertWordOrNo;
    for(int i = 0; i < allPresent.count(); ++i)
    {
        if(i != allPresent.count() - 1)
        {
            int distance = 0;
            bool invert = false;
            for(int j = 0; j < phrases.count(); ++j)
            {
                QString temp = phrases.at(j);
                temp.replace("é", "e");
                temp.replace("è", "e");
                temp.replace("ç", "c");
                temp.replace("à", "a");
                temp.replace("ä", "a");
                temp.replace("â", "a");
                temp.replace("ï", "i");
                temp.replace("î", "i");
                temp.replace("ö", "o");
                temp.replace("ô", "o");
                temp.replace("ü", "u");
                temp.replace("û", "u");
                temp.replace("ù", "u");
                int newDistance = temp.indexOf(allPresent.at(i + 1)) - (temp.indexOf(allPresent.at(i)) + allPresent.at(i).length());
                if(newDistance > distance)
                    distance = newDistance;
                if(newDistance < 0)
                    invert = true;
            }
            distances.append(distance);
            invertWordOrNo.append(invert);
        }
    }

    QStringList allPresents;
    for(int i = 0; i < phrases.count(); ++i)
    {
        for(int j = 0; j < allPresent.count(); ++j)
        {
            QString mot = allPresent.at(j);
            if(phrases.at(i).indexOf(mot) == -1)
            {
                mot.replace("e", "(é|è|ë|ê|e)");
                mot.replace("a", "(a|ä|à|â)");
                mot.replace("i", "(i|ï|î)");
                mot.replace("o", "(o|ö|ô)");
                mot.replace("u", "(u|ü|û|ù)");
                mot.replace("y", "(ÿ|ŷ|y)");
            }
            allPresents.append(mot);
        }
    }

    for(int i = 0; i < distances.count(); ++i)
    {
        QString tempSep = ".";
        if(distances.at(i) > 1)
            tempSep += "{0,"+QString::number(distances.at(i)+3)+"}";

        //TODO : Réfléchir au bug
        if(invertWordOrNo.at(i) == true)
            finalRegex += "("+ allPresent.at(i) + tempSep + allPresent.at(i+1) + "|" + allPresent.at(i+1) + tempSep + allPresent.at(i) + ")";
        else
        {
            QString mot1 = allPresents.at(i);
            QString mot2 = allPresents.at(i+1);
            if(i == 0)
                finalRegex += mot1 + tempSep + mot2;
            else
                finalRegex += tempSep + mot2;
        }
    }
    //See if the last of all present is the last word
    bool lastWordIsTheSame = true;
    for(int i = 0; i < sentenceList.count(); ++i)
    {
        if(sentenceList.at(i).at(sentenceList.at(i).count()-1) != allPresent.at(allPresent.count()-1))
        {
            lastWordIsTheSame = false;
            break;
        }
    }
    if(lastWordIsTheSame)
        finalRegex += "$";


    //TODO : limiter la génération à seulement ces phrases (donc pas d'autres possibles)
    //TODO les pluriels

    QMessageBox::information(0, "de", finalRegex);
    return finalRegex;
}

/**
 * @brief MainWindow::getAndroidConnection if we have a request from a phone
 */
void MainWindow::getAndroidConnection()
{
    QProcess AndroidCo;
    AndroidCo.execute("python AndroidConnect/androidCo.py");
    QFile whatSayThePhone("AndroidConnect/androidSay");
    whatSayThePhone.open(QIODevice::ReadOnly);
    if(whatSayThePhone.isOpen())
    {
        int numberAction = whatSayThePhone.readLine().trimmed().toInt();
        QFile numActFile("AndroidConnect/numAc");
        if(numActFile.exists())
        {
            numActFile.open(QIODevice::ReadWrite);
            if(numActFile.readAll().trimmed().toInt() != numberAction)
            {
                lastRqAndroid.clear();
                numActFile.close();
                numActFile.remove();
                numActFile.open(QIODevice::ReadWrite);
                QTextStream out(&numActFile);
                out << QString::number(numberAction);
                while(!whatSayThePhone.atEnd())
                    lastRqAndroid += whatSayThePhone.readLine();
                if(!lastRqAndroid.isEmpty())
                {
                    QMessageBox::information(0, "de", lastRqAndroid);
                    QString say = "TCHAT:" + lastRqAndroid;
                    semantik->workData(say);
                }
            }
        }
        else
        {
            QTextStream out(&numActFile);
            out << "0";
        }

    }
    else
    {
        QMessageBox::critical(0, "ERROR", "Can't open the file");
    }
}
