#ifndef AWS_PROVIDER_H
#define AWS_PROVIDER_H

#include "AWS_base.h"
namespace Ui {
class AWSConfiguration;
}

class AWSProvider : public AWSBase
{
public:
    AWSProvider();

    QWidget *configuration() override;
    AWSConnectionBase *connectToProvider() override;
private:
    Ui::AWSConfiguration *awsUi;
    QWidget *m_widget;
};

class AWSConnection : public AWSConnectionBase
{
public:
    explicit AWSConnection(QObject *parent = nullptr);

    QString defaultPublishTopic() override;
    QString defaultSubscriptionTopic() override;
    QString windowTitle() override;
};

#endif // AWS_PROVIDER_H
