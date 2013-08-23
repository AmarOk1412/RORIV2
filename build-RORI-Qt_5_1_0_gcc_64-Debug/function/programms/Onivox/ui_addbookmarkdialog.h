/********************************************************************************
** Form generated from reading UI file 'addbookmarkdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKMARKDIALOG_H
#define UI_ADDBOOKMARKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddBookmarkDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *name;
    QComboBox *location;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddBookmarkDialog)
    {
        if (AddBookmarkDialog->objectName().isEmpty())
            AddBookmarkDialog->setObjectName(QStringLiteral("AddBookmarkDialog"));
        AddBookmarkDialog->resize(240, 168);
        verticalLayout = new QVBoxLayout(AddBookmarkDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AddBookmarkDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::PlainText);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        name = new QLineEdit(AddBookmarkDialog);
        name->setObjectName(QStringLiteral("name"));

        verticalLayout->addWidget(name);

        location = new QComboBox(AddBookmarkDialog);
        location->setObjectName(QStringLiteral("location"));

        verticalLayout->addWidget(location);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AddBookmarkDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddBookmarkDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddBookmarkDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddBookmarkDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddBookmarkDialog);
    } // setupUi

    void retranslateUi(QDialog *AddBookmarkDialog)
    {
        AddBookmarkDialog->setWindowTitle(QApplication::translate("AddBookmarkDialog", "Add Bookmark", 0));
        label->setText(QApplication::translate("AddBookmarkDialog", "Type a name for the bookmark, and choose where to keep it.", 0));
    } // retranslateUi

};

namespace Ui {
    class AddBookmarkDialog: public Ui_AddBookmarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKMARKDIALOG_H
