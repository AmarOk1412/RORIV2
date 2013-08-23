#include "Toolbar.h"
#include <QPushButton>
#include <QMessageBox>

Toolbar::Toolbar(QWidget *parent) : QWidget(parent)
{
    setupUi();
    setupConnections();
}

/**
 * @brief Toolbar::setupUi design the UX
 */
void Toolbar::setupUi()
{
    principalLayout = new QVBoxLayout(this);
    background = new QLabel(this);
    logo = new QLabel;
    logo->setPixmap(QPixmap("images/logo.png"));
    logo->setFixedSize(80,110);
    logo->setScaledContents(true);

    roriMode = new QPushButton(QIcon("images/icon1.png"), "");
    roriMode->setIconSize(QSize(40,40));
    roriMode->setFixedSize(80, 60);
    agendaMode = new QPushButton(QIcon("images/agendaicon.png"), "");
    agendaMode->setIconSize(QSize(40,40));
    agendaMode->setFixedSize(80, 60);
    graphMode = new QPushButton(QIcon("images/diagrammeicon.png"), "");
    graphMode->setIconSize(QSize(40,40));
    graphMode->setFixedSize(80, 60);
    optionMode = new QPushButton(QIcon("images/optionicon.png"), "");
    optionMode->setIconSize(QSize(40,40));
    optionMode->setFixedSize(80, 60);

    principalLayout->addSpacing(20);
    principalLayout->addWidget(logo);
    principalLayout->addStretch(1);
    principalLayout->addWidget(roriMode);
    principalLayout->addWidget(agendaMode);
    principalLayout->addWidget(graphMode);
    principalLayout->addWidget(optionMode);
    principalLayout->addSpacing(100);
    principalLayout->setAlignment(Qt::AlignCenter);
    principalLayout->setMargin(0);

    setStyleSheet("QPushButton { border:0; margin:0;} \
                   QPushButton::hover { background-color: #1a7c88; }");
    background->setStyleSheet("background-color: #3b3a3f;");
    setLayout(principalLayout);
}

/**
 * @brief Toolbar::setupConnections create connection between SIGNAL/SLOTS
 */
void Toolbar::setupConnections()
{
    connect(roriMode, SIGNAL(clicked()), this, SLOT(roriModeClicked()));
    connect(agendaMode, SIGNAL(clicked()), this, SLOT(agendaModeClicked()));
    connect(graphMode, SIGNAL(clicked()), this, SLOT(graphModeClicked()));
    connect(optionMode, SIGNAL(clicked()), this, SLOT(optionModeClicked()));
}

/**
 * @brief Toolbar::resizeEvent start when we resize the window
 */
void Toolbar::resizeEvent(QResizeEvent *)
{
    background->resize(this->width(), this->height());
    background->setScaledContents(true);
}

/**
 * @brief Toolbar::buttonBgColor color the bg in blue
 * @param button to color into blue
 */
void Toolbar::buttonBgColor(int button)
{
    switch(button)
    {
    case 0:
        roriMode->setStyleSheet("background-color:" + color1 + ";");
        agendaMode->setStyleSheet("background-color:" + color2 + ";");
        graphMode->setStyleSheet("background-color:" + color2 + ";");
        optionMode->setStyleSheet("background-color:" + color2 + ";");
        break;
    case 1:
        roriMode->setStyleSheet("background-color:" + color2 + ";");
        agendaMode->setStyleSheet("background-color:" + color1 + ";");
        graphMode->setStyleSheet("background-color:" + color2 + ";");
        optionMode->setStyleSheet("background-color:" + color2 + ";");
        break;
    case 2:
        roriMode->setStyleSheet("background-color:" + color2 + ";");
        agendaMode->setStyleSheet("background-color:" + color2 + ";");
        graphMode->setStyleSheet("background-color:" + color1 + ";");
        optionMode->setStyleSheet("background-color:" + color2 + ";");
        break;
    case 3:
        roriMode->setStyleSheet("background-color:" + color2 + ";");
        graphMode->setStyleSheet("background-color:" + color2 + ";");
        agendaMode->setStyleSheet("background-color:" + color2 + ";");
        optionMode->setStyleSheet("background-color:" + color1 + ";");
        break;
    default:
        break;
    }
}

/**
 * @brief Toolbar::roriModeClicked and under : when we click in a button
 */
void Toolbar::roriModeClicked()
{
    buttonBgColor(0);
    emit (roriModeClickedS());
    setFocus();
}

void Toolbar::agendaModeClicked()
{
    buttonBgColor(1);
    setFocus();
    emit agendaModeClickedS();
}

void Toolbar::graphModeClicked()
{
    buttonBgColor(2);
    setFocus();
    emit graphModeClickedS();
}

void Toolbar::optionModeClicked()
{
    buttonBgColor(3);
    setFocus();
    emit optionModeClickedS();
}

void Toolbar::setColor1(QString color)
{
    color1 = color;
    setStyleSheet("QPushButton { border:0; margin:0;} \
                  QPushButton::hover { background-color: "+ color +"; }");
}

void Toolbar::setColor2(QString color)
{
    color2 = color;
    background->setStyleSheet("background-color:" + color + ";");
}
