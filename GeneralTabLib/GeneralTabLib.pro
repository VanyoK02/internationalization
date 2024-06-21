QT += core gui widgets

TARGET = GeneralTabLib
TEMPLATE = lib

DEFINES += GENERALTABLIB_LIBRARY

SOURCES += generalTab.cpp

HEADERS += generalTab.h

# Для экспорта символов на Windows
win32:CONFIG += dll
unix:CONFIG += shared

DISTFILES += \
    translations/GeneralTabLib_ru_RU.qm \
    translations/GeneralTabLib_en_US.qm

TRANSLATIONS += \
    translations/GeneralTabLib_en_US.ts \
    translations/GeneralTabLib_ru_RU.ts
