TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    bubblesort.cpp \
    selectionsort.cpp

include(deployment.pri)
qtcAddDeployment()

