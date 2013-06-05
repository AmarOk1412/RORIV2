#include "CreateAnswer.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>

CreateAnswer::CreateAnswer()
{

}

void CreateAnswer::createPythonProgramm(QString name, QStringList import,  QStringList action, QStringList reponse, QString endFile)
{
    QFile pythonProgramm("function/" + name + ".py");
    if(!pythonProgramm.exists())
    {
        pythonProgramm.open(QIODevice::WriteOnly);
        if(pythonProgramm.isOpen())
        {
            QString toWrite = " #!/usr/bin/python\n# -*- coding: latin-1 -*-";
            for(int i = 0; i < import.count(); ++i)
                toWrite += "import " + import.at(i).trimmed() + "\n";

            toWrite += '\n';

            toWrite += "mon_fichier = open(\"" + endFile + "\", \"w\")\ntoWrite = \"\"\n";
            toWrite += "r = random.randint(1,"+ QString::number(reponse.count()) + ")\n\n";
            for(int i = 0; i < reponse.count(); ++i)
            {
                if(i == 0)
                    toWrite += "if r == 1 :\n";
                else
                    toWrite += "elif r == " + QString::number(i) + " :\n";

                toWrite += "toWrite += \"Say : " + reponse.at(i) + "\"\n";
            }

            toWrite += '\n';

            for(int i = 0; i < action.count(); ++i)
                toWrite += action.at(i).trimmed() + "\n";

            toWrite += "\nmon_fichier.write(toWrite)\nmon_fichier.close()";

            QTextStream out(&pythonProgramm);
            out << toWrite.trimmed();
        }
    }
    else
        QMessageBox::information(0, "ERROR", tr("Ce programme existe déjà"));
}

void CreateAnswer::createRorifFile(QString name, QStringList cond, QString programm, QStringList params, QString endFile)
{
    QFile rorifProgramm("function/" + name + ".rorif");
    if(!rorifProgramm.exists())
    {
        rorifProgramm.open(QIODevice::WriteOnly);
        if(rorifProgramm.isOpen())
        {
            QString toWrite;
            for(int i = 0; i < cond.count(); ++i)
                toWrite += cond.at(i).trimmed() + " ";
            toWrite += "\n" + programm + " ";
            for(int i = 0; i < params.count(); ++i)
                toWrite += params.at(i).trimmed() + " ";
            toWrite += "\n" + endFile;

            QTextStream out(&rorifProgramm);
            out << toWrite.trimmed();
        }
    }
    else
        QMessageBox::information(0, "ERROR", tr("Ce programme existe déjà"));
}
