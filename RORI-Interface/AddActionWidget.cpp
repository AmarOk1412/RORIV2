#include "AddActionWidget.h"

/**
 * @brief create an action into diary
 * @param date
 */
AddActionWidget::AddActionWidget(QString date) : QWidget()
{
    layoutPrincipal = new QFormLayout;
        roriSay = new QLineEdit;
        rorifFile = new QLineEdit;
        noneDate = new QCheckBox;
        dayln = new QLineEdit(date);
        dayln->setEnabled(false);
        hourChB = new QCheckBox;
        hour = new QSpinBox;
        hour->setMaximum(23);
        hour->setMinimum(0);
        btnOk = new QPushButton("Valider");

        layoutPrincipal->addRow("Ce que RORI diras :", roriSay);
        layoutPrincipal->addRow("Nom du fichier .rorif à éxécuter :", rorifFile);
        layoutPrincipal->addRow("Cocher si la date n'a pas d'importance :", noneDate);
        layoutPrincipal->addRow("Date", dayln);
        layoutPrincipal->addRow("Cocher si l''heure n'a pas d'importance :", hourChB);
        layoutPrincipal->addRow("Heure :", hour);
        layoutPrincipal->addWidget(btnOk);
    this->setLayout(layoutPrincipal);
}

