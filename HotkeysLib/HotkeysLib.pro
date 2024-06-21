QT += core gui widgets

TARGET = HotkeysLib

TEMPLATE = lib
DEFINES += HOTKEYSLIB_LIBRARY

CONFIG += c++17

SOURCES += hotkeystab.cpp

HEADERS += hotkeystab.h

win32:CONFIG += dll
unix:CONFIG += shared

DISTFILES += \
    translations/HotkeysLib_ru_RU.qm \
    translations/HotkeysLib_en_US.qm

TRANSLATIONS += \
    translations/HotkeysLib_en_US.ts \
    translations/HotkeysLib_ru_RU.ts
