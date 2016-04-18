include(../defaults.pri)

TEMPLATE = app
# Add sql to test SQL features and add gui to test gui features
#	QT += core testlib sql gui
QT += core testlib sql gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET  = test
CONFIG += console
CONFIG += app_bundle
CONFIG += c++11

#input
SOURCES += \
    main.cpp

INCLUDEPATH += .

LIBS += -L../src -l$${APP_NAME}

HEADERS += \
    testrunner.h \
    SkipListTests.h

