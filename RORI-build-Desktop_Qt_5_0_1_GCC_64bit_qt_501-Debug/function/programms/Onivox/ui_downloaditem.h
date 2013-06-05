/********************************************************************************
** Form generated from reading UI file 'downloaditem.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADITEM_H
#define UI_DOWNLOADITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "squeezelabel.h"

QT_BEGIN_NAMESPACE

class Ui_DownloadItem
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *fileIcon;
    QVBoxLayout *infoLayout;
    SqueezeLabel *fileNameLabel;
    SqueezeLabel *downloadInfoLabel;
    QHBoxLayout *buttonLayout;
    QPushButton *openButton;
    QPushButton *openFolderButton;
    QPushButton *pauseButton;
    QPushButton *resumeButton;
    QPushButton *stopButton;
    QPushButton *tryAgainButton;
    QPushButton *deleteButton;

    void setupUi(QWidget *DownloadItem)
    {
        if (DownloadItem->objectName().isEmpty())
            DownloadItem->setObjectName(QStringLiteral("DownloadItem"));
        DownloadItem->resize(679, 75);
        DownloadItem->setMouseTracking(true);
        horizontalLayout = new QHBoxLayout(DownloadItem);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        fileIcon = new QLabel(DownloadItem);
        fileIcon->setObjectName(QStringLiteral("fileIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileIcon->sizePolicy().hasHeightForWidth());
        fileIcon->setSizePolicy(sizePolicy);
        fileIcon->setMouseTracking(true);

        horizontalLayout->addWidget(fileIcon);

        infoLayout = new QVBoxLayout();
        infoLayout->setObjectName(QStringLiteral("infoLayout"));
        fileNameLabel = new SqueezeLabel(DownloadItem);
        fileNameLabel->setObjectName(QStringLiteral("fileNameLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy1);
        fileNameLabel->setMouseTracking(true);

        infoLayout->addWidget(fileNameLabel);

        downloadInfoLabel = new SqueezeLabel(DownloadItem);
        downloadInfoLabel->setObjectName(QStringLiteral("downloadInfoLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(downloadInfoLabel->sizePolicy().hasHeightForWidth());
        downloadInfoLabel->setSizePolicy(sizePolicy2);
        downloadInfoLabel->setMouseTracking(true);

        infoLayout->addWidget(downloadInfoLabel);


        horizontalLayout->addLayout(infoLayout);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        openButton = new QPushButton(DownloadItem);
        openButton->setObjectName(QStringLiteral("openButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openButton->setIcon(icon);
        openButton->setIconSize(QSize(40, 40));

        buttonLayout->addWidget(openButton);

        openFolderButton = new QPushButton(DownloadItem);
        openFolderButton->setObjectName(QStringLiteral("openFolderButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/openfolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        openFolderButton->setIcon(icon1);
        openFolderButton->setIconSize(QSize(40, 40));

        buttonLayout->addWidget(openFolderButton);

        pauseButton = new QPushButton(DownloadItem);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pauseButton->setIcon(icon2);
        pauseButton->setIconSize(QSize(40, 40));

        buttonLayout->addWidget(pauseButton);

        resumeButton = new QPushButton(DownloadItem);
        resumeButton->setObjectName(QStringLiteral("resumeButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resume.png"), QSize(), QIcon::Normal, QIcon::Off);
        resumeButton->setIcon(icon3);
        resumeButton->setIconSize(QSize(40, 40));

        buttonLayout->addWidget(resumeButton);

        stopButton = new QPushButton(DownloadItem);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon4);
        stopButton->setIconSize(QSize(40, 40));

        buttonLayout->addWidget(stopButton);

        tryAgainButton = new QPushButton(DownloadItem);
        tryAgainButton->setObjectName(QStringLiteral("tryAgainButton"));
        tryAgainButton->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/retry.png"), QSize(), QIcon::Normal, QIcon::Off);
        tryAgainButton->setIcon(icon5);
        tryAgainButton->setIconSize(QSize(40, 40));

        buttonLayout->addWidget(tryAgainButton);

        deleteButton = new QPushButton(DownloadItem);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon6);
        deleteButton->setIconSize(QSize(40, 40));

        buttonLayout->addWidget(deleteButton);


        horizontalLayout->addLayout(buttonLayout);


        retranslateUi(DownloadItem);

        QMetaObject::connectSlotsByName(DownloadItem);
    } // setupUi

    void retranslateUi(QWidget *DownloadItem)
    {
        DownloadItem->setWindowTitle(QApplication::translate("DownloadItem", "Form", 0));
        fileIcon->setText(QApplication::translate("DownloadItem", "Ico", 0));
        fileNameLabel->setProperty("text", QVariant(QApplication::translate("DownloadItem", "Filename", 0)));
        downloadInfoLabel->setProperty("text", QVariant(QString()));
        openButton->setText(QString());
        openFolderButton->setText(QString());
        pauseButton->setText(QString());
        resumeButton->setText(QString());
        stopButton->setText(QString());
        tryAgainButton->setText(QString());
        deleteButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DownloadItem: public Ui_DownloadItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADITEM_H
