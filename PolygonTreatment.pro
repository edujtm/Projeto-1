QT += core
QT -= gui

CONFIG += c++11

TARGET = PolygonTreatment
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    point.cpp \
    poligono.cpp \
    retangulo.cpp

HEADERS += \
    point.h \
    poligono.h \
    retangulo.h
