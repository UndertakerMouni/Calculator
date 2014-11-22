#-------------------------------------------------
#
# Project created by QtCreator 2014-11-18T18:12:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calculator
TEMPLATE = app


SOURCES += main.cpp\
        calculator.cpp \
    calculatorstandard.cpp \
    calculatorscientific.cpp

HEADERS  += calculator.h \
    calculatorstandard.h \
    calculatorscientific.h

FORMS    += calculator.ui \
    calculatorstandard.ui \
    calculatorscientific.ui
RC_FILE  += myIcon.rc

OTHER_FILES += \
    myIcon.rc \
    images/icon.ico
