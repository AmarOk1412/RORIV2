#ifndef AGENDA_H
#define AGENDA_H

#include <QtWidgets/QWidget>
#include <QSpinBox>
#include <QComboBox>
#include <QHBoxLayout>
#include <QPushButton>

class Agenda : public QWidget
{
    Q_OBJECT
public:
    Agenda();

public slots:
    void slotAddEvent();
    void slotDelEvent();
    void slotModifyEvent();
    void setMaxDay(QString month);
    void setMonthTo1(int currentYear);

private:
    QVBoxLayout *layoutPrincipal;
    QHBoxLayout *dmy;
    QSpinBox *day;
    QComboBox *month;
    QSpinBox *year;
    QHBoxLayout *actions;
    QPushButton *addEvent;
    QPushButton *delEvent;
    QPushButton *modifyEvent;
};

#endif // AGENDA_H
