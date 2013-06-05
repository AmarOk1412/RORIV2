/********************************************************************************
** Form generated from reading UI file 'settings_video.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_VIDEO_H
#define UI_SETTINGS_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QSlider *contrastSlider;
    QLabel *label_8;
    QSlider *brightnessSlider;
    QLabel *label_7;
    QSlider *saturationSlider;
    QLabel *label_2;
    QSlider *hueSlider;
    QLabel *label_10;
    QComboBox *aspectCombo;
    QLabel *label_11;
    QComboBox *scalemodeCombo;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QComboBox *deviceCombo;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *audioEffectsCombo;
    QToolButton *effectButton;
    QHBoxLayout *hboxLayout1;
    QLabel *crossFadeLabel;
    QVBoxLayout *vboxLayout;
    QSlider *crossFadeSlider;
    QHBoxLayout *hboxLayout2;
    QLabel *crossFadeLabel1;
    QSpacerItem *spacerItem;
    QLabel *crossFadeLabel2;
    QSpacerItem *spacerItem1;
    QLabel *crossFadeLabel3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QStringLiteral("settings"));
        settings->resize(360, 362);
        verticalLayout_2 = new QVBoxLayout(settings);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(settings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        contrastSlider = new QSlider(groupBox);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        contrastSlider->setMinimum(-8);
        contrastSlider->setMaximum(8);
        contrastSlider->setOrientation(Qt::Horizontal);
        contrastSlider->setTickPosition(QSlider::TicksBelow);
        contrastSlider->setTickInterval(4);

        gridLayout->addWidget(contrastSlider, 0, 1, 1, 2);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        brightnessSlider = new QSlider(groupBox);
        brightnessSlider->setObjectName(QStringLiteral("brightnessSlider"));
        brightnessSlider->setMinimum(-8);
        brightnessSlider->setMaximum(8);
        brightnessSlider->setOrientation(Qt::Horizontal);
        brightnessSlider->setTickPosition(QSlider::TicksBelow);
        brightnessSlider->setTickInterval(4);

        gridLayout->addWidget(brightnessSlider, 1, 1, 1, 2);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        saturationSlider = new QSlider(groupBox);
        saturationSlider->setObjectName(QStringLiteral("saturationSlider"));
        saturationSlider->setMinimum(-8);
        saturationSlider->setMaximum(8);
        saturationSlider->setOrientation(Qt::Horizontal);
        saturationSlider->setTickPosition(QSlider::TicksBelow);
        saturationSlider->setTickInterval(4);

        gridLayout->addWidget(saturationSlider, 2, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        hueSlider = new QSlider(groupBox);
        hueSlider->setObjectName(QStringLiteral("hueSlider"));
        hueSlider->setMinimum(-8);
        hueSlider->setMaximum(8);
        hueSlider->setOrientation(Qt::Horizontal);
        hueSlider->setTickPosition(QSlider::TicksBelow);
        hueSlider->setTickInterval(4);

        gridLayout->addWidget(hueSlider, 3, 1, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 4, 0, 1, 2);

        aspectCombo = new QComboBox(groupBox);
        aspectCombo->setObjectName(QStringLiteral("aspectCombo"));
        aspectCombo->setMinimumSize(QSize(180, 0));

        gridLayout->addWidget(aspectCombo, 4, 2, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 5, 0, 1, 2);

        scalemodeCombo = new QComboBox(groupBox);
        scalemodeCombo->setObjectName(QStringLiteral("scalemodeCombo"));
        scalemodeCombo->setMinimumSize(QSize(180, 0));

        gridLayout->addWidget(scalemodeCombo, 5, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(settings);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFlat(true);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(90, 0));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        hboxLayout->addWidget(label);

        deviceCombo = new QComboBox(groupBox_2);
        deviceCombo->setObjectName(QStringLiteral("deviceCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deviceCombo->sizePolicy().hasHeightForWidth());
        deviceCombo->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(deviceCombo);


        verticalLayout->addLayout(hboxLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(90, 0));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout->addWidget(label_6);

        audioEffectsCombo = new QComboBox(groupBox_2);
        audioEffectsCombo->setObjectName(QStringLiteral("audioEffectsCombo"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(audioEffectsCombo->sizePolicy().hasHeightForWidth());
        audioEffectsCombo->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(audioEffectsCombo);

        effectButton = new QToolButton(groupBox_2);
        effectButton->setObjectName(QStringLiteral("effectButton"));
        effectButton->setEnabled(false);

        horizontalLayout->addWidget(effectButton);


        verticalLayout->addLayout(horizontalLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        crossFadeLabel = new QLabel(groupBox_2);
        crossFadeLabel->setObjectName(QStringLiteral("crossFadeLabel"));
        sizePolicy.setHeightForWidth(crossFadeLabel->sizePolicy().hasHeightForWidth());
        crossFadeLabel->setSizePolicy(sizePolicy);
        crossFadeLabel->setMinimumSize(QSize(90, 0));
        crossFadeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        hboxLayout1->addWidget(crossFadeLabel);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        crossFadeSlider = new QSlider(groupBox_2);
        crossFadeSlider->setObjectName(QStringLiteral("crossFadeSlider"));
        sizePolicy1.setHeightForWidth(crossFadeSlider->sizePolicy().hasHeightForWidth());
        crossFadeSlider->setSizePolicy(sizePolicy1);
        crossFadeSlider->setMinimum(-20);
        crossFadeSlider->setMaximum(20);
        crossFadeSlider->setSingleStep(1);
        crossFadeSlider->setPageStep(2);
        crossFadeSlider->setValue(0);
        crossFadeSlider->setOrientation(Qt::Horizontal);
        crossFadeSlider->setTickPosition(QSlider::TicksBelow);

        vboxLayout->addWidget(crossFadeSlider);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        crossFadeLabel1 = new QLabel(groupBox_2);
        crossFadeLabel1->setObjectName(QStringLiteral("crossFadeLabel1"));
        QFont font;
        font.setPointSize(9);
        crossFadeLabel1->setFont(font);

        hboxLayout2->addWidget(crossFadeLabel1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        crossFadeLabel2 = new QLabel(groupBox_2);
        crossFadeLabel2->setObjectName(QStringLiteral("crossFadeLabel2"));
        crossFadeLabel2->setFont(font);

        hboxLayout2->addWidget(crossFadeLabel2);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        crossFadeLabel3 = new QLabel(groupBox_2);
        crossFadeLabel3->setObjectName(QStringLiteral("crossFadeLabel3"));
        crossFadeLabel3->setFont(font);

        hboxLayout2->addWidget(crossFadeLabel3);


        vboxLayout->addLayout(hboxLayout2);


        hboxLayout1->addLayout(vboxLayout);


        verticalLayout->addLayout(hboxLayout1);


        verticalLayout_2->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), settings, SLOT(reject()));

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "Settings", 0));
        groupBox->setTitle(QApplication::translate("settings", "Video options:", 0));
        label_9->setText(QApplication::translate("settings", "Contrast:", 0));
        label_8->setText(QApplication::translate("settings", "Brightness:", 0));
        label_7->setText(QApplication::translate("settings", "Saturation:", 0));
        label_2->setText(QApplication::translate("settings", "Hue:", 0));
        label_10->setText(QApplication::translate("settings", "Aspect ratio:", 0));
        aspectCombo->clear();
        aspectCombo->insertItems(0, QStringList()
         << QApplication::translate("settings", "Auto", 0)
         << QApplication::translate("settings", "Stretch", 0)
         << QApplication::translate("settings", "4/3", 0)
         << QApplication::translate("settings", "16/9", 0)
        );
        label_11->setText(QApplication::translate("settings", "Scale Mode:", 0));
        scalemodeCombo->clear();
        scalemodeCombo->insertItems(0, QStringList()
         << QApplication::translate("settings", "Fit in view", 0)
         << QApplication::translate("settings", "Scale and crop", 0)
        );
        groupBox_2->setTitle(QApplication::translate("settings", "Audio options:", 0));
        label->setText(QApplication::translate("settings", "Audio device:", 0));
        label_6->setText(QApplication::translate("settings", "Audio effect:", 0));
        effectButton->setText(QApplication::translate("settings", "Setup", 0));
        crossFadeLabel->setText(QApplication::translate("settings", "Cross fade:", 0));
        crossFadeLabel1->setText(QApplication::translate("settings", "-10 Sec", 0));
        crossFadeLabel2->setText(QApplication::translate("settings", "0", 0));
        crossFadeLabel3->setText(QApplication::translate("settings", "10 Sec", 0));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_VIDEO_H
