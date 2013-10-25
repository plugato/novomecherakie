#-------------------------------------------------
#
# Project created by QtCreator 2013-10-23T09:54:52
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Chat
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    chatserver.cpp \
    chatsocket.cpp \
    clientconnection.cpp \
    package.cpp \
    sendmsgpackage.cpp

HEADERS  += mainwindow.h \
    chatserver.h \
    chatsocket.h \
    clientconnection.h \
    package.h \
    sendmsgpackage.h

FORMS    += mainwindow.ui

CONFIG += mobility
MOBILITY = 

