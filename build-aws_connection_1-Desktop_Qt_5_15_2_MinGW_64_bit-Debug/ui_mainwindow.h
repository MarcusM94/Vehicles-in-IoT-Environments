/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AwsConfiguration
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *hostEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *rootCertEdit;
    QPushButton *rootCertButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *localCertEdit;
    QPushButton *localCertButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *localKey;
    QPushButton *localKeyButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *clientEdit;

    void setupUi(QWidget *AwsConfiguration)
    {
        if (AwsConfiguration->objectName().isEmpty())
            AwsConfiguration->setObjectName(QString::fromUtf8("AwsConfiguration"));
        AwsConfiguration->resize(585, 463);
        verticalLayout = new QVBoxLayout(AwsConfiguration);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(AwsConfiguration);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        hostEdit = new QLineEdit(AwsConfiguration);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));

        horizontalLayout_4->addWidget(hostEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(AwsConfiguration);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        rootCertEdit = new QLineEdit(AwsConfiguration);
        rootCertEdit->setObjectName(QString::fromUtf8("rootCertEdit"));

        horizontalLayout_3->addWidget(rootCertEdit);

        rootCertButton = new QPushButton(AwsConfiguration);
        rootCertButton->setObjectName(QString::fromUtf8("rootCertButton"));

        horizontalLayout_3->addWidget(rootCertButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(AwsConfiguration);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        localCertEdit = new QLineEdit(AwsConfiguration);
        localCertEdit->setObjectName(QString::fromUtf8("localCertEdit"));

        horizontalLayout_2->addWidget(localCertEdit);

        localCertButton = new QPushButton(AwsConfiguration);
        localCertButton->setObjectName(QString::fromUtf8("localCertButton"));

        horizontalLayout_2->addWidget(localCertButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(AwsConfiguration);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        localKey = new QLineEdit(AwsConfiguration);
        localKey->setObjectName(QString::fromUtf8("localKey"));

        horizontalLayout->addWidget(localKey);

        localKeyButton = new QPushButton(AwsConfiguration);
        localKeyButton->setObjectName(QString::fromUtf8("localKeyButton"));

        horizontalLayout->addWidget(localKeyButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(AwsConfiguration);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        clientEdit = new QLineEdit(AwsConfiguration);
        clientEdit->setObjectName(QString::fromUtf8("clientEdit"));

        horizontalLayout_5->addWidget(clientEdit);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(AwsConfiguration);

        QMetaObject::connectSlotsByName(AwsConfiguration);
    } // setupUi

    void retranslateUi(QWidget *AwsConfiguration)
    {
        AwsConfiguration->setWindowTitle(QCoreApplication::translate("AwsConfiguration", "dsf", nullptr));
        label->setText(QCoreApplication::translate("AwsConfiguration", "Hostname:", nullptr));
        label_2->setText(QCoreApplication::translate("AwsConfiguration", "Root Certificate:", nullptr));
        rootCertButton->setText(QCoreApplication::translate("AwsConfiguration", "...", nullptr));
        label_3->setText(QCoreApplication::translate("AwsConfiguration", "Client certificate:", nullptr));
        localCertButton->setText(QCoreApplication::translate("AwsConfiguration", "...", nullptr));
        label_4->setText(QCoreApplication::translate("AwsConfiguration", "Client key:", nullptr));
        localKeyButton->setText(QCoreApplication::translate("AwsConfiguration", "...", nullptr));
        label_5->setText(QCoreApplication::translate("AwsConfiguration", "Client ID:", nullptr));
        clientEdit->setText(QCoreApplication::translate("AwsConfiguration", "basicPubSub", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AwsConfiguration: public Ui_AwsConfiguration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
