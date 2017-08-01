#-------------------------------------------------
#
# Project created by QtCreator 2017-08-01T10:08:20
# sample and avro api http://avro.apache.org/docs/1.6.1/api/cpp/html/index.html
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = avroDemo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    test/custom.cc \
    test/datafile.cc \
    test/generated.cc \
    test/generic.cc \
    test/resolving.cc \
    test/schemaload.cc \
    test/validating.cc \
    bdavrowidget.cpp

HEADERS += \
        bdavrowidget.h \
    user-schema.hh \
    userschema.hh

FORMS += \
        bdavrowidget.ui

CONFIG += static

INCLUDEPATH +=  $$PWD/


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/avro/lib/release/ -lavrocpp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/avro/lib/debug/ -lavrocpp

INCLUDEPATH += $$PWD/avro/include
DEPENDPATH += $$PWD/avro/include

DISTFILES += \
    test/cpx.json \
    test/imaginary.json

HEADERS += \
    test/cpx.hh \
    test/imaginary.hh
