#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include "Circle.h"
/**
 * @brief The GraphWidget class provides profil informations
 */
class GraphWidget : public QWidget
{
    Q_OBJECT
public:
    GraphWidget(QWidget *parent = 0);

public slots:
    void getProfil();
    void setupDefault();
    void setColor2(QString color2);

private:
    QStringList roriProfil;
    QStringList userProfil;

    QVBoxLayout *principalLayout;

    QLabel *nomPrenomRORI;
    QHBoxLayout *roriCircle;
    Circle *circleRH;
    Circle *circleRBadIA;
    Circle *circleRJokes;
    Circle *circleRMoral;
    Circle *circleRPolite;
    Circle *circleRScared;

    QLabel *nomPrenomUser;
    QHBoxLayout *userCircle;
    Circle *circleUH;
    Circle *circleUBadU;
    Circle *circleUJokes;
    Circle *circleUMoral;
    Circle *circleUPolite;
    Circle *circleUCurious;
    Circle *circleUTired;
};

#endif // GRAPHWIDGET_H
