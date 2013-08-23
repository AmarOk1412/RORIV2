#ifndef APPARENCEOPTIONWIDGET_H
#define APPARENCEOPTIONWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

/**
 * @brief The ApparenceOptionWidget class change background or color
 */
class ApparenceOptionWidget : public QWidget
{
    Q_OBJECT
public:
    ApparenceOptionWidget(QWidget *parent = 0);

public slots:
    void setupUi();
    void resetClicked();
    void changeBackgroundImage();

    void setColor1();
    void setColor2();
    inline QString getColor1() { return color1; }
    inline QString getColor2() { return color2; }

signals:
    void backgroundImageChanged(QString image);
    void color1Changed(QString color);
    void color2Changed(QString color);

protected:
    void resizeEvent(QResizeEvent *);

private:
    QVBoxLayout *principalLayout;
    QLabel *bgImage;
    QHBoxLayout *buttons;
    QPushButton *changeBg;
    QPushButton *reinitialiser;

    QHBoxLayout *buttonsColor;
    QPushButton *changeColor1;
    QPushButton *changeColor2;

    QString backgroundImage;
    QString color1;
    QString color2;
};

#endif // APPARENCEOPTIONWIDGET_H
