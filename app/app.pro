include(../defaults.pri)

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle

SOURCES += main.cpp

LIBS += -L../qt-app-with-testing-template

#RESOURCES += \
#    stylesheet.qrc
