#include "Agenda.h"
#include <QProcess>
#include <QFile>
#include <QApplication>
#include <QMessageBox>
#include <QDateTime>
#include <QTime>
#include <stdlib.h>

Agenda::Agenda() : QWidget()
{
    recupActions();
    if(!actions.isEmpty())
        getAnAction();
}

/**
 * @brief Agenda::recupActions read all files and write them into a stringlist
 */
void Agenda::recupActions()
{
    QProcess *tempP = new QProcess();
    QFile *liste = new QFile("Agenda/liste");
    liste->open(QIODevice::ReadWrite);
    if(liste->isOpen())
    {
        QString ligne;
        while(!liste->atEnd())
        {
            ligne = liste->readLine();
            if(ligne.count() == 12)
            {
                QFile tempFile("Agenda/" + ligne.trimmed());
                tempFile.open(QIODevice::ReadWrite);
                if(tempFile.isOpen())
                {
                    while(!tempFile.atEnd())
                    {
                        actions.append(ligne.trimmed());
                        actions.append(tempFile.readLine().trimmed());
                        actions.append(tempFile.readLine().trimmed());
                    }
                }
            }
        }
    }
    liste->remove();
    tempP->start("sh");
    tempP->write("cd Agenda;");
    tempP->write("ls >> liste");

}

/**
 * @brief Agenda::getAnAction return an Action to make for RORI
 * @return file (hhjjmmaaaac), toSay, action ; If we have not got any action: QStringList()
 */
QStringList Agenda::getAnAction()
{
    bool actionPossible = false;
    int randomValue = 0;
    int i = 0;
    while(!actionPossible && i < 5000)
    {
        randomValue = rand() % (actions.count()/3);

        QTime time = QTime::currentTime();
        QDate date = QDate::currentDate();
        QString jour = QString::number(date.day());
        QString mois = QString::number(date.month());
        QString annee = QString::number(date.year());
        QString heure = QString::number(time.hour());

        QString heureFichier = actions.at(randomValue*3)[0];
        heureFichier += actions.at(randomValue*3)[1];
        QString jourFichier = actions.at(randomValue*3)[2];
        jourFichier += actions.at(randomValue*3)[3];
        QString moisFichier = actions.at(randomValue*3)[4];
        moisFichier += actions.at(randomValue*3)[5];
        QString anFichier = actions.at(randomValue*3)[6];
        anFichier += actions.at(randomValue*3)[7];
        anFichier += actions.at(randomValue*3)[8];
        anFichier += actions.at(randomValue*3)[9];


        if((heureFichier == "xx" || heureFichier == heure) && (jourFichier == "xx" || jourFichier == jour || jourFichier == 'd' + QString::number(date.dayOfWeek()))
                && (moisFichier == "xx" || moisFichier == mois) && (anFichier == "xxxx" || anFichier == annee))
            actionPossible = true;

        ++i;
    }
    QStringList toReturn;
    if(i < 5000)
    {
        toReturn.append(actions.at(randomValue*3));
        toReturn.append(actions.at(randomValue*3 + 1));
        toReturn.append(actions.at(randomValue*3 + 2));
    }
    return toReturn;
}
