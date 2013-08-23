#include "Profiler.h"
#include <math.h>
#include <QDir>

Profiler::Profiler()
{
    roriProfil = new RoriProfil();
    userProfil = new UserProfil();
    saluer = false;
    agenda = new Agenda();

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(lireEnd()));
    timer->start(100);

    timerMakeAction = new QTimer();
    int profil = roriProfil->getRoriHumor() + roriProfil->getRoriIsABadIA() + roriProfil->getRoriPolite() + roriProfil->getRoriMoral();
    profil += userProfil->getUCurious() + userProfil->getUHumor() + userProfil->getUIsABadUser() + userProfil->getUMoral();
    profil += userProfil->getUPolite() + userProfil->getUPolite();
    int somme = abs(profil - 500) < profil ? abs(profil - 500)*1000 : profil*1000;
    int form = 900000 + somme * ((rand()%3)+1);
    connect(timerMakeAction, SIGNAL(timeout()), this, SLOT(doAnAction()));
    timerMakeAction->start(form);
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

/**
 * @brief Profiler::doAnAction recalc the timer and give an action from the Agenda
 */
void Profiler::doAnAction()
{
    timerMakeAction->stop();

    //Get an action and ask the user
    QStringList action;
    action = agenda->getAnAction();

    //Make files
    emit newPath("BDDS/Agenda/");
    QDir *t = new QDir();
    t->mkdir("BDDS/Agenda");
    QFile *path = new QFile("BDDS/Agenda/pathFunction");
    if(path->exists())
        path->remove();
    path->open(QIODevice::WriteOnly);
    if(path->isOpen())
        path->write("gen.f");

    path->close();

    QFile *genFunction = new QFile("BDDS/Agenda/gen.f");
    if(genFunction->exists())
        genFunction->remove();
    genFunction->open(QIODevice::WriteOnly);
    if(genFunction->isOpen())
    {
        genFunction->write("^(ok|d.ac(cord)|fai..le|ou(a|)i(p|)|ye(s|p))$\n");
        genFunction->write("ouigen\n");
        genFunction->write("^(no(n|pe|)|plus.tar.)$\n");
        genFunction->write("nogen\n");
    }
    genFunction->close();

    QString programme, parametres;
    int p = 0;
    while(p < action.at(2).length() && action.at(2)[p] != ' ')
    {
        programme += action.at(2)[p];
        ++p;
    }
    ++p;
    while(p < action.at(2).length())
    {
        parametres += action.at(2)[p];
        ++p;
    }
    QFile *ouiGen = new QFile("function/ouigen.rorif");
    if(ouiGen->exists())
        ouiGen->remove();
    ouiGen->open(QIODevice::WriteOnly);
    if(ouiGen->isOpen())
    {
        ouiGen->write("R_BH U_NI\npython function/ouigen.py ");
    }
    ouiGen->close();

    QFile *noGen = new QFile("function/nogen.rorif");
    if(noGen->exists())
        noGen->remove();
    noGen->open(QIODevice::WriteOnly);
    if(noGen->isOpen())
    {
        noGen->write("R_BH U_NI\npython function/nogen.py ");
    }
    noGen->close();

    QString enleverFunc = "";
    if(action.at(0)[10] == '0')
        enleverFunc = "ENLA-|-" + action.at(0) + "-|-" + action.at(1) + "-|-"+ action.at(2);

    QFile *ouiGenP = new QFile("function/ouigen.py");
    if(ouiGenP->exists())
        ouiGenP->remove();
    ouiGenP->open(QIODevice::WriteOnly);
    if(ouiGenP->isOpen())
    {
        QString file = " #!/usr/bin/python\n# -*- coding: latin-1 -*-\nimport sys\nimport subprocess\nmon_fichier = open(\"end\", \"w\")\ntoWrite = \"ResNFA\\n\"\ntoWrite += \""+enleverFunc+"\\n\"\ntoWrite += \"\\n-R_M- : -10\"\ntoWrite += \"\\n-R_J- : -10\"\ntoWrite += \"\\n-U_C- : -10\"\ntoWrite += \"\\n-U_BU- : -10\"\nmon_fichier.write(toWrite)\n\nmon_fichier.close()\nsubprocess.call(\"python function/" + action.at(2) +"\", shell = True)";
        QTextStream out(ouiGenP);
        out << file;
    }
    ouiGenP->close();

    QFile *noGenP = new QFile("function/nogen.py");
    if(noGenP->exists())
        noGenP->remove();
    noGenP->open(QIODevice::WriteOnly);
    if(noGenP->isOpen())
    {
        noGenP->write(" #!/usr/bin/python\n\
              # -*- coding: latin-1 -*-\n\
             import sys\n\
             mon_fichier = open(\"end\", \"w\")\n\
             \n\
             toWrite = \"ResNFA\"\n\
             \n\
             toWrite += \"\\n-R_M- : -10\"\n\
             toWrite += \"\\n-R_J- : -10\"\n\
             toWrite += \"\\n-U_C- : -10\"\n\
             toWrite += \"\\n-U_BU- : -10\"\n\
             mon_fichier.write(toWrite)\n\
             \n\
             mon_fichier.close()");
    }
    noGenP->close();

    if(action.count() == 3)
    {
        emit endOfTreatment("RORISAY:" + action.at(1));
    }

    //Recalc the timer
    int profil = roriProfil->getRoriHumor() + roriProfil->getRoriIsABadIA() + roriProfil->getRoriPolite() + roriProfil->getRoriMoral();
    profil += userProfil->getUCurious() + userProfil->getUHumor() + userProfil->getUIsABadUser() + userProfil->getUMoral();
    profil += userProfil->getUPolite() + userProfil->getUPolite();
    int somme = abs(profil - 500) < profil ? abs(profil - 500)*1000 : profil*1000;
    int form = 900000 + somme * ((rand()%3)+1);
    timerMakeAction->start(form);
}

/**
 * @brief Profiler::lireEnd, every second this function read a file called 'end' for control the profiler and RORI
 */
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

                    toSay.replace("-UNAME-", userProfil->getNom());
                    toSay.replace("-UPNAME-", userProfil->getPrenom());
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
                if(reader.indexOf("LongSay") == 0)
                {
                    int i = 10;
                    QString toSay;
                    while(i < reader.length())
                    {
                        toSay += reader[i];
                        ++i;
                    }
                    QString line;
                    while(line.indexOf("LongSay") != 0)
                    {
                        line = endFile.readLine();
                        if(line.indexOf("LongSay") != 0)
                            toSay += line;
                        ++i;
                    }

                    toSay.replace("-UNAME-", userProfil->getNom());
                    toSay.replace("-UPNAME-", userProfil->getPrenom());
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
                if(reader.indexOf("ResNFA") == 0)
                {
                    emit resetPathAgenda();
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
                if(reader.indexOf("ENLA") == 0)
                {
                    int i = 7;
                    QString fileName, phrase, action;
                    while(i < reader.length() && (reader.at(i) != '-' || reader.at(i+1) != '|' || reader.at(i+2) != '-'))
                    {
                        fileName += reader.at(i);
                        ++i;
                    }
                    i+=3;
                    while(i < reader.length() && (reader.at(i) != '-' || reader.at(i+1) != '|' || reader.at(i+2) != '-'))
                    {
                        phrase += reader.at(i);
                        ++i;
                    }
                    i+=3;
                    while(i < reader.length())
                    {
                        action += reader.at(i);
                        ++i;
                    }

                    QString newFile;
                    QFile *toChange = new QFile("Agenda/" + fileName);
                    toChange->open(QIODevice::ReadWrite);
                    while(!toChange->atEnd())
                    {
                        QString ligne = toChange->readLine();
                        QString ligne2 = toChange->readLine();
                        if(ligne.trimmed() == phrase && ligne2.trimmed() == action)
                        {

                        }
                        else
                            newFile += ligne + ligne2;
                    }
                    toChange->close();
                    toChange->remove();
                    toChange->open(QIODevice::ReadWrite);
                    if(toChange->isOpen())
                    {
                        QTextStream out(toChange);
                        //newFile.truncate(newFile.length() - 1);
                        out << newFile;
                    }

                }
            }
            endFile.remove();
        }
        else
            QMessageBox::critical(0, "Error", "Can't open this file " + reader);
    }
}

void Profiler::stopRolling()
{
    m_rolling = false;
}
