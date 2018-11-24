#include <QGuiApplication>
#include <QQmlApplicationEngine>

#if defined(Q_OS_ANDROID)
#include <QtAndroidExtras>
#endif
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;


#ifdef Q_OS_ANDROID
    QtAndroid::hideSplashScreen();
#endif

    return app.exec();
}
