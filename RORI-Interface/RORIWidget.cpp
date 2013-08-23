#include "RORIWidget.h"
#include <QScrollBar>
#include <QProcess>
#include <QMessageBox>
RORIWidget::RORIWidget(QWidget *parent) : QWidget(parent)
{
    principalLayout = new QVBoxLayout(this);
    paroles = new QTextEdit(this);
    paroles->setStyleSheet("background:transparent; border:0;");

    buttons = new QHBoxLayout(this);
    say = new QLineEdit(this);
    say->setStyleSheet("font-size:20px; height:40px;border:0;");
    envoyer = new QPushButton(tr("Envoyer"), this);
    envoyer->setStyleSheet("align:center; color:white; font-size:20px; border:0; background-color: #1a7c88; width: 250px; height:40px;border-radius: 10px;");
    buttons->addWidget(say);
    buttons->addWidget(envoyer);

    principalLayout->addWidget(paroles);
    principalLayout->addLayout(buttons);
    this->setLayout(principalLayout);

    connect(envoyer, SIGNAL(clicked()), this, SLOT(envoyerClickedSlot()));
}

/**
 * @brief RORIWidget::RORISay write into paroles what RORI say
 * @param toSay what RORI say
 */
void RORIWidget::RORISay(QString toSay)
{
    QString texte = paroles->toHtml();
    toSay = toSay.replace("<p>", "");
    texte += "<p style=\"color:#FFF; background-color:" + color2 + "; width:100%; font-size:20px;margin-bottom:10px;\"><center>"+ toSay +"</center></p>";
    paroles->setText(texte);
    paroles->verticalScrollBar()->setValue(paroles->verticalScrollBar()->maximum());
    QProcess::startDetached("python tts.py " + toSay);
}

/**
 * @brief RORIWidget::UserSay write into paroles what User say
 * @param toSay what User say
 */
void RORIWidget::UserSay(QString toSay)
{
    QString texte = paroles->toHtml();
    texte += "<p style=\"color:#fff; background-color:" + color1 + "; width:100%; font-size:20px;margin-bottom:10px;\"><center>"+ toSay +"</center></p>";
    paroles->setText(texte);
    paroles->verticalScrollBar()->setValue(paroles->verticalScrollBar()->maximum());
}

void RORIWidget::setColor1(QString color)
{
    color1 = color;
}

void RORIWidget::setColor2(QString color)
{
    color2 = color;
    envoyer->setStyleSheet("align:center; color:white; font-size:20px; border:0; background-color: "+ color2 +"; width: 250px; height:40px;border-radius: 10px;");
}
