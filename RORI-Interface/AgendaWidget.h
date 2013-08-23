#ifndef AGENDAWIDGET_H
#define AGENDAWIDGET_H

#include <QWidget>
#include <QCalendarWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTextEdit>

/**
 * @brief The Agenda show the Agenda
 */
class AgendaWidget : public QWidget
{
    Q_OBJECT

public:
    AgendaWidget(QWidget *parent = 0);
    void setupUi();
    void recupActions();
    void setColor1(QString color);
    void setColor2(QString color);
    inline QString getColor1() { return color1; }
    inline QString getColor2() { return color2; }
protected:

public slots:
    void changeModifyText(QDate date);
    void saveClicked();

private:
    QCalendarWidget *calendar;
    QHBoxLayout *principalLayout;
    QVBoxLayout *layoutModify;
    QTextEdit *toModify;
    QPushButton *validate;

    QStringList actions;
    QString color1;
    QString color2;
};


#endif // AGENDAWIDGET_H
