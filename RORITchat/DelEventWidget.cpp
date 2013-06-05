#include "DelEventWidget.h"

/**
 * @brief DelActionWidget::DelActionWidget
 * @param events
 */
DelActionWidget::DelActionWidget(QStringList events) : QWidget(0)
{
    principalLayout = new QHBoxLayout;
    eventsBox = new QComboBox(this);

    for(int i = 0; i < events.count(); ++i)
        eventsBox->addItem(events.at(i));

    principalLayout->addWidget(eventsBox);
    btnDel = new QPushButton(tr("Supprimer Evenement"), this);
    principalLayout->addWidget(btnDel);
    this->setLayout(principalLayout);

}
