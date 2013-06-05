#include "Semantik.h"

Semantik::Semantik()
{
    profiler = new Profiler;
    memInt = new MemoryInterface;
    addWord = new AddWord("temp");

    connect(profiler, SIGNAL(endOfTreatment(QString)), this, SLOT(sayEverything(QString)));
    connect(profiler, SIGNAL(newPath(QString)), this, SLOT(addNewFilePath(QString)));
    connect(profiler, SIGNAL(delPro(QString)), this, SLOT(delPro(QString)));
    connect(profiler, SIGNAL(newWord(QString)), this, SLOT(addNewWord(QString)));
    connect(profiler, SIGNAL(newFunc()), this, SLOT(addNewFunc()));
    connect(addWord, SIGNAL(sendWord(QString,QString,QString,QString)), this, SLOT(addWordSlot(QString,QString,QString,QString)));

    classicPaths.append("BDDS/LDetermine/5");
    classicPaths.append("BDDS/LDetermine/10");
    classicPaths.append("BDDS/LDetermine/15");
    classicPaths.append("BDDS/LDetermine/20");
    classicPaths.append("BDDS/LDetermine/+");
    classicPaths.append("BDDS/LIndetermine");
}

//Work with the message (parse the message, see the doc)
void Semantik::workData(QString message)
{
    if(message == "TCHAT:-OPEN-")
        profiler->workData("saluer ");

    //else if (message == "TCHATSET:SALUERT")
      //  profiler->setSaluerTrue();
    else
    {
        int ifTchat = message.indexOf("TCHAT");
        if(ifTchat != -1)//On reçois une phrase
        {
            QString messageRecu;
            for(int i = 6; i < message.length(); ++i)
                messageRecu += message[i];
            QFile history("history");
            if(!history.exists())
            {
                history.open(QIODevice::ReadWrite);
                history.close();
            }
            QTextStream out(&history);
            history.open(QIODevice::Append);
            out << "\nMe : " + messageRecu;
            messageRecu = messageRecu.toLower();
            //translateSentence(messageRecu);//a refaire
            //translatedSentence.clear();
            phrases = cutSentence(messageRecu);
            for(int k = 0; k < phrases.count(); ++k)
            {
                words = getWords(phrases.at(k));
                categoriesWords = setCategoriesWords(words);
                typesWords = setTypesWords(words);

                bool regExpTrouve = false;
                QString funcToExecute;
                params = " ";
                QStringList aFaire(activPaths);

                if(words.count() <= 5)
                    aFaire.append(classicPaths.at(0));
                else if(words.count() <= 10)
                    aFaire.append(classicPaths.at(1));
                else if(words.count() <= 15)
                    aFaire.append(classicPaths.at(2));
                else if(words.count() <= 20)
                    aFaire.append(classicPaths.at(3));
                else
                    aFaire.append(classicPaths.at(4));

                aFaire.append(classicPaths.at(5));

                //On cherche une reg ex
                for(int o = 0; o < aFaire.length(); ++o)
                {
                    QFile fichier(aFaire.at(o) + "/pathFunction");
                    fichier.open(QIODevice::ReadWrite);
                    QString tempPath;
                    while(!regExpTrouve && !fichier.atEnd())
                    {
                        tempPath = fichier.readLine();
                        QFile temp(aFaire.at(o) + '/' + tempPath.trimmed());
                        temp.open(QIODevice::ReadOnly);
                        while(!regExpTrouve && !temp.atEnd())
                        {
                            QString regExpTest = temp.readLine().trimmed();
                            //On regarde si on a un mot de la catégorie demandé et on le remplace.
                            if(!regExpTest.isEmpty())
                            {
                                int indexReplace = regExpTest.indexOf("--");
                                if(indexReplace != -1)
                                {
                                    QString tempCate;
                                    indexReplace += 2;
                                    while(regExpTest[indexReplace] != '-' && indexReplace < regExpTest.length() - 1)
                                    {
                                        tempCate += regExpTest[indexReplace];
                                        ++indexReplace;
                                    }
                                    QStringList temp = setCategoriesWords(words);
                                    int indexCate = -1;
                                    for(int z = 0; z < temp.count(); ++z)
                                    {
                                        if(temp.at(z).indexOf(tempCate.toLower()) != -1)
                                            indexCate = z;
                                    }
                                    if(indexCate != -1)
                                    {
                                        regExpTest.replace("--" + tempCate + "--", words.at(indexCate));
                                        params += "--" + words.at(indexCate) + "--";
                                    }
                                }
                                if(phrases.at(k).toLower().indexOf(QRegExp(regExpTest)) != - 1)
                                {
                                    regExpTrouve = true;
                                    funcToExecute = temp.readLine().trimmed();
                                }
                                else
                                    temp.readLine();
                            }
                        }
                    }
                }
                if(!funcToExecute.isEmpty())
                {
                    //On remplace --CATEGORIE-- par ce qu'il faut
                    funcToExecute.replace("--SENTENCESEND--", messageRecu);
                    funcToExecute += params;
                    profiler->workData(funcToExecute);
                    messageRecu.clear();
                }
                else if(!phrases.at(k).trimmed().isEmpty())//Si on ne sais pas
                {
                    int nbLignes = 0;
                    QFile *UnknownSentences = new QFile("unknowSentence");
                    UnknownSentences->open(QIODevice::ReadWrite);
                    if(UnknownSentences->isOpen())
                    {
                        while(!UnknownSentences->atEnd())
                        {
                            UnknownSentences->readLine();
                            ++nbLignes;
                        }
                        QTextStream out(UnknownSentences);
                        out << messageRecu + '\n';
                    }

                    int actionAFaire = 1;
                    //rand()%3 + 1
                    //if(actionAFaire == 1)
                        //profiler->getAgenda()->getAnAction();
                    if(actionAFaire == 2)
                    {
                        QFile *UnknownWord = new QFile("unknowWords");
                        UnknownWord->open(QIODevice::ReadWrite);
                        if(UnknownWord->isOpen())
                        {
                            int nbLines = 0;
                            while(!UnknownWord->atEnd())
                            {
                                UnknownWord->readLine();
                                ++nbLines;
                            }
                            if(nbLines == 0)
                                break;
                            int numMot = rand()%nbLines;
                            nbLines = 0;
                            UnknownWord->close();
                            UnknownWord->open(QIODevice::ReadWrite);
                            QString newFile;
                            while(nbLines < numMot)
                            {
                                newFile += UnknownWord->readLine();
                                ++nbLines;
                            }
                            newFile.truncate(newFile.length()-1);//Supprime le \n trainant
                            QString word = UnknownWord->readLine();
                            while(!UnknownWord->atEnd())
                            {
                                newFile += UnknownWord->readLine();
                            }

                            UnknownWord->close();
                            UnknownWord->remove();
                            UnknownWord->open(QIODevice::ReadWrite);

                            QTextStream out(UnknownWord);
                            out << newFile;

                            addWord = new AddWord(word);
                            addWord->show();
                            connect(addWord, SIGNAL(sendWord(QString,QString,QString,QString)), this, SLOT(addWordSlot(QString,QString,QString,QString)));
                        }
                    }
                    else
                    {
                        int ligne = rand()%nbLignes, i = 0;
                        UnknownSentences->close();
                        UnknownSentences->open(QIODevice::ReadOnly);
                        QString phraseNonConnue;
                        while(i < ligne)
                        {
                            UnknownSentences->readLine();
                            ++i;
                        }
                        phraseNonConnue = UnknownSentences->readLine();
                        //On demande ce qu'il faut faire dans le cas de cette phrase. TODO
                    }
                    //TODO REPAIR BUG
                    //On pose une question à l'utilisateur TODO
                }

                //TODO trier selon occurence
            }
        }
    }
}

//Get the user sentence and cut it into little sentence for semantik treatement
QStringList Semantik::cutSentence(QString sentenceToCut)
{
    QStringList sentenceAfterCut;
    QString temp;
    for(int i = 0; i < sentenceToCut.length(); ++i)
    {
        if(i < sentenceToCut.length() && sentenceToCut[i] != ';' && sentenceToCut[i] != '.' && sentenceToCut[i] != '!' && sentenceToCut[i] != '?')
            temp += sentenceToCut[i];
        else
        {
            sentenceAfterCut.append(temp);
            temp.clear();
        }
    }
    sentenceAfterCut.append(temp);
    return sentenceAfterCut;
}

QStringList Semantik::getWords(QString sentence)
{
    QStringList toReturn;

    QString temp;
    for(int i = 0; i < sentence.length(); ++i)
    {
        if(i < sentence.length() && sentence[i] != ' ' && sentence[i] != ',' && sentence[i] != ';' && sentence[i] != '.' && sentence[i] != '!' && sentence[i] != '?')
        {
            temp += sentence[i];
            if(i == sentence.length() - 1)
                toReturn.append(temp);
        }
        else
        {
            if(!temp.isEmpty())
                toReturn.append(temp);
            temp.clear();
        }
    }

    return toReturn;
}

QStringList Semantik::setCategoriesWords(QStringList words)
{
    QStringList categorieList;

    for(int i = 0; i < words.count(); ++i)
        categorieList.append(memInt->getCategorie(words[i]));

    return categorieList;
}

QStringList Semantik::setTypesWords(QStringList words)
{
    QStringList typesList;

    for(int i = 0; i < words.count(); ++i)
        typesList.append(memInt->getType(words[i]));

    return typesList;
}

void Semantik::sayEverything(QString message)
{
    emit saySomething(message);
}

void Semantik::addNewFilePath(QString newPath)
{
    activPaths.append(newPath);
}

void Semantik::translateSentence(QString sentence)
{
    QString adresseUrl("http://translate.google.fr/?hl=fr#auto/fr/" + sentence);
    const QUrl url = QUrl(adresseUrl.trimmed());
    const QNetworkRequest requete(url); //On crée notre requête
    QNetworkAccessManager *m = new QNetworkAccessManager;
    QNetworkReply *r = m->get(requete);
    connect(r, SIGNAL(finished()), this, SLOT(traduire()));
}

void Semantik::traduire()
{
    QNetworkReply *r = qobject_cast<QNetworkReply*>(sender()); //On récupère la réponse du serveur
        QFile f("temp.txt"); //On ouvre le fichier
        f.open(QIODevice::WriteOnly);
        f.write(r->readAll()); ////On lit la réponse du serveur que l'on met dans un fichier
        f.close(); //On ferme le fichier
        f.open(QIODevice::ReadOnly);
        QString traduitAction, temp;
        QChar trouve;
        bool ok = false;
        int i = 0;

        temp = f.readAll();
        f.close();
        f.open(QIODevice::ReadOnly);// On envoie tout le code dans un Qstring et le retravailler

        while(!ok || f.atEnd())
        {
            trouve = temp[i];
            ++i;
            if(trouve == 'r')
            {
                trouve = temp[i];
                ++i;
                if(trouve == 'e')
                {
                    trouve = temp[i];
                    ++i;
                    if(trouve == 's')
                    {
                        trouve = temp[i];
                        ++i;
                        if(trouve == 'u')
                        {
                            trouve = temp[i];
                            ++i;
                            if(trouve == 'l')
                            {
                                trouve = temp[i];
                                ++i;
                                if(trouve == 't')
                                {
                                    trouve = temp[i];
                                    ++i;
                                    if(trouve == '_')
                                    {
                                        trouve = temp[i];
                                        ++i;
                                        if(trouve == 'b')
                                        {
                                            trouve = temp[i];
                                            ++i;
                                            if(trouve == 'o')
                                            {
                                                trouve = temp[i];
                                                ++i;
                                                if(trouve == 'x')
                                                {
                                                    ok = true;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        ok = false;
        int balise = 0;
        while(balise != 3 || f.atEnd())
        {
            trouve = temp[i];
            ++i;
        if(trouve == '>' || trouve == '<')
            {
                ++balise;
            }
        }

        while(!ok)
        {
            traduitAction += temp[i];
            trouve = temp[i];
            ++i;
            if(trouve == '<')
            {
               ok = true;
            }
        }
        traduitAction.truncate(traduitAction.length() - 1);
        translatedSentence = traduitAction;

        r->deleteLater();
        close();
}

void Semantik::delPro(QString path)
{
    /*for(int i = 0; i < activPaths.count(); ++i)
    {
        if(activPaths.at(i).indexOf(path))
            activPaths.removeAt(i);
        break;
    }*/
}


void Semantik::addWordSlot(QString nom, QString def, QString syn, QString cat)
{
    QString message = "ADWPH1-|-";
    message += nom + "-|-";
    message += def + "-|-";
    message += syn + "-|-";
    message += cat;

    memInt->workData(message);
}

void Semantik::addNewWord(QString newWord)
{
    AddWord *addWord2 = new AddWord(newWord);
    addWord2->show();
    connect(addWord2, SIGNAL(sendWord(QString,QString,QString,QString)), this, SLOT(addWordSlot(QString,QString,QString,QString)));
}

void Semantik::addNewFunc()
{
    AddFunc *addFunc = new AddFunc;
    addFunc->exec();
}
