/********************************************************************************
** Form generated from reading UI file 'bookmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKS_H
#define UI_BOOKMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include "edittreeview.h"
#include "searchlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_BookmarksDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    SearchLineEdit *search;
    EditTreeView *tree;
    QHBoxLayout *hboxLayout;
    QPushButton *removeButton;
    QPushButton *addFolderButton;
    QSpacerItem *spacerItem1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BookmarksDialog)
    {
        if (BookmarksDialog->objectName().isEmpty())
            BookmarksDialog->setObjectName(QStringLiteral("BookmarksDialog"));
        BookmarksDialog->resize(758, 450);
        gridLayout = new QGridLayout(BookmarksDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spacerItem = new QSpacerItem(252, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 0, 1, 1);

        search = new SearchLineEdit(BookmarksDialog);
        search->setObjectName(QStringLiteral("search"));

        gridLayout->addWidget(search, 0, 1, 1, 1);

        tree = new EditTreeView(BookmarksDialog);
        tree->setObjectName(QStringLiteral("tree"));

        gridLayout->addWidget(tree, 1, 0, 1, 2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        removeButton = new QPushButton(BookmarksDialog);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        hboxLayout->addWidget(removeButton);

        addFolderButton = new QPushButton(BookmarksDialog);
        addFolderButton->setObjectName(QStringLiteral("addFolderButton"));

        hboxLayout->addWidget(addFolderButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        buttonBox = new QDialogButtonBox(BookmarksDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);


        retranslateUi(BookmarksDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BookmarksDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(BookmarksDialog);
    } // setupUi

    void retranslateUi(QDialog *BookmarksDialog)
    {
        BookmarksDialog->setWindowTitle(QApplication::translate("BookmarksDialog", "Bookmarks", 0));
        removeButton->setText(QApplication::translate("BookmarksDialog", "&Remove", 0));
        addFolderButton->setText(QApplication::translate("BookmarksDialog", "Add Folder", 0));
    } // retranslateUi

};

namespace Ui {
    class BookmarksDialog: public Ui_BookmarksDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKS_H
