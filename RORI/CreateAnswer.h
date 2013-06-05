#ifndef CREATEANSWER_H
#define CREATEANSWER_H

#include <QWidget>

class CreateAnswer : public QWidget
{
    Q_OBJECT

public:
    CreateAnswer();
    void createPythonProgramm(QString name, QStringList import, QStringList action, QStringList reponse, QString endFile);
    void createRorifFile(QString name, QStringList cond, QString programm, QStringList params, QString endFile);

private:

};

#endif // CREATEANSWER_H
