#include <QCoreApplication>
#include <QDebug>
#include <QtMqtt/QtMqtt>


int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    qDebug("hello");
    QTMQTT::Client *client = new QMQTT::Client(QHostAddress::LocalHost, 1883);
    client->setClientId("clientId");
    client->setUsername("user");
    client->setPassword("password");
    client->connectToHost();

    return a.exec();
}
