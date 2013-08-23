#include "DigitalClock.h"
#include <QPalette>
#include <QRectF>
#include <QPainter>

DigitalClock::DigitalClock(QWidget *parent)
    : QWidget(parent)
{
    dgClock = new QLCDNumber(this);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();
    dgClock->setFixedSize(200,200);
    this->setFixedSize(500,500);

    QPalette palette;
    palette.setColor(QPalette::WindowText, QColor(31,119,123));
    dgClock->setPalette(palette);
    dgClock->setStyleSheet("color:#1f777b; border:0;");
    dgClock->move(50,140);

    pen = new QPen(QColor(31,119,123));
    pen->setWidth(30);
}

/**
 * @brief DigitalClock::paintEvent draw the second
 */
void DigitalClock::paintEvent(QPaintEvent *)
{
     QRectF rectangle(15.0, 90.0, 310.0, 310.0);
     int startAngle = 90 * 16;
     QTime timeM = QTime::currentTime();

     int spanAngle = 6 * timeM.second() * 16;

     QPainter painter(this);
     painter.setPen(*pen);
     painter.drawArc(rectangle, startAngle, spanAngle);
}


/**
 * @brief DigitalClock::showTime format hh:mm
 */
void DigitalClock::showTime()
{
    QTime timeM = QTime::currentTime();
    QString text = timeM.toString("hh:mm");
    if ((timeM.second() % 2) == 0)
        text[2] = ' ';
    dgClock->display(text);
    this->update();
}

void DigitalClock::setColor2(QString color)
{
    color2 = color;
    pen->setColor(color2);
    dgClock->setStyleSheet("color:"+ color2 +"; border:0;");
}
