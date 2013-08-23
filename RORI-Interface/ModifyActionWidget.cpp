#include "ModifyActionWidget.h"

/**
 * @brief ModActionWidget::ModActionWidget
 * @param events
 */
ModActionWidget::ModActionWidget(QStringList events) : QWidget()
{
    principalLayout = new QVBoxLayout;
        eventsBox = new QComboBox;

        for(int i = 0; i < events.count(); ++i)
            eventsBox->addItem(events.at(i));

        roriSay = new QLineEdit("Ce que rori diras");
        rorifFile = new QLineEdit("Ce que rori feras (nom du rorif)");
        btnMod = new QPushButton("Valider");
    principalLayout->addWidget(eventsBox);
    principalLayout->addWidget(roriSay);
    principalLayout->addWidget(rorifFile);
    principalLayout->addWidget(btnMod);
    this->setLayout(principalLayout);
}
