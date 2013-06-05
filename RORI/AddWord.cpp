#include "AddWord.h"
#include <QFile>

AddWord::AddWord(QString nameS) : QDialog()
{
    name = nameS;
    setupUI();
    setListCategorie(QStringList());
}

void AddWord::setupUI()
{
    setWindowTitle("Ajouter nouveau mot.");
    QWidget *temp = new QWidget();
    layoutPrincipal = new QFormLayout(this);
        definition = new QTextEdit(this);
        titre = new QLabel("Mot :    " + name, this);
        titreSiVide = new QLineEdit(this);
        layoutPrincipal->addRow(titre, temp);
        layoutPrincipal->addRow("Mot à ajouter :", titreSiVide);
        layoutPrincipal->addRow("Définition :", definition);
        synonymes = new QLineEdit(this);
        layoutPrincipal->addRow("Synonymes séparés par une virgule :", synonymes);
        categorie = new QComboBox(this);
        layoutPrincipal->addRow("Catégories :", categorie);
        send = new QPushButton("Ajouter ce mot", this);
        layoutPrincipal->addWidget(send);

        this->setLayout(layoutPrincipal);

        connect(send, SIGNAL(clicked()), this, SLOT(sendClicked()));
}

void AddWord::sendClicked()
{
    if(titre->isHidden())
        emit sendWord(titreSiVide->text(), definition->toPlainText(), synonymes->text(), categorie->currentText());
    else
        emit sendWord(name, definition->toPlainText(), synonymes->text(), categorie->currentText());
    this->close();
}

void AddWord::setName(QString newName)
{
    name = newName;
    titre->setText("Mot :    " + name);
    definition->clear();
    synonymes->clear();

    if(name == "")
        titre->hide();
    else
        titreSiVide->hide();
}

void AddWord::setListCategorie(QStringList newCategories)
{
    categorie->clear();
    if(newCategories.isEmpty())
    {
        QFile lastCate("../BDD/arbo.txt");
        QString temp;
        QString file;
        lastCate.open(QIODevice::ReadWrite);
        file = lastCate.readAll();
        int i = 0;
        while(i < file.length())
        {
            if(file[i] != '/' and file[i] != '\n')
                temp += file[i];
            else {
                if(categorie->findText(temp) == -1)
                    categorie->addItem(temp);
                temp.clear();
            }

            ++i;
        }
    }
    else
    {
        for(int i = 0; i<newCategories.length(); ++i)
        {
            categorie->addItem(newCategories.at(i));
        }
    }
}
