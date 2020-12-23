#include "AWS_base.h"
#include "AWS_conn_view.h"
#include "AWS_provider.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AWSConnectionView w;
    //w.addProvider(QStringLiteral("AWS Iot Core"), new AWSProvider());
    w.show();

    return a.exec();
}
