#include "MemoryInterface.h"
#include <QtWidgets/QMessageBox>
#include <QDir>

MemoryInterface::MemoryInterface() : QWidget()
{

}

//TODOWork with the messages
void MemoryInterface::workData(QString message)
{
    bool finBoucle = false;
    int i = 0;
    if(message.indexOf("SEARCH") != -1)
    {
        //Get new connection informations
        QString firstWord, operation, lastWord, ListenPort;
        while(!finBoucle)//Get the firstWord
        {
            if(message[i] != '-')
                firstWord += message[i];
            else
                finBoucle = true;

            ++i;
        }
        finBoucle = false;
        ++i;
        ++i;
        while(!finBoucle)//Get operation
        {
            if(message[i] != '-')
                operation += message[i];
            else
                finBoucle = true;

            ++i;
        }
        finBoucle = false;
        ++i;
        ++i;
        while(i < message.length())//Get lastWord
        {
            lastWord += message[i];

            ++i;
        }
        //Operation
        searchWord(firstWord, lastWord);
    }
    else if(message.indexOf("ADWPH1") == 0)
    {
        i = 9;
        //Le nom
        QString name;
        while(!finBoucle)
        {
            if(message[i] != '-')
                name += message[i];
            else
                finBoucle = true;

            ++i;
        }
        finBoucle = false;
        ++i;
        ++i;
        //La définition
        QString definition;
        while(!finBoucle)
        {
            if(message[i] != '-')
                definition += message[i];
            else
                finBoucle = true;

            ++i;
        }
        finBoucle = false;
        ++i;
        ++i;
        //Les synonymes (séparés par une virgule, donc QStringList
        QString tempSyn, temp;
        QStringList synonymes;
        while(!finBoucle)
        {
            if(message[i] != '-' && message[i] != ',')
                tempSyn += message[i];
            else if(message[i] != '-' && message[i] == ',')
            {
                temp += tempSyn;
                synonymes.append(tempSyn);
                tempSyn.clear();
            }else
            {
                temp += tempSyn;
                synonymes.append(tempSyn);
                tempSyn.clear();
                finBoucle = true;
            }

            ++i;
        }
        finBoucle = false;
        ++i;
        ++i;
        //La catégorie
        QString categorie;
        while(i < message.length())//Get the gate
        {
            categorie += message[i];
            ++i;
        }

        QString finalPath = moveFolder(name, categorie);//On donne le chemin du dossier à creer
        createFolder(finalPath);
        createDefinition(finalPath, name, definition);
        createSynonymeFile(finalPath, synonymes);
        addPathToArboTxt(name, synonymes, categorie);//BUG, on met a la fin et pas les synonymes. TODO

        sendCategorie();

    }
    else if(message.indexOf("GGRPH1"))
    {
        //Le premier mot
        QString firstWord;
        while(!finBoucle)
        {
            if(message[i] != '-')
                firstWord += message[i];
            else
                finBoucle = true;

            ++i;
        }
        finBoucle = false;
        ++i;
        ++i;
        //L'operation
        QString operation;
        while(!finBoucle)
        {
            if(message[i] != '-')
                operation += message[i];
            else
                finBoucle = true;

            ++i;
        }
        finBoucle = false;
        ++i;
        ++i;
        //Le second mot
        QString lastWord;
        while(!finBoucle)
        {
            if(message[i] != '-')
                lastWord += message[i];
            else
                finBoucle = true;

            ++i;
        }
        finBoucle = false;
        ++i;
        ++i;
        //Le feedback
        QChar goodOrBad = message[i];
        ++i;
        QChar trueOrFalse = message[i];
        ++i;
        QString feedback;
        while(i < message.length())//Get the gate
        {
            feedback += message[i];
            ++i;
        }


        QFile arborescenceFile("../BDD/arbo.txt");
        arborescenceFile.open(QIODevice::ReadWrite);
        QString line;
        if(arborescenceFile.isOpen())
        {
            QStringList phrasesRecuperer, ligneFichierAGarder;
            while(!arborescenceFile.atEnd())
            {
                line = arborescenceFile.readLine();
                if(line.indexOf(firstWord) != -1)
                {
                    line.truncate(line.indexOf(firstWord) + firstWord.length());
                    phrasesRecuperer.append(line);
                }
                else
                {
                    ligneFichierAGarder.append(line);
                }
            }
            for(int i = 0; i < phrasesRecuperer.count(); ++i)
            {
                QString chemin = phrasesRecuperer.at(i);
                QFile temp("../BDD/" + chemin.trimmed() + "/pond.pond");

                if(temp.exists())
                {
                    temp.open(QIODevice::ReadWrite);
                    int current = temp.readAll().toInt();
                    if(current < -100)
                    {
                        removeDir(QDir("../BDD/" + chemin.trimmed()));
                        arborescenceFile.remove();
                        arborescenceFile.open(QIODevice::ReadWrite);
                        QString toWrite;
                        for(int k = 0; k < ligneFichierAGarder.length(); ++k)
                        {
                            toWrite += ligneFichierAGarder.at(k);
                        }
                        QTextStream out(&arborescenceFile);
                        out << toWrite.trimmed();
                    }
                    else
                    {
                        int final = current - feedback.toInt();
                        temp.close();
                        temp.remove();
                        temp.open(QIODevice::ReadWrite);

                        QTextStream out(&temp);
                        out << QString::number(final).trimmed();
                    }
                }
                else
                {
                    temp.open(QIODevice::ReadWrite);

                    QTextStream out(&temp);
                    out << feedback.trimmed();
                }
            }
        }
        else
        {
            QMessageBox::critical(0, "Erreur", "Erreur lors de l'ouverture du fichier d'aborescence");
        }
    }
    else
    {
        QMessageBox::critical(0, "ERROR MESSAGE", "A message was sent to this neurone, but this neurone cannot work on this message<br>" + message);
    }
}

//TODOSend categorie to a PH1 Interface
void MemoryInterface::sendCategorie()
{
    QStringList categories;
    QString tempLine, fichier;
    QFile arborescenceFile("../BDD/arbo.txt");
    arborescenceFile.open(QIODevice::ReadWrite);
    if(arborescenceFile.isOpen())
    {
        fichier = arborescenceFile.readAll();
        for(int i = 0; i <= fichier.length(); ++i)
        {
            if(fichier[i] == '/' || fichier[i] == '\n')
            {
                if(categories.indexOf(tempLine) == -1)
                    categories.append(tempLine);
                tempLine = "";
            }
            else
                tempLine += fichier[i];
        }
        QString message;
        for(int i = 0; i < categories.length(); ++i)
        {
            message += categories.at(i);
            message += ",";
        }
    }
    else
    {
        QMessageBox::critical(0, "Erreur", "Erreur lors de l'ouverture du fichier d'aborescence");
    }
}

//TODOSearch a line with the words
QStringList MemoryInterface::searchWord(QString mot1, QString mot2)
{
    mot2 = "/" + mot2;
    QStringList phrasesRecuperer;
    QStringList categories;
    QFile arborescenceFile("../BDD/arbo.txt");
    arborescenceFile.open(QIODevice::ReadWrite);
    QString line;
    if(arborescenceFile.isOpen())
    {
        while(!arborescenceFile.atEnd())
        {
            line = arborescenceFile.readLine();
            if((line.indexOf(mot1) != -1 && line.indexOf(mot2) != -1) || (line.indexOf(mot1) != -1 || line.indexOf(mot2) != -1))
                phrasesRecuperer.append(line);
        }

        QStringList words;
        for(int i = 0; i < phrasesRecuperer.count(); ++i)
        {
            int j = 0, k = 0;
            QString temp;
            while(j < phrasesRecuperer.at(i).length())
            {
                if(phrasesRecuperer.at(i).at(j) != '/')
                    temp += phrasesRecuperer.at(i).at(j);
                else
                {
                    words.append(temp);
                    temp.clear();
                }

                if(j == phrasesRecuperer.at(i).length() - 1)
                {
                    words.append(temp);
                    temp.clear();
                }
                ++j;
            }

            while(k < words.count())
            {
                int indexOfWord = phrasesRecuperer.at(i).indexOf(words.at(k).trimmed());
                int indexOfCategorie;

                if(mot1 == "?")
                    indexOfCategorie = phrasesRecuperer.at(i).indexOf(mot2);
                else
                    indexOfCategorie = phrasesRecuperer.at(i).indexOf(mot1);

                if(indexOfWord < indexOfCategorie && mot1 == "?")
                    categories.append(words.at(k).trimmed());
                else if(indexOfWord >= indexOfCategorie && mot2 == "?")
                    categories.append(words.at(k).trimmed());

                ++k;
            }

        }
    }
    else
    {
        QMessageBox::critical(0, "Erreur", "Erreur lors de l'ouverture du fichier d'aborescence");
    }

    return categories;
}

//Create a folder, and write files into this folder (after we must move this file at his place)
void MemoryInterface::createFolder(QString path)
{
    QDir *base = new QDir();
    QString direction(path);
    base->mkdir(direction);
}

void MemoryInterface::createDefinition(QString nomPath, QString nomFichier, QString definition)
{
    QFile definitionFile(nomPath + "/" + nomFichier + "-def.txt");
    definitionFile.open(QIODevice::WriteOnly);
    if(definitionFile.isOpen())
    {
        QTextStream out(&definitionFile);
        out << definition.trimmed();
    }
    else
    {
        QMessageBox::critical(0, "Warning", "The programm can't create the file");
    }
}

void MemoryInterface::createSynonymeFile(QString nomPath, QStringList synonymes)
{
    for(int i = 0; i < synonymes.count(); ++i)
    {
        QFile definitionFile(nomPath + "/" + synonymes.at(i) + ".syn");
        definitionFile.open(QIODevice::WriteOnly);
    }
}

QString MemoryInterface::moveFolder(QString folderToMove, QString intoThisFolder)
{
    QFile arborescenceFile("../BDD/arbo.txt");
    arborescenceFile.open(QIODevice::ReadWrite);
    QString line, pathOfIntoThisFolder = "../BDD/";
    if(arborescenceFile.isOpen())
    {
        while(!arborescenceFile.atEnd())
        {
            line = arborescenceFile.readLine();
            if(line.indexOf(intoThisFolder) != -1)
            {
                pathOfIntoThisFolder = "../BDD/";
                for(int i = 0; i < line.indexOf(intoThisFolder) + intoThisFolder.length(); ++i)
                {
                    pathOfIntoThisFolder += line[i];
                }
            }
        }

    }
    else
    {
        QMessageBox::critical(0, "Erreur", "Erreur lors de l'ouverture du fichier d'aborescence");
    }

    return pathOfIntoThisFolder + "/" + folderToMove;
}

void MemoryInterface::addPathToArboTxt(QString path, QStringList syn, QString intoThisFolder)
{
    QFile arborescenceFile("../BDD/arbo.txt");
    arborescenceFile.open(QIODevice::ReadWrite);
    QString line, pathOfIntoThisFolder = "../BDD/", toWrite;
    bool contains = false, isWrite = false;
    if(arborescenceFile.isOpen())
    {
        while(!arborescenceFile.atEnd())
        {
            line = arborescenceFile.readLine();
            if(line.indexOf(intoThisFolder) != -1)
            {
                contains = true;
                pathOfIntoThisFolder = "";
                for(int i = 0; i < line.indexOf(intoThisFolder) + intoThisFolder.length(); ++i)
                {
                    pathOfIntoThisFolder += line[i];
                }
                toWrite = pathOfIntoThisFolder + "/" + path;
                for(int i = 0; i < syn.count(); ++i)
                {
                    toWrite += "\n" + pathOfIntoThisFolder + "/" + syn.at(i);
                }
            }
        }


        if(!isWrite)
        {
            QTextStream out(&arborescenceFile);
            out << toWrite;
        }
    }
    else
    {
        QMessageBox::critical(0, "Erreur", "Erreur lors de l'ouverture du fichier d'aborescence");
    }
}

bool MemoryInterface::removeDir(QDir aDir)
{
    bool has_err = false;
    if (aDir.exists())//QDir::NoDotAndDotDot
    {
        QFileInfoList entries = aDir.entryInfoList(QDir::NoDotAndDotDot | QDir::Dirs | QDir::Files);

        int count = entries.size();

        for (int idx = 0; ((idx < count) && !has_err); idx++)
        {
            QFileInfo entryInfo = entries[idx];
            QString path = entryInfo.absoluteFilePath();

            if (entryInfo.isDir())
            {
                has_err = removeDir(QDir(path));

            }
            else
            {
                QFile file(path);
                if (!file.remove())
                {
                    has_err = true;
                }
            }
        }

        if (!aDir.rmdir(aDir.absolutePath()))
        {
            qDebug("Erreur de suppression de rép: " + aDir.absolutePath().toLatin1());
            has_err = true;
        }
    }
    return(has_err);
}

QString MemoryInterface::getCategorie(QString word)
{
    QString toReturn = "(";
    QStringList temp = searchWord("?",word);
    for(int i = 0; i < temp.count(); ++i)
    {
        toReturn += temp.at(i);;
        toReturn += '|';
    }
    if(temp.count() == 0)
    {
        QFile *UnknownWords = new QFile("unknowWords");
        UnknownWords->open(QIODevice::ReadWrite);
        if(UnknownWords->isOpen())
        {
            QString file = UnknownWords->readAll();
            if(file.indexOf(word) == -1)
            {
                QTextStream out(UnknownWords);
                out << word + '\n';
            }
        }
    }

    toReturn.truncate(toReturn.length() - 1);
    toReturn += ")";

    return toReturn;
}

/**
 * @brief MemoryInterface::getType get if the word is a name, a adverb, a verb, ...
 * @param word the word to get the type
 * @return the type of the word
 */
QString MemoryInterface::getType(QString word)
{
    QString toReturn;
    QString type;
    word = word.toLower();

    QFile *arbo = new QFile("../BDD/arbo.txt");
    QString ligneWord;
    arbo->open(QIODevice::ReadOnly);
    while(ligneWord.indexOf('/' + word + '/') == -1 && !arbo->atEnd())
    {
        ligneWord = arbo->readLine().trimmed();
    }

    if(!ligneWord.isEmpty() && !arbo->atEnd())
    {
        QFile def("../BDD/" + ligneWord + word + "-def.txt");
        if(def.exists())
        {
            def.open(QIODevice::ReadOnly);
            if(def.isOpen())
                type = def.readLine().trimmed();
        }
    }

    if(!type.isEmpty())
        toReturn = type;

    return toReturn;
}
