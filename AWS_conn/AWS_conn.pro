QT       += core gui

QT       += core gui widgets mqtt

TARGET = qtmqtt_cloud_connector
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        AWS.cpp \
        AWS_base.cpp \
        AWS_conn_view.cpp \
        AWS_provider.cpp \
        main.cpp

HEADERS += \
        2.h \
        AWS_base.h \
        AWS_conn_view.h \
        AWS_provider.h

FORMS += \
        AWS_conn_view.ui\
        AWS_conf_provider.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
