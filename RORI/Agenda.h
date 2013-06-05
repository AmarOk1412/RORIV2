#ifndef AGENDA_H
#define AGENDA_H
/** /
#include <QWidget>
#include <QTimer>

class Agenda : public QWidget
{
    Q_OBJECT

public:
    Agenda();
    inline QStringList getEventsAfixes() { return eventsAfixes; }
    inline QStringList getEventsFixes() { return eventsFixes; }
    void setupUi();

public slots:
    void upEvents();
    void getAnAction();
    void delAnAction(QString question, QString message);
    void addAnAction(QString question, QString message, QString jour, QString heure);

signals:
    void doAnAction(QString question, QString message, bool delAfter);

private:

    QStringList questionsAfixes;
    QStringList questionsFixes;
    QStringList eventsAfixes;
    QStringList eventsFixes;
    QTimer *timer;
};
/**/
#endif // AGENDA_H
