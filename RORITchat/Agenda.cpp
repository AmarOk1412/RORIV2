#include "Agenda.h"
#include "AddActionWidget.h"
#include "DelEventWidget.h"
#include "ModifyActionWidget.h"

/**
 * @brief Agenda::Agenda
 */
Agenda::Agenda() : QWidget(0)
{
    setWindowTitle(tr("RORI Agenda"));

    layoutPrincipal = new QVBoxLayout;
        dmy = new QHBoxLayout;
            day = new QSpinBox();
            day->setMaximum(31);
            day->setMinimum(1);
            month = new QComboBox;
            month->addItem("Janvier");
            month->addItem("Fevrier");
            month->addItem("Mars");
            month->addItem("Avril");
            month->addItem("Mai");
            month->addItem("Juin");
            month->addItem("Juillet");
            month->addItem("Aout");
            month->addItem("Septembre");
            month->addItem("Octobre");
            month->addItem("Novembre");
            month->addItem("Decembre");
            year = new QSpinBox;
            year->setMaximum(99999);
            year->setValue(2013);
        dmy->addWidget(day);
        dmy->addWidget(month);
        dmy->addWidget(year);
        actions = new QHBoxLayout;
            addEvent = new QPushButton("Ajouter Evenement");
            delEvent = new QPushButton("Supprimer Evenement");
            modifyEvent = new QPushButton("Modifier Evenement");
        actions->addWidget(addEvent);
        actions->addWidget(delEvent);
        actions->addWidget(modifyEvent);
    layoutPrincipal->addLayout(dmy);
    layoutPrincipal->addLayout(actions);
    this->setLayout(layoutPrincipal);

    connect(month, SIGNAL(currentIndexChanged(QString)), this, SLOT(setMaxDay(QString)));
    connect(year, SIGNAL(valueChanged(int)), this, SLOT(setMonthTo1(int)));
    connect(addEvent, SIGNAL(clicked()), this, SLOT(slotAddEvent()));
    connect(delEvent, SIGNAL(clicked()), this, SLOT(slotDelEvent()));
    connect(modifyEvent, SIGNAL(clicked()), this, SLOT(slotModifyEvent()));
}

/**
 * @brief Agenda::setMaxDay give the number of day in the month
 * @param month
 */
void Agenda::setMaxDay(QString month)
{
    QString thirtyOneDays = "Janvier-Mars-Mai-Juillet-Aout-Octobre-Decembre";
    day->setValue(1);
    if(thirtyOneDays.indexOf(month) != -1)
        day->setMaximum(31);
    else if(month != "Fevrier")
        day->setMaximum(30);
    else
    {
        if(year->value() % 4 == 0 && year->value() % 100 != 0 || year->value() % 400 == 0)
               day->setMaximum(29);
        else
               day->setMaximum(28);
    }
}

void Agenda::setMonthTo1(int currentYear)
{
    Q_UNUSED(currentYear);
    month->setCurrentIndex(0);
}

/**
 * @brief Agenda::slotAddEvent
 */
void Agenda::slotAddEvent()
{
    QString date = QString::number(day->value()) + ':' + month->currentText() + ':' + QString::number(year->value());
    AddActionWidget *addActionWidget = new AddActionWidget(date);
    addActionWidget->show();
}

/**
 * @brief Agenda::slotDelEvent
 */
void Agenda::slotDelEvent()
{
    DelActionWidget *delActionWidget = new DelActionWidget(QStringList());
    delActionWidget->show();
}

/**
 * @brief Agenda::slotModifyEvent
 */
void Agenda::slotModifyEvent()
{
    ModActionWidget *modActionWidget = new ModActionWidget(QStringList());
    modActionWidget->show();
}
