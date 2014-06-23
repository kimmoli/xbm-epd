#
# Project xbm-epd
#

TARGET = xbm-epd

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
#QT -= gui

target.path = /usr/bin/

DEFINES += "APPVERSION=\\\"$${SPECVERSION}\\\""

message($${DEFINES})

INSTALLS += target

SOURCES += src/xbm-epd.cpp \
	src/converter.cpp
	
HEADERS += src/converter.h

OTHER_FILES += \
    rpm/xbm-epd.spec

