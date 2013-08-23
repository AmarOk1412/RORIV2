#ifndef OPTIONWIDGET_H
#define OPTIONWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <ApparenceOptionWidget.h>

/**
 * @brief The OptionWidget class is the interface to modify this programm
 */
class OptionWidget : public QWidget
{
    Q_OBJECT
public:
    OptionWidget(QWidget *parent = 0);
    void setupUI();
    inline ApparenceOptionWidget* getApparenceRORI() { return apparenceRORI; }

public slots:
    void changeBackgroundImage(QString image);
    void changeColor1(QString color1);
    void changeColor2(QString color2);

signals:
    void backgroundImageChanged(QString image);
    void color1Change(QString color1);
    void color2Change(QString color2);

protected:
    void resizeEvent(QResizeEvent *);

private:
    QHBoxLayout *principalLayout;
    QWidget *toolbar;
    QVBoxLayout *toolbarLayout;
    QLabel *mot;
    QPushButton *personnaliser;
    QPushButton *modesRORI;
    ApparenceOptionWidget *apparenceRORI;
};

#endif // OPTIONWIDGET_H
