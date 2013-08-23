#include "AgendaWidget.h"
#include <QProcess>
#include <QFile>
#include <QIODevice>
#include <QMessageBox>
#include <QTextStream>

AgendaWidget::AgendaWidget(QWidget *parent) : QWidget(parent)
{
    setupUi();
    recupActions();

    changeModifyText(QDate::currentDate());

    connect(calendar, SIGNAL(clicked(QDate)), this, SLOT(changeModifyText(QDate)));
    connect(validate, SIGNAL(clicked()), this, SLOT(saveClicked()));
}

/**
 * @brief AgendaWidget::setupUi create the UX
 */
void AgendaWidget::setupUi()
{
    principalLayout = new QHBoxLayout(this);
    calendar = new QCalendarWidget(this);
    layoutModify = new QVBoxLayout(this);
    toModify = new QTextEdit(this);
    toModify->setStyleSheet("background-color:#3b3a3f; color:white; border:0");
    validate = new QPushButton("Enregistrer", this);
    validate->setStyleSheet("align:center; color:white; font-size:20px; border:0; background-color: #1a7c88; width: 250px; height:40px;border-radius: 10px;");

    principalLayout->addWidget(calendar);
    layoutModify->addWidget(toModify);
    layoutModify->addWidget(validate);
    principalLayout->addLayout(layoutModify);
    this->setLayout(principalLayout);
}

void AgendaWidget::changeModifyText(QDate date)
{
    toModify->clear();
    for(int i = 0; i < actions.count(); ++i)
    {
        QDate date2 = date;
        QString jour = QString::number(date2.day());
        QString mois = QString::number(date2.month());
        QString annee = QString::number(date2.year());

        QString jourFichier = actions.at(i)[2];
        jourFichier += actions.at(i)[3];

        QString moisFichier = actions.at(i)[4];
        moisFichier += actions.at(i)[5];

        QString anFichier = actions.at(i)[6];
        anFichier += actions.at(i)[7];
        anFichier += actions.at(i)[8];
        anFichier += actions.at(i)[9];

        if((jourFichier == "xx" || jourFichier == jour || jourFichier == 'd' + QString::number(date2.dayOfWeek()))
                && (moisFichier == "xx" || moisFichier == mois) && (anFichier == "xxxx" || anFichier == annee))
        {
            toModify->setText(toModify->toPlainText() + actions.at(i) + '\n' + actions.at(i+1) + '\n' + actions.at(i+2) + '\n');
            i += 2;
        }
        else
            i += 2;
    }
}

/**
* @brief Agenda::recupActions read all files and write them into a stringlist
*/
void AgendaWidget::recupActions()
{
    actions.clear();
    QProcess *tempP = new QProcess();
    QFile *liste = new QFile("../RORI/Agenda/liste");
    liste->open(QIODevice::ReadWrite);
    if(liste->isOpen())
    {
        QString ligne;
        while(!liste->atEnd())
        {
            ligne = liste->readLine();
            if(ligne.count() == 12)
            {
                QFile tempFile("../RORI/Agenda/" + ligne.trimmed());
                tempFile.open(QIODevice::ReadWrite);
                if(tempFile.isOpen())
                {
                    while(!tempFile.atEnd())
                    {
                        actions.append(ligne.trimmed());
                        actions.append(tempFile.readLine().trimmed());
                        actions.append(tempFile.readLine().trimmed());
                    }
                }
            }
        }
    }
    liste->remove();
    tempP->start("sh");
    tempP->write("cd ../RORI/Agenda;");
    tempP->write("ls >> liste");

}


void AgendaWidget::setColor1(QString color)
{
    color1 = color;
    toModify->setStyleSheet("background-color:" + color + "; color:white; border:0");
}

void AgendaWidget::setColor2(QString color)
{
    color2 = color;
    validate->setStyleSheet("align:center; color:white; font-size:20px; border:0; background-color: " + color +"; width: 250px; height:40px;border-radius: 10px;");
}

/**
 * @brief AgendaWidget::saveClicked recreate Agenda File when we modify ;)
 */
void AgendaWidget::saveClicked()
{
    QString content = toModify->toPlainText();
    QStringList files;
    QFile tempFile("temp");
    tempFile.open(QIODevice::WriteOnly);
    QTextStream out(&tempFile);
    out << content;
    tempFile.close();
    tempFile.open(QIODevice::ReadOnly);

    if(tempFile.isOpen())
    {
        while(!tempFile.atEnd())
        {
            QString ligne = tempFile.readLine().trimmed();
            QFile fichierAgenda("../RORI/Agenda/"+ligne);
            if(!files.contains(ligne))
            {
                if(fichierAgenda.exists())
                    fichierAgenda.remove();
                files.append(ligne);
            }
            fichierAgenda.open(QIODevice::Append);
            QTextStream out(&fichierAgenda);
            out << tempFile.readLine().trimmed() + '\n' + tempFile.readLine().trimmed() + '\n';
        }
    }

    tempFile.remove();
    recupActions();
}
