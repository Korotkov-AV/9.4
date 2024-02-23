#include "mainwindow.h"

#include <QApplication>
#include <QtNetwork>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QHostAddress class1;
    QSqlDatabase class2;
    w.show();
    return a.exec();
}
