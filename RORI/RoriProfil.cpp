#include "RoriProfil.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

RoriProfil::RoriProfil() : QWidget()
{
    QFile profil("rp.inf");
    profil.open(QIODevice::ReadOnly);
    roriHumor    = 0;
    roriPolite   = 0;
    roriJokes    = 0;
    roriIsABadIA = 0;

    nom = "GUILMORE";
    prenom = "RORI";
    age = 0;
    if(profil.isOpen())
    {
        setRoriHumor(profil.readLine().toInt());
        setRoriIsABadIA(profil.readLine().toInt());
        setRoriJokes(profil.readLine().toInt());
        setRoriMoral(profil.readLine().toInt());
        setRoriPolite(profil.readLine().toInt());
        setRoriScared(profil.readLine().toInt());
        //Age
        //Nom
        //Prenom
    }
}

void RoriProfil::saveProfil()
{
    QFile profil("rp.inf");
    profil.open(QIODevice::WriteOnly);
    if(profil.isOpen())
    {
        QString toWrite;
        toWrite += QString::number(getRoriHumor());
        toWrite += '\n';
        toWrite += QString::number(getRoriIsABadIA());
        toWrite += '\n';
        toWrite += QString::number(getRoriJokes());
        toWrite += '\n';
        toWrite += QString::number(getRoriMoral());
        toWrite += '\n';
        toWrite += QString::number(getRoriPolite());
        toWrite += '\n';
        toWrite += QString::number(getRoriScared());
        toWrite += '\n';
        toWrite += QString::number(getAge());
        toWrite += '\n';
        toWrite += getNom();
        toWrite += '\n';
        toWrite += getPrenom();
        QTextStream out(&profil);
        out << toWrite.trimmed();
    }
}
