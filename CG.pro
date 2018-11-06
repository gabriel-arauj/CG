#-------------------------------------------------
#
# Project created by QtCreator 2018-10-30T15:22:51
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CG
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    Objetos/face.cpp \
    Objetos/esfera.cpp \
    Objetos/cone.cpp \
    Algebra/vertice.cpp \
    Algebra/vetor.cpp \
    Algebra/matriz.cpp \
    Algebra/matrizescala.cpp \
    Algebra/matriztranslacao.cpp \
    Algebra/matrizreflexao.cpp \
    Algebra/matrizcisalhamento.cpp \
    Algebra/matrizrotacao.cpp \
    Algebra/pilhamatriz.cpp\
    Algebra/parser.cpp\
    Algebra/objeto.cpp \
    glwidget.cpp

HEADERS += \
        mainwindow.h \
    Headers/vertice.h \
    Headers/vetor.h \
    Headers/matriz.h \
    Headers/face.h \
    Headers/esfera.h \
    Headers/luz.h \
    Headers/matrizescala.h \
    Headers/matriztranslacao.h \
    Headers/matrizreflexao.h \
    Headers/matrizcisalhamento.h \
    Headers/matrizrotacao.h \
    Headers/pilhamatriz.h \
    Headers/cone.h \
    Headers/forma.h\
    Headers/parser.h\
    Headers/objeto.h \
    glwidget.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
