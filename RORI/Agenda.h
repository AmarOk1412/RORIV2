#ifndef AGENDA_H
#define AGENDA_H

/**/
#include <QWidget>
#include <QTimer>

class Agenda : public QWidget
{
    Q_OBJECT

public:
    Agenda();
    void recupActions();

public slots:
    QStringList getAnAction();

signals:

private:
    QStringList actions;
};
/**/

#endif // AGENDA_H
