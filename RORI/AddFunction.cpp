#include "AddFunction.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

AddFunc::AddFunc(QWidget *parent) : QDialog(parent)
{
    setupUI();
}

void AddFunc::setupUI()
{
    layoutPrincipal = new QFormLayout;
        functionName = new QLineEdit;
        regexDetection = new QLineEdit;
        conditions = new QLineEdit;
        answer = new QLineEdit;
        pythonParams = new QLineEdit;
        sendSentenceToTheScript = new QCheckBox;
        imports = new QLineEdit;
        scriptCode = new QTextEdit;
        aide = new QPushButton(tr("Aide"));
        create = new QPushButton(tr("Créer"));
    layoutPrincipal->addRow("Nom de la fonction : ", functionName);
    layoutPrincipal->addRow("Regex de détection : ", regexDetection);
    layoutPrincipal->addRow("Condition d'éxécution : ", conditions);
    layoutPrincipal->addRow("Réponse de RORI : ", answer);//Todo multi
    layoutPrincipal->addRow("Paramètres à envoyer au script : ", pythonParams);//TO DO l'aide
    layoutPrincipal->addRow("Envoyer la phrase au script : ", sendSentenceToTheScript);
    layoutPrincipal->addRow("Import de librairies pythons : ", imports);
    layoutPrincipal->addRow("Corps du script python : ", scriptCode);
    layoutPrincipal->addWidget(aide);
    layoutPrincipal->addWidget(create);

    connect(aide, SIGNAL(clicked()), this, SLOT(help()));
    connect(create, SIGNAL(clicked()), this, SLOT(createFunc()));

    this->setLayout(layoutPrincipal);
}

void AddFunc::createFunc()
{
    if(functionName->text().isEmpty())
        QMessageBox::critical(0, tr("ERROR"), tr("Veuillez donner un nom à la fonction"));
    else if(QFile("function/" + functionName->text() + ".rorif").exists())
        QMessageBox::critical(0, tr("ERROR"), tr("Cette fonction existe déjà, veuillez changer son nom"));
    else
    {
        QStringList regexList;
        QString temp;
        for(int i = 0; i < regexDetection->text().length(); ++i)
        {
            if(regexDetection->text()[i] == '-' && regexDetection->text()[i - 1] == '|' && regexDetection->text()[i - 2] == '-')
            {
                temp.truncate(temp.length() - 2);
                regexList.append(temp);
                temp.clear();
            }
            else if(i == regexDetection->text().length() - 1)
            {
                temp += regexDetection->text()[i];
                regexList.append(temp);
                temp.clear();
            }
            else
                temp += regexDetection->text()[i];
        }

        QFile regexFile("BDDS/LIndetermine/user.f");
        regexFile.open(QIODevice::ReadWrite);
        if(regexFile.isOpen())
        {
            QString toWrite;
            toWrite = regexFile.readAll();
            for(int i = 0; i < regexList.count(); ++i)
            {
                toWrite += regexList[i] + '\n' + functionName->text();
                if(sendSentenceToTheScript->isChecked())
                    toWrite += " --SENTENCESEND--";
                toWrite += '\n';
            }
            regexFile.close();
            regexFile.open(QIODevice::WriteOnly);
            QTextStream out(&regexFile);
            out << toWrite;
        }

        QStringList cond;
        for(int i = 0; i < conditions->text().length(); ++i)
        {
            if(conditions->text()[i] == ' ')
            {

            }
            else if(conditions->text()[i] == ',')
            {
                cond.append(temp);
                temp.clear();
            }
            else if(i == conditions->text().length() - 1)
            {
                temp += conditions->text()[i];
                cond.append(temp);
                temp.clear();
            }
            else
                temp += conditions->text()[i];
        }

        QStringList params;
        for(int i = 0; i < pythonParams->text().length(); ++i)
        {
            if(pythonParams->text()[i] == ' ')
            {

            }
            else if(pythonParams->text()[i] == ',')
            {
                params.append(temp);
                temp.clear();
            }
            else if(i == pythonParams->text().length() - 1)
            {
                temp += pythonParams->text()[i];
                params.append(temp);
                temp.clear();
            }
            else
                temp += pythonParams->text()[i];
        }

        QStringList import;
        for(int i = 0; i < imports->text().length(); ++i)
        {
            if(imports->text()[i] == ' ')
            {

            }
            else if(imports->text()[i] == ',')
            {
                import.append(temp);
                temp.clear();
            }
            else if(i == imports->text().length() - 1)
            {
                temp += imports->text()[i];
                import.append(temp);
                temp.clear();
            }
            else
                temp += imports->text()[i];
        }

        QStringList answerList;
        for(int i = 0; i < answer->text().length(); ++i)
        {
            if(answer->text()[i] == '-' && answer->text()[i - 1] == '|' && answer->text()[i - 2] == '-')
            {
                temp.truncate(temp.length() - 2);
                answerList.append(temp);
                temp.clear();
            }
            else if(i == answer->text().length() - 1)
            {
                temp += answer->text()[i];
                answerList.append(temp);
                temp.clear();
            }
            else
                temp += answer->text()[i];
        }


        createRorifFile(functionName->text(), cond, functionName->text(), params);

        QStringList action;
        action.append(scriptCode->toPlainText());
        createPythonProgramm(functionName->text(), import, action, answerList, "end");
    }
}

void AddFunc::createPythonProgramm(QString name, QStringList import,  QStringList action, QStringList reponse, QString endFile)
{
    QFile pythonProgramm("function/" + name + ".py");
    if(!pythonProgramm.exists())
    {
        pythonProgramm.open(QIODevice::WriteOnly);
        if(pythonProgramm.isOpen())
        {
            QString toWrite = " #!/usr/bin/python\n# -*- coding: latin-1 -*-\n";
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
                    toWrite += "elif r == " + QString::number(i + 1) + " :\n";

                toWrite += "    toWrite += \"Say : " + reponse.at(i) + "\"\n";
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

void AddFunc::createRorifFile(QString name, QStringList cond, QString programm, QStringList params)
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

            QTextStream out(&rorifProgramm);
            out << toWrite.trimmed();
        }
    }
    else
        QMessageBox::information(0, "ERROR", tr("Ce programme existe déjà"));
}

void AddFunc::help()
{
    QDialog *temp = new QDialog(0);
    QLabel *aide = new QLabel(tr("Comment créer une fonction : \n" \
                              "I: Donnez un nom de fonction non pris \n" \
                              "II: Donnez les regex séparés par -|- exemple : regex1-|-regex2 \n"\
                              "III: Donnez les conditions séparés par des , \n"\
                              "IV: Donnez les réponses de RORI séparés par -|- (comme les regex) \n" \
                              "V: Donnez les paramètres séparés par des , et lire la documentation pour la liste des paramètres \n" \
                              "VI: Vous pouvez envoyer la phrase dite par l\'utilisateur en cochant la case\n"\
                              "VII: Les imports de librairies sont séparés par des ,\n"\
                              "VIII: Ecrivez le corps du script python qui peut bien entendu appeler un programme externe !"), temp);
    temp->setMinimumSize(700,200);
    temp->exec();
}
