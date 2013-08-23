#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

/**
 * @brief The Toolbar class for the toolbar at the left of RORI
 */
class Toolbar : public QWidget
{
    Q_OBJECT

public:
    Toolbar(QWidget *parent = 0);
    void setupUi();
    void setupConnections();

public slots:
    void buttonBgColor(int button);
    void roriModeClicked();
    void agendaModeClicked();
    void graphModeClicked();
    void optionModeClicked();
    void setColor1(QString color);
    void setColor2(QString color);

signals:
    void roriModeClickedS();
    void agendaModeClickedS();
    void graphModeClickedS();
    void optionModeClickedS();

protected:
    void resizeEvent(QResizeEvent *);

private:
    QLabel *background;
    QVBoxLayout *principalLayout;
    QLabel *logo;

    QPushButton *roriMode;
    QPushButton *agendaMode;
    QPushButton *graphMode;
    QPushButton *optionMode;

    QString color1;
    QString color2;
};

#endif // TOOLBAR_H
