#ifndef ADDFUNCTION_H
#define ADDFUNCTION_H

#include <QDialog>
#include <QFormLayout>
#include <QLineEdit>
#include <QTextEdit>
#include <QLabel>
#include <QCheckBox>
#include <QPushButton>

class AddFunc : public QDialog
{
    Q_OBJECT
public:
    AddFunc(QWidget *parent = 0);
    void setupUI();
    void createPythonProgramm(QString name, QStringList import, QStringList action, QStringList reponse, QString endFile);
    void createRorifFile(QString name, QStringList cond, QString programm, QStringList params);

private slots:
    void createFunc();
    void help();

signals:

private:
    QFormLayout *layoutPrincipal;
    QLineEdit *functionName;
    QLineEdit *regexDetection;
    QLineEdit *conditions;
    QLineEdit *answer;
    QLineEdit *pythonParams;
    QCheckBox *sendSentenceToTheScript;
    QLineEdit *imports;
    QTextEdit *scriptCode;
    QPushButton *aide;
    QPushButton *create;
};


#endif // ADDFUNCTION_H
