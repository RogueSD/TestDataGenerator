QT -= gui

TEMPLATE = lib
DEFINES += DOMAIN_LOGIC_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Controllers/harmoniccontroller.cpp \
    DataStorage/harmonicdata.cpp \
    Factories/harmonicfactory.cpp \
    main.cpp

HEADERS += \
    Controllers/basecontroller.h \
    Controllers/harmoniccontroller.h \
    DataStorage/data.h \
    DataStorage/harmonicdata.h \
    Factories/abstractfactory.h \
    Factories/harmonicfactory.h \
    domain_logic_global.h \
    stub.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
