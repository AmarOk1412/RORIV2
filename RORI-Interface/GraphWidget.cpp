#include "GraphWidget.h"
#include <QFile>
#include <QMessageBox>

GraphWidget::GraphWidget(QWidget *parent) : QWidget(parent)
{
    getProfil();
    setupDefault();
}

/**
 * @brief GraphWidget::getProfil from file
 */
void GraphWidget::getProfil()
{
    QFile *userProfilFile = new QFile("../RORI/up.inf");
    if(userProfilFile->exists())
    {
        userProfilFile->open(QIODevice::ReadOnly);
        while(!userProfilFile->atEnd())
        {
            QString temp = userProfilFile->readLine().trimmed();
            if(!temp.isEmpty())
                userProfil.append(temp);
        }
    }

    QFile *roriProfilFile = new QFile("../RORI/rp.inf");
    if(roriProfilFile->exists())
    {
        roriProfilFile->open(QIODevice::ReadOnly);
        while(!roriProfilFile->atEnd())
        {
            QString temp = roriProfilFile->readLine().trimmed();
            if(!temp.isEmpty())
                roriProfil.append(temp);
        }
    }
}

/**
 * @brief GraphWidget::setupDefault create the interface
 */
void GraphWidget::setupDefault()
{
    principalLayout = new QVBoxLayout(this);    
    roriCircle = new QHBoxLayout(this);
    nomPrenomRORI = new QLabel(this);
    nomPrenomRORI->setStyleSheet("color: #141414; font-size:40px; font-weight:bold;");
    if(roriProfil.count() > 0)
    {
        nomPrenomRORI->setText(roriProfil.at(7) + ' ' + roriProfil.at(8));
        circleRH = new Circle("Humor", roriProfil.at(0).toInt(), this);
        circleRBadIA = new Circle("Bad", roriProfil.at(1).toInt(), this);
        circleRJokes = new Circle("Jokes", roriProfil.at(2).toInt(), this);
        circleRMoral = new Circle("Moral", roriProfil.at(3).toInt(), this);
        circleRPolite = new Circle("Polite", roriProfil.at(4).toInt(), this);
        circleRScared = new Circle("Scared", roriProfil.at(5).toInt(), this);
    }
    else
    {

        circleRH = new Circle("Humor", -1, this);
        circleRBadIA = new Circle("Bad", -1, this);
        circleRJokes = new Circle("Jokes", -1, this);
        circleRMoral = new Circle("Moral", -1, this);
        circleRPolite = new Circle("Polite", -1, this);
        circleRScared = new Circle("Scared", -1, this);
    }
    roriCircle->addWidget(circleRH);
    roriCircle->addWidget(circleRBadIA);
    roriCircle->addWidget(circleRJokes);
    roriCircle->addWidget(circleRMoral);
    roriCircle->addWidget(circleRPolite);
    roriCircle->addWidget(circleRScared);

    userCircle = new QHBoxLayout(this);
    nomPrenomUser = new QLabel(this);
    nomPrenomUser->setStyleSheet("color: #141414; font-size:40px; font-weight:bold;");
    if(userProfil.count() > 0)
    {
        nomPrenomUser->setText(userProfil.at(8) + ' ' + userProfil.at(9));
        circleUH = new Circle("Humor", userProfil.at(0).toInt(), this);
        circleUBadU = new Circle("Bad", userProfil.at(1).toInt(), this);
        circleUJokes = new Circle("Jokes", userProfil.at(2).toInt(), this);
        circleUMoral = new Circle("Moral", userProfil.at(3).toInt(), this);
        circleUPolite = new Circle("Polite", userProfil.at(4).toInt(), this);
        circleUCurious = new Circle("Curious", userProfil.at(5).toInt(), this);
        circleUTired = new Circle("Tired", userProfil.at(6).toInt(), this);
    }
    else
    {

        circleUH = new Circle("Humor", -1, this);
        circleUBadU = new Circle("Bad", -1, this);
        circleUJokes = new Circle("Jokes", -1, this);
        circleUMoral = new Circle("Moral", -1, this);
        circleUPolite = new Circle("Polite", -1, this);
        circleUCurious = new Circle("Curious", -1, this);
        circleUTired = new Circle("Tired", -1, this);
    }
    userCircle->addWidget(circleUH);
    userCircle->addWidget(circleUBadU);
    userCircle->addWidget(circleUJokes);
    userCircle->addWidget(circleUMoral);
    userCircle->addWidget(circleUPolite);
    userCircle->addWidget(circleUCurious);
    userCircle->addWidget(circleUTired);

    principalLayout->addSpacing(0);
    principalLayout->addWidget(nomPrenomRORI);
    principalLayout->addSpacing(40);
    principalLayout->addLayout(roriCircle);
    principalLayout->addSpacing(40);
    principalLayout->addWidget(nomPrenomUser);
    principalLayout->addSpacing(40);
    principalLayout->addLayout(userCircle);
    principalLayout->addSpacing(200);
    this->setLayout(principalLayout);
}

void GraphWidget::setColor2(QString color2)
{
    circleRH->setColor2(color2);
    circleRBadIA->setColor2(color2);
    circleRJokes->setColor2(color2);
    circleRMoral->setColor2(color2);
    circleRPolite->setColor2(color2);
    circleRScared->setColor2(color2);
    circleUH->setColor2(color2);
    circleUBadU->setColor2(color2);
    circleUJokes->setColor2(color2);
    circleUMoral->setColor2(color2);
    circleUPolite->setColor2(color2);
    circleUCurious->setColor2(color2);
    circleUTired->setColor2(color2);
}
