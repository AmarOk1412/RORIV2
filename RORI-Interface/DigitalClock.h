#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QLCDNumber>
#include <QWidget>
#include <QTimer>
#include <QTime>

/**
 * @brief The DigitalClock class is a digital clock
 */
class DigitalClock : public QWidget
{
    Q_OBJECT

public:
    DigitalClock(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *);

public slots:
    void showTime();
    void setColor2(QString color);

private:
    QLCDNumber *dgClock;
    QString color2;
    QPen *pen;
};

#endif // DIGITALCLOCK_H
