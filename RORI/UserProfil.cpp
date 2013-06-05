#include "UserProfil.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>


UserProfil::UserProfil() : QWidget()
{
    uHumor      = 0;
    uPolite     = 0;
    uJokes      = 50;
    uTired      = 50;
    uIsABadUser = 0;
    uCurious    = 50;

    nom = "BLIN";
    prenom = "Sebastien";
    age = 18;

    QFile profil("up.inf");
    profil.open(QIODevice::ReadOnly);
    if(profil.isOpen())
    {
        setUHumor(profil.readLine().toInt());
        setUIsABadUser(profil.readLine().toInt());
        setUJokes(profil.readLine().toInt());
        setUMoral(profil.readLine().toInt());
        setUPolite(profil.readLine().toInt());
        setUCurious(profil.readLine().toInt());
        setUTired(profil.readLine().toInt());
    }
}

void UserProfil::saveProfil()
{
    QFile profil("up.inf");
    profil.open(QIODevice::WriteOnly);
    if(profil.isOpen())
    {
        QString toWrite;
        toWrite += QString::number(getUHumor());
        toWrite += '\n';
        toWrite += QString::number(getUIsABadUser());
        toWrite += '\n';
        toWrite += QString::number(getUJokes());
        toWrite += '\n';
        toWrite += QString::number(getUMoral());
        toWrite += '\n';
        toWrite += QString::number(getUPolite());
        toWrite += '\n';
        toWrite += QString::number(getUCurious());
        toWrite += '\n';
        toWrite += QString::number(getUTired());
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
