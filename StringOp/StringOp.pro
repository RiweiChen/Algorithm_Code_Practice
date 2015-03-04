TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    strstr.cpp

include(deployment.pri)
qtcAddDeployment()

