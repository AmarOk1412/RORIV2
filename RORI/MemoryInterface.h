#ifndef MEMORYINTERFACE_H
#define MEMORYINTERFACE_H

#include <QtWidgets/QtWidgets>
#include <QtWidgets/QPlainTextEdit>
#include <QFile>
#include <QtWidgets/QMessageBox>
#include <QDir>

class MemoryInterface : public QWidget
{
    Q_OBJECT

public:
    MemoryInterface();
    QStringList searchWord(QString mot1, QString mot2);
    void createFolder(QString path);
    void createDefinition(QString nomPath, QString nomFichier, QString definition);
    void createSynonymeFile(QString nomPath, QStringList synonymes);
    QString moveFolder(QString folderToMove, QString intoThisFolder);
    void addPathToArboTxt(QString path, QStringList syn, QString intoThisFolder);
    bool removeDir(QDir aDir);
    void sendCategorie();
    QString getCategorie(QString word);
    QString getType(QString word);

public slots:
    void workData(QString message);

private:

};

#endif // MEMORYINTERFACE_H
