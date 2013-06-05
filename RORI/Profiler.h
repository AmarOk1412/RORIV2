#ifndef PROFILER_H
#define PROFILER_H

/***************************************************************************
 *                             INCLUDES                                    *
 ***************************************************************************/
#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QProcess>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QTcpServer>
#include <QTimer>

#include <iostream>
#include <stdio.h>
#include <time.h>

#include "enumeration.h"
#include "RoriProfil.h"
#include "UserProfil.h"
#include "Agenda.h"

//*************************************************************************//
//          Principal Interface for profil and choose a function           //
//*************************************************************************//

class Profiler : public QWidget
{
    Q_OBJECT

public:
    Profiler();
    void execFunction(QString pathToFunction);

public slots:
    bool condAccept(QStringList conds);
    void workData(QString message);
    void doAnAction(QString question,QString message, bool delAfter);

    //inline Agenda* getAgenda() { return agenda; }

    inline void setSaluerTrue() { saluer = true;}

    void lireEnd();

signals:
    void endOfTreatment(QString message);
    void newPath(QString newPath);
    void delPro(QString path);
    void newWord(QString newWord);
    void newFunc();

private:
    bool saluer;
    //Profiler
    RoriProfil *roriProfil;
    UserProfil *userProfil;
    //Agenda *agenda;

    //Exec command
    QList<QProcess *> listeProgramms;
    QStringList condToMakeFunction;
    QString scriptPython;
    QString endFile;
    QStringList params;    
    QTimer *timer;
};

#endif // PROFILER_H
