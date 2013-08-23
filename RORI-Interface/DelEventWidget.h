#ifndef DELEVENTWIDGET_H
#define DELEVENTWIDGET_H

#include <QtWidgets/QWidget>
#include <QPushButton>
#include <QComboBox>
#include <QHBoxLayout>

class DelActionWidget : public QWidget
{
    Q_OBJECT
public:
    DelActionWidget(QStringList events);

public slots:
  // void validate();

private:
    QHBoxLayout *principalLayout;
    QComboBox *eventsBox;
    QPushButton *btnDel;
};

#endif // DELEVENTWIDGET_H
