#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.addProvider(QStringLiteral("AWS Iot Core"), new AwsProvider());
    w.show();

    return a.exec();
}
