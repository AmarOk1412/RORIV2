//********************************Include Qt libraries********************************//
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
//*******************************Include our libraries********************************//
#include "MainWindow.h"

int main(int argv, char **args)
{
    //Translate the app
    QApplication app(argv, args);
    QString locale = QLocale::system().name();
    QTranslator translator;
    translator.load(QString("qt_") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    app.installTranslator(&translator);
    app.setApplicationName("Semantik v1");
    app.setQuitOnLastWindowClosed(true);

    srand(time(NULL));

    /**/
    MainWindow window;
    window.showMinimized();
    /**/

    //How we quit the app
    return app.exec();
}

/***************************************************************************************
 *                                  Doc                                                *
 ***************************************************************************************
 * I/ Description                                                                      *
 ***************************************************************************************/

