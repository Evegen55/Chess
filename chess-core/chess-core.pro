#-------------------------------------------------
#
# Project created by QtCreator 2019-01-26T17:44:01
#
#-------------------------------------------------

QT       += sql

QT       -= gui

TARGET = chess-core
TEMPLATE = lib

DEFINES += CHESSCORE_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        chesscore.cpp

HEADERS += \
        chesscore.h \
        chess-core_global.h 

# specifies the installation destination of the library. This
# platform scope is generated because we created the project on Linux. By default it
# will try to install the library in the system library path
# but we don't need to make the library available
# system-wide
#unix {
#    target.path = /usr/lib
#    INSTALLS += target
#}
