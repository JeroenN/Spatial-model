#include "mainwindow.h"
#include "explanation.h"
#include <QApplication>
#include <QApplication>
#include <QtQml/QQmlEngine>
#include <QtQuick/QQuickView>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
