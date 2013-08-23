#include "Circle.h"
#include <QPainter>
#include <QFile>
#include <QMessageBox>

Circle::Circle(QString Valtitre, int valNumber, QWidget *parent) : QWidget(parent), number(valNumber), titre(Valtitre)
 {
    fond = new QLabel(this);
    fond->setPixmap(QPixmap("images/round.png"));
    fond->setFixedSize(70, 70);
    fond->resize(QSize(70,70));
    fond->move(10,10);
    fond->setScaledContents(true);

    labelNombre = new QLabel(QString::number(number), this);
    labelNombre->setAlignment(Qt::AlignCenter);

    labelNombre->setFixedSize(30,20);
    this->setFixedSize(90,90);

    labelNombre->setStyleSheet("color:#1f777b;");
    labelNombre->move(30,20);

    labelTitre = new QLabel(titre, this);
    labelTitre->setAlignment(Qt::AlignCenter);

    labelTitre->setFixedSize(60,20);
    labelTitre->setStyleSheet("color:#1f777b;");
    labelTitre->move(15,40);

    color2 = "#1f777b";

    pen = new QPen(QColor("#1f777b"));
    pen->setWidth(5);
}

/**
 * @brief DigitalClock::paintEvent draw the second
 */
void Circle::paintEvent(QPaintEvent *)
{
     QRectF rectangle(10.0, 10.0, 70.0, 70.0);
     int startAngle = 90 * 16;

     int spanAngle = 3.6 * number * 16;

     QPainter painter(this);
     painter.setPen(*pen);
     painter.drawArc(rectangle, startAngle, spanAngle);
}


void Circle::setColor1(QString color)
{
    color1 = color;
}

void Circle::setColor2(QString color)
{
    color2 = color;
    labelNombre->setStyleSheet("color:"+ color2 +";");
    labelTitre->setStyleSheet("color:"+ color2 +";");
    pen->setColor(color2);
}
