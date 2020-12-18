#include "AWS_provider.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AWSProvider w;
    //w.addProvider(QStringLiteral("AWS Iot Core"), new AWSProvider());
    w.show();

    return a.exec();
}
