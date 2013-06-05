#include "Profiler.h"

Profiler::Profiler()
{
    roriProfil = new RoriProfil();
    userProfil = new UserProfil();
    saluer = false;
    //agenda = new Agenda();

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(lireEnd()));
    timer->start(100);

    //connect(agenda, SIGNAL(doAnAction(QString,QString, bool)), this, SLOT(doAnAction(QString,QString, bool)));
}

//Work with the message (parse the message, see the doc)
void Profiler::workData(QString message)
{
    params.clear();
    int test = message.length();
    if(message.indexOf("--") != -1)
    {
        int i = 0;
        QString temp;
        while(i < message.length())
        {
            if(message[i] == ' ' && test == message.length())
                test = i;
            if(i < message.length() - 1 && message[i] == '-')
            {
                if(message[i + 1] == '-')
                {
                    i += 2;
                    while(message[i] != '-' && i < message.length())
                    {
                        temp += message[i];
                        ++i;
                    }
                    params.append(temp);
                    temp.clear();
                }
            }
            ++i;
        }
        message.truncate(test);
    }
    else
        message.truncate(message.length() - 1);

    //Si on envoie en plus une phrase
    if(message.indexOf(" ") != -1)
    {
        int i = 0;
        QString file;
        QString param;
        while(message[i] != ' ')
        {
            file += message[i];
            ++i;
        }
        ++i;
        while(i < message.length())
        {
            param += message[i];
            ++i;
        }
        message = file;
        params.append(param);
    }


    execFunction(message + ".rorif");
}

//This function is one one the main function. It is the code which exec a function
void Profiler::execFunction(QString pathToFunction)
{
    condToMakeFunction.clear();
    QFile *functionFile = new QFile("function/" + pathToFunction);
    functionFile->open(QIODevice::ReadOnly);
    if(functionFile->isOpen())
    {
        QString reader, temp;
        bool continu = true;
        reader = functionFile->readLine();
        int i = 0;
        temp.clear();
        //Add cond (It works)
        while(reader[i] != '\n' && i < reader.length())
        {
            if(reader[i] == ' ')
            {
                if(!temp.isEmpty())
                    condToMakeFunction.append(temp);
                temp.clear();
            }
            else
                temp += reader[i];
            ++i;
        }

        if(!temp.isEmpty())
            condToMakeFunction.append(temp);
        temp.clear();
        continu = condAccept(condToMakeFunction);

        if(continu)
        {
            //Exec a python script
            reader = functionFile->readLine();
            reader.truncate(reader.length() - 1);

            scriptPython = "";
            scriptPython += reader;
            for(int i = 0; i < params.length(); ++i)
                scriptPython += ' ' + params.at(i);
            scriptPython.replace("-R_H-", QString::number(roriProfil->getRoriHumor()));
            scriptPython.replace("-R_P-", QString::number(roriProfil->getRoriPolite()));
            scriptPython.replace("-R_J-", QString::number(roriProfil->getRoriJokes()));
            scriptPython.replace("-R_BIA-", QString::number(roriProfil->getRoriIsABadIA()));
            scriptPython.replace("-R_S-", QString::number(roriProfil->getRoriScared()));
            scriptPython.replace("-R_M-", QString::number(roriProfil->getRoriMoral()));
            scriptPython.replace("-R_NAME-", roriProfil->getNom());
            scriptPython.replace("-R_PNAME-", roriProfil->getPrenom());
            scriptPython.replace("-R_AGE-", QString::number(roriProfil->getAge()));
            scriptPython.replace("-U_H-", QString::number(userProfil->getUHumor()));
            scriptPython.replace("-U_P-", QString::number(userProfil->getUPolite()));
            scriptPython.replace("-U_J-", QString::number(userProfil->getUJokes()));
            scriptPython.replace("-U_BU-", QString::number(userProfil->getUIsABadUser()));
            scriptPython.replace("-U_M-", QString::number(userProfil->getUMoral()));
            scriptPython.replace("-U_C-", QString::number(userProfil->getUCurious()));
            scriptPython.replace("-U_T-", QString::number(userProfil->getUTired()));
            scriptPython.replace("-U_NAME-", userProfil->getNom());
            scriptPython.replace("-U_PNAME-", userProfil->getPrenom());
            scriptPython.replace("-U_AGE-", QString::number(userProfil->getAge()));
            QString saluerToText = saluer? "t" : "f";
            scriptPython.replace("-SALUER?-", saluerToText);
            QProcess *process;
            listeProgramms.append(process);
            process->startDetached(scriptPython);

            if(scriptPython.indexOf("saluer.py") != -1)
                saluer = true;

            functionFile->close();
        }
    }
    else
    {
        QMessageBox::critical(0, "Error", "Profiler can't open this file : \n" + pathToFunction);
    }
}


//This function receive condition style R_BH and say if we continue or not
bool Profiler::condAccept(QStringList conds)
{
    int successPercentage = 60;
    for(int i = 0; i < conds.count(); ++i)
    {
        if(conds.at(i).trimmed() == "U_C")//User curieux
        {
            if(roriProfil->getRoriHumor() <= NORMAL)//R_BH is true
                successPercentage += 10;
            else
                successPercentage -= 10;
        }
        if(conds.at(i).trimmed() == "R_BH")
        {
            if(roriProfil->getRoriHumor() <= MHUMOR)//R_BH is true
                successPercentage += 10;
            else
                successPercentage -= 20;
        }
        if(conds.at(i).trimmed() == "R_NP")//Not scared
        {
            if(roriProfil->getRoriScared() <= NORMAL)
                successPercentage += 20;
            else
                successPercentage -= 50;
        }
        if(conds.at(i).trimmed() == "R_NI")//Not polite
        {
            if(roriProfil->getRoriScared() <= NORMAL)
                successPercentage += 20;
            else
                successPercentage -= 50;
        }
        if(conds.at(i).trimmed() == "U_NI")
        {
            if(roriProfil->getRoriHumor() <= NORMAL)
                successPercentage += 20;
            else
                successPercentage -= 50;
        }
    }

    if(rand() % 100 + 1 > successPercentage)
        return false;
    else
        return true;
}

void Profiler::doAnAction(QString question, QString message, bool delAfter)
{
    int rep = QMessageBox::question(0, "RORI v2", question, QMessageBox::Yes , QMessageBox::No);
    if(rep == QMessageBox::Yes)
    {
        //agenda->delAnAction(question, message);
        execFunction(message + ".rorif");
    }
}

void Profiler::lireEnd()
{
    QString reader = "end";
    QFile endFile(reader);
    if(endFile.exists())
    {
        endFile.open(QIODevice::ReadOnly);
        if(endFile.isOpen())
        {
            while(!endFile.atEnd())
            {
                reader = endFile.readLine().trimmed();
                if(reader.indexOf("Say") == 0)
                {
                    int i = 6;
                    QString toSay;
                    while(i < reader.length())
                    {
                        toSay += reader[i];
                        ++i;
                    }

                    toSay.replace("-UNAME-", userProfil->getPrenom());
                    if(!toSay.isEmpty())
                    {
                        saluer = true;
                        QFile history("history");
                        if(!history.exists())
                        {
                            history.open(QIODevice::ReadWrite);
                            history.close();
                        }
                        QTextStream out(&history);
                        history.open(QIODevice::Append);
                        out << "\nRORI : " + toSay;
                        emit endOfTreatment("RORISAY:" + toSay);
                    }
                }
                if(reader.indexOf("ADW") == 0)
                {
                    int i = 6;
                    QString snewWord;
                    while(i < reader.length())
                    {
                        snewWord += reader[i];
                        ++i;
                    }
                    emit newWord(snewWord);
                }
                if(reader.indexOf("ADF") == 0)
                {
                    emit newFunc();
                }
                if(reader.indexOf("Setnf") == 0)
                {
                    int i = 8;
                    QString snewPath;
                    while(i < reader.length())
                    {
                        snewPath += reader[i];
                        ++i;
                    }
                    emit newPath(snewPath);
                }
                if(reader.indexOf("Delnf") == 0)
                {
                    int i = 8;
                    QString sOldPath;
                    while(i < reader.length())
                    {
                        sOldPath += reader[i];
                        ++i;
                    }
                    emit delPro(sOldPath);
                }
                if(reader.indexOf("Setst") == 0)
                {
                    //setSaluerTrue();
                }
                if(reader.indexOf("-R_H-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    roriProfil->setRoriHumor(roriProfil->getRoriHumor() + newValue.toInt());
                }
                if(reader.indexOf("-R_P-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    roriProfil->setRoriPolite(roriProfil->getRoriPolite() + newValue.toInt());
                }
                if(reader.indexOf("-R_J-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    roriProfil->setRoriJokes(roriProfil->getRoriJokes() + newValue.toInt());
                }
                if(reader.indexOf("-R_S-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    roriProfil->setRoriScared(roriProfil->getRoriScared() + newValue.toInt());
                }
                if(reader.indexOf("-R_M-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    roriProfil->setRoriMoral(roriProfil->getRoriMoral() + newValue.toInt());
                }
                if(reader.indexOf("-R_BIA-") == 0)
                {
                    int i = 10;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    roriProfil->setRoriIsABadIA(roriProfil->getRoriIsABadIA() + newValue.toInt());
                }
                if(reader.indexOf("-U_H-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setUHumor(userProfil->getUHumor() + newValue.toInt());
                }
                if(reader.indexOf("-U_P-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setUPolite(userProfil->getUPolite() + newValue.toInt());
                }
                if(reader.indexOf("-U_J-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setUJokes(userProfil->getUJokes() + newValue.toInt());
                }
                if(reader.indexOf("-U_BU-") == 0)
                {
                    int i = 9;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setUIsABadUser(userProfil->getUIsABadUser() + newValue.toInt());
                }
                if(reader.indexOf("-U_M-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setUMoral(userProfil->getUMoral() + newValue.toInt());
                }
                if(reader.indexOf("-U_C-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setUCurious(userProfil->getUCurious() + newValue.toInt());
                }
                if(reader.indexOf("-U_T-") == 0)
                {
                    int i = 8;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setUTired(userProfil->getUTired() + newValue.toInt());
                }
                if(reader.indexOf("-U_NAME-") == 0)
                {
                    int i = 11;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setNom(newValue);
                }
                if(reader.indexOf("-U_PNAME-") == 0)
                {
                    int i = 11;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setprenom(newValue);
                }
                if(reader.indexOf("-U_AGE-") == 0)
                {
                    int i = 11;
                    QString newValue;
                    while(i < reader.length())
                    {
                        newValue += reader[i];
                        ++i;
                    }
                    userProfil->setAge(newValue.toInt());
                }
            }
            endFile.remove();
        }
        else
            QMessageBox::critical(0, "Error", "Can't open this file " + reader);
    }
}
