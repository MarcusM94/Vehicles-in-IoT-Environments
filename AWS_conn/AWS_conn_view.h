#ifndef AWS_CONN_VIEW_H
#define AWS_CONN_VIEW_H

#include "AWS_base.h"
#include <QWidget>

namespace Ui {
class AWSConnectionView;
}

class AWSConnectionView : public QWidget
{
    Q_OBJECT

public:
    explicit AWSConnectionView(QWidget *parent = nullptr);
    ~AWSConnectionView();

    void setAWSConnection(AWSConnectionBase *p);
private:
    void insertStatus(const QString &direction, const QString &type, const QString &topic, const QString &id, const QString &content);
    Ui::AWSConnectionView *ui;
    AWSConnectionBase *m_connection;
};

#endif // AWS_CONN_VIEW_H
