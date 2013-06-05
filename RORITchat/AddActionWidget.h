#ifndef ADDACTIONWIDGET_H
#define ADDACTIONWIDGET_H

#include <QtWidgets/QWidget>
#include <QSpinBox>
#include <QFormLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>

class AddActionWidget : public QWidget
{
    Q_OBJECT
public:
    AddActionWidget(QString date);

public slots:
  // void validate();

private:
    QFormLayout *layoutPrincipal;
    QLineEdit *roriSay;
    QLineEdit *rorifFile;
    QCheckBox *noneDate;
    QLineEdit *dayln;
    QCheckBox *hourChB;
    QSpinBox *hour;
    QPushButton *btnOk;
};

#endif // ADDACTIONWIDGET_H
