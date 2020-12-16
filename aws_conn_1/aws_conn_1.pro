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
        main.cpp \
        providerbase.cpp \
        providerconnectionview.cpp \
        providerselector.cpp

HEADERS += \
        2.h \
        aws_base.h \
        providerbase.h \
        providerconnectionview.h \
        providerselector.h

FORMS += \
        providerconnectionview.ui \
        providerselector.ui

# AWS
!contains(CONFIG, NO_AWS) {
    SOURCES += \
            awsprovider.cpp
    HEADERS += \
            awsprovider.h
    FORMS += \
            awsconfiguration.ui
    DEFINES += WITH_AWS
}

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
