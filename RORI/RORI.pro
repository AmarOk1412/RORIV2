QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RORI
TEMPLATE = app

SOURCES += \
    main.cpp \
    MainWindow.cpp \
    Profiler.cpp \
    RoriProfil.cpp \
    UserProfil.cpp \
    Semantik.cpp \
    Agenda.cpp \
    AddWord.cpp \
    MemoryInterface.cpp \
    AddFunction.cpp

HEADERS += \
    MainWindow.h \
    Semantik.h \
    RoriProfil.h \
    UserProfil.h \
    enumeration.h \
    Profiler.h \
    MemoryInterface.h \
    Agenda.h \
    AddWord.h \
    AddFunction.h
