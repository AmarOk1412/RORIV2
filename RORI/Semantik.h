#ifndef SEMANTIK_H
#define SEMANTIK_H

//*************************************************************************//
//                             INCLUDES                                    //
//*************************************************************************//
#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QProcess>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>

#include <iostream>
#include <stdio.h>
#include <time.h>

#include "Profiler.h"
#include "MemoryInterface.h"
#include "AddWord.h"
#include "AddFunction.h"

//*************************************************************************//
//          Principal Interface for profil and choose a function           //
//*************************************************************************//

class Semantik : public QWidget
{
    Q_OBJECT

public:
    Semantik();

public slots:
    //For the communication
    void workData(QString message);
    QStringList cutSentence(QString sentenceToCut);
    QStringList getWords(QString sentence);
    QStringList setCategoriesWords(QStringList words);
    QStringList setTypesWords(QStringList words);
    void sayEverything(QString message);
    void addNewFilePath(QString newPath);
    void translateSentence(QString sentence);
    void traduire();
    void delPro(QString path);
    inline Profiler* getProfiler() { return profiler; };
    void addWordSlot(QString nom, QString def, QString syn, QString cat);
    void addNewWord(QString newWord);
    void addNewFunc();

signals:
    void saySomething(QString message);

private:
    //For semantik
    QStringList phrases;
    QStringList words;
    QStringList categoriesWords;
    QStringList typesWords;
    QStringList activPaths;
    QStringList classicPaths;
    QString translatedSentence;

    Profiler *profiler;
    MemoryInterface *memInt;
    QString params;
    AddWord *addWord;
};

#endif // SEMANTIK_H
