#include "ApparenceOptionWidget.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QApplication>
#include <QDesktopWidget>
#include <QFileDialog>
#include <QColor>
#include <QColorDialog>

ApparenceOptionWidget::ApparenceOptionWidget(QWidget *parent) : QWidget(parent)
{
    setupUi();
}

/**
 * @brief ApparenceOptionWidget::setupUi create the UX
 */
void ApparenceOptionWidget::setupUi()
{
    principalLayout = new QVBoxLayout(this);
    principalLayout->setAlignment(Qt::AlignTop);
    bgImage = new QLabel(this);
    QFile option("option");
    if(option.exists())
    {
        option.open(QIODevice::ReadWrite);
        backgroundImage = option.readLine().trimmed();
        bgImage->setPixmap(QPixmap(backgroundImage));
        color1 = option.readLine().trimmed();
        color2 = option.readLine().trimmed();
    }
    else
    {
        option.open(QIODevice::ReadWrite);
        QTextStream out(&option);
        out << "images/background.png\n#3b3a3f\n#1a7c88";
        backgroundImage = "images/background.png";
        color1 = "#3b3a3f";
        color2 = "#1A7C88";
    }
    bgImage->setMaximumSize(this->width()/2, this->height());
    bgImage->setScaledContents(true);
    bgImage->setStyleSheet("border: 1px solid #B4B4B4;");
    buttons = new QHBoxLayout(this);
    changeBg = new QPushButton("Change Background", this);
    reinitialiser = new QPushButton("Reset Background", this);
    buttons->addWidget(changeBg);
    buttons->addWidget(reinitialiser);

    buttonsColor = new QHBoxLayout;
    changeColor1 = new QPushButton("Change Color 1", this);
    changeColor2 = new QPushButton("Change Color 2", this);
    buttonsColor->addWidget(changeColor1);
    buttonsColor->addWidget(changeColor2);

    principalLayout->addSpacing(40);
    principalLayout->addWidget(bgImage);
    principalLayout->addLayout(buttons);
    principalLayout->addLayout(buttonsColor);
    this->setLayout(principalLayout);

    this->setStyleSheet("QPushButton { align:center; color:white; font-size:20px; border:0; background-color: "+ color2 +"; width: 250px; height:40px;}");
    changeColor1->setStyleSheet("background-color:" + color1);

    connect(reinitialiser, SIGNAL(clicked()), this, SLOT(resetClicked()));
    connect(changeBg, SIGNAL(clicked()), this, SLOT(changeBackgroundImage()));
    connect(changeColor1, SIGNAL(clicked()), this, SLOT(setColor1()));
    connect(changeColor2, SIGNAL(clicked()), this, SLOT(setColor2()));
}

/**
 * @brief ApparenceOptionWidget::resizeEvent when we resize the window
 */
void ApparenceOptionWidget::resizeEvent(QResizeEvent *)
{
    bgImage->setFixedSize(this->width()-20, this->width()*600/1600);
    bgImage->setScaledContents(true);
}

/**
 * @brief ApparenceOptionWidget::resetClicked when we click on reinisialiser
 */
void ApparenceOptionWidget::resetClicked()
{
    QFile option("option");
    option.remove();
    option.open(QIODevice::ReadWrite);
    QTextStream out(&option);
    out << "images/background.png" + '\n' + color1 + '\n' + color2;
    bgImage->setPixmap(QPixmap("images/background.png"));
}

/**
 * @brief ApparenceOptionWidget::changeBackgroundImage change the Background of the App
 */
void ApparenceOptionWidget::changeBackgroundImage()
{
    QString image = QFileDialog::getOpenFileName(0, "Choose Background Image", QString(), "Images (*.png)");
    if(!image.isEmpty())
    {
        QFile option("option");
        option.remove();
        option.open(QIODevice::ReadWrite);
        QTextStream out(&option);
        out << image + '\n' + color1 + '\n' + color2;
        backgroundImage = image;
        bgImage->setPixmap(QPixmap(image));
        emit backgroundImageChanged(image);
    }
}

/**
 * @brief ApparenceOptionWidget::setColor1 change color1
 */
void ApparenceOptionWidget::setColor1()
{
    QColor color = QColorDialog::getColor();
    color1 = color.name();
    if(!color1.isEmpty())
    {
        QFile option("option");
        option.remove();
        option.open(QIODevice::ReadWrite);
        QTextStream out(&option);
        out << backgroundImage + '\n' + color1 + '\n' + color2;
        changeColor1->setStyleSheet("background-color:" + color1);
        emit color1Changed(color1);
    }
}

/**
 * @brief ApparenceOptionWidget::setColor2 change color2
 */
void ApparenceOptionWidget::setColor2()
{
    QColor color = QColorDialog::getColor();
    color2 = color.name();
    if(!color2.isEmpty())
    {
        QFile option("option");
        option.remove();
        option.open(QIODevice::ReadWrite);
        QTextStream out(&option);
        out << backgroundImage + '\n' + color1 + '\n' + color2;
        this->setStyleSheet("QPushButton { align:center; color:white; font-size:20px; border:0; background-color: "+ color2 +"; width: 250px; height:40px;}");
        emit color2Changed(color2);
    }
}

