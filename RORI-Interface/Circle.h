#ifndef CIRCLE_H
#define CIRCLE_H

#include <QLabel>
#include <QWidget>
#include <QTimer>
#include <QTime>

/**
 * @brief The Circle show number from 0 to 100
 */
class Circle : public QWidget
{
    Q_OBJECT

public:
    Circle(QString Valtitre, int valNumber, QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *);

public slots:
    inline void setNumber(int i) { number = i; labelNombre->setText(QString::number(i)); this->update();}
    inline void setTitre(QString newTitle) { titre = newTitle; this->update();}
    void setColor1(QString color);
    void setColor2(QString color);

private:
    QLabel *labelNombre;
    QLabel *labelTitre;
    int number;
    QLabel *fond;
    QString titre;

    QString color1;
    QString color2;
    QPen *pen;
};


#endif // CIRCLE_H
