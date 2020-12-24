#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickItem>
#include "tcpclient.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_UseSoftwareOpenGL);

    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;
    TcpClient *client = new TcpClient;
    //
    client->registerQML(engine.rootObjects().first());

    return app.exec();
}
