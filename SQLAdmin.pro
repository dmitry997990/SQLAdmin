#-------------------------------------------------
#
# Project created by QtCreator 2015-10-03T20:00:57
#
#-------------------------------------------------

QT       += core gui

QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SQLAdmin
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    core.cpp \
    exceptions.cpp \
    appcontainer.cpp

HEADERS  += mainwindow.h \
    core.h \
    exceptions.h \
    appcontainer.h

FORMS    += mainwindow.ui
