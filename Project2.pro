#-------------------------------------------------
#
# Project created by QtCreator 2016-05-15T14:55:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    playscene.cpp \
    quit.cpp \
    rec.cpp \
    bluehit.cpp \
    drum.cpp

HEADERS  += mainwindow.h \
    playscene.h \
    quit.h \
    rec.h \
    bluehit.h \
    drum.h

FORMS    += mainwindow.ui \
    quit.ui

RESOURCES += \
    pics.qrc
