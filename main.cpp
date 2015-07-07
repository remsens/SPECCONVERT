#include <iostream>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QString>

using namespace std;

int main(int argc, char *argv[])
{

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
#ifdef QT_DEBUG
    QString qml_path = "../../";
#else
    QString qml_path = "./";
#endif

    engine.load(qml_path + "MainWin.qml");
    return app.exec();
}

