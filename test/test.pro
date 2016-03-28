include(../defaults.pri)

TEMPLATE = app
QT += core testlib sql gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = test
CONFIG +=console
CONFIG += app_bundle
INCLUDEPATH += .

LIBS += -L../src/source -lqt-app-with-testing-template
