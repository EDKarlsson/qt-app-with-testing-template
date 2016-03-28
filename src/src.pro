include(../defaults.pri)
QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

win32 {
  TARGET = ../qt-app-with-testing-template
}
unix {
  TARGET = qt-app-with-testing-template
}
CONFIG -= testlib
TEMPLATE = lib

SOURCES += mainwindow.cpp \

HEADERS  += include/mainwindow.h \

FORMS    += form/mainwindow.ui \

QTPLUGIN += qsqlmysql

#DISTFILES += \
#    ../app/stylesheet-example.qss
