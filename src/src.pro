include(../defaults.pri)
QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

win32 {
  TARGET = ../qt-application-testing-template
}
unix {
  TARGET = qt-application-testing-template
}
CONFIG -= testlib
TEMPLATE = lib

SOURCES += source/mainwindow.cpp
HEADERS  += header/mainwindow.h
FORMS    += form/mainwindow.ui

QTPLUGIN += qsqlmysql
