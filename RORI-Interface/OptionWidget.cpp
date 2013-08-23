#include "OptionWidget.h"

OptionWidget::OptionWidget(QWidget *parent) : QWidget(parent)
{
    setupUI();
}

/**
 * @brief OptionWidget::setupUI create the UX of this widget
 */
void OptionWidget::setupUI()
{
    apparenceRORI = new ApparenceOptionWidget(this);

    principalLayout = new QHBoxLayout(this);
    principalLayout->setMargin(0);

    toolbar = new QWidget(this);
    toolbar->setStyleSheet("background-color:#f4f4f4;");
    toolbarLayout = new QVBoxLayout(this);
    mot = new QLabel(" Options", toolbar);
    mot->setStyleSheet("color: " + apparenceRORI->getColor2() + "; font-size:60px;");
    personnaliser = new QPushButton("\nApparence\n", toolbar);
    personnaliser->setStyleSheet("QPushButton { border:0; margin:0; width:100%; font-size:20px;} \
                                 QPushButton::hover { background-color: " + apparenceRORI->getColor2() + "; color:#f4f4f4;}");
    modesRORI = new QPushButton("\nModes\n", toolbar);
    modesRORI->setStyleSheet("QPushButton { border:0; margin:0; width:100%; font-size:20px;} \
                              QPushButton::hover { background-color: " + apparenceRORI->getColor2() + "; color:#f4f4f4;}");
    toolbarLayout->addSpacing(40);
    toolbarLayout->addWidget(mot);
    toolbarLayout->addSpacing(20);
    toolbarLayout->addWidget(personnaliser);
    toolbarLayout->addWidget(modesRORI);
    toolbarLayout->setAlignment(Qt::AlignTop);
    toolbarLayout->setMargin(0);
    toolbar->setLayout(toolbarLayout);

    principalLayout->addWidget(toolbar);
    principalLayout->addWidget(apparenceRORI);
    principalLayout->setAlignment(Qt::AlignLeft);
    this->setLayout(principalLayout);

    connect(apparenceRORI, SIGNAL(backgroundImageChanged(QString)), this, SLOT(changeBackgroundImage(QString)));
    connect(apparenceRORI, SIGNAL(color1Changed(QString)), this, SLOT(changeColor1(QString)));
    connect(apparenceRORI, SIGNAL(color2Changed(QString)), this, SLOT(changeColor2(QString)));
}

/**
 * @brief OptionWidget::resizeEvent when we resize the widget
 */
void OptionWidget::resizeEvent(QResizeEvent *)
{
    toolbar->setFixedSize(this->width()/4, this->height());
    apparenceRORI->setFixedSize(this->width()*3/4-80, this->height());
}

/**
 * @brief OptionWidget::changeBackgroundImage when we change the background
 * @param image the path of the picture
 */
void OptionWidget::changeBackgroundImage(QString image)
{
    emit backgroundImageChanged(image);
}

/**
 * @brief OptionWidget::changeColor1 when we change color1
 * @param color1 the color which change
 */
void OptionWidget::changeColor1(QString color1)
{
    emit color1Change(color1);
}


/**
 * @brief OptionWidget::changeColor2 when we change color2
 * @param color2 the color which change
 */
void OptionWidget::changeColor2(QString color2)
{
    emit color2Change(color2);
    mot->setStyleSheet("color: " + apparenceRORI->getColor2() + "; font-size:60px;");
    personnaliser->setStyleSheet("QPushButton { border:0; margin:0; width:100%; font-size:20px;} \
                                 QPushButton::hover { background-color: " + apparenceRORI->getColor2() + "; color:#f4f4f4;}");
    modesRORI->setStyleSheet("QPushButton { border:0; margin:0; width:100%; font-size:20px;} \
                              QPushButton::hover { background-color: " + apparenceRORI->getColor2() + "; color:#f4f4f4;}");
}
