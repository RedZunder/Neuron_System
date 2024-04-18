TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -L"C:\SFML-2.6.1\lib" #change this
LIBS += -L"C:\SFML-2.6.1\bin" #change this

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window
CONFIG(debug  , debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-system -lsfml-network -lsfml-window

INCLUDEPATH += "C:\SFML-2.6.1\include" #change this
DEPENDPATH += "C:\SFML-2.6.1\include" #change this

SOURCES += \
        main.cpp
