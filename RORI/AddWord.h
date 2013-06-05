#ifndef ADDWORD_H
#define ADDWORD_H

#include <QDialog>
#include <QFormLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>


class AddWord : public QDialog
{
    Q_OBJECT
public:
    AddWord(QString nameS);
    void setupUI();
    void setName(QString newName);
    void setListCategorie(QStringList newCategories);

private slots:
    void sendClicked();

signals:
    void sendWord(QString nom, QString def, QString syn, QString cat);

private:
    QString name;
    QLabel *titre;
    QLineEdit *titreSiVide;
    QFormLayout *layoutPrincipal;
    QTextEdit *definition;
    QLineEdit *synonymes;
    //QTextEdit *categorie;
    QPushButton *send;
    QComboBox *categorie;
};

#endif // ADDWORD_H
