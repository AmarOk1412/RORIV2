QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RORI-Interface
TEMPLATE = app

SOURCES += \
    main.cpp \
    Interface.cpp \
    Toolbar.cpp \
    RORIWidget.cpp \
    DigitalClock.cpp \
    GraphWidget.cpp \
    Circle.cpp \
    OptionWidget.cpp \
    ApparenceOptionWidget.cpp \
    AddActionWidget.cpp \
    Agenda.cpp \
    DelEventWidget.cpp \
    ModifyActionWidget.cpp \
    AgendaWidget.cpp

HEADERS += \
    Interface.h \
    Toolbar.h \
    RORIWidget.h \
    DigitalClock.h \
    GraphWidget.h \
    Circle.h \
    OptionWidget.h \
    ApparenceOptionWidget.h \
    AddActionWidget.h \
    Agenda.h \
    DelEventWidget.h \
    ModifyActionWidget.h \
    AgendaWidget.h
