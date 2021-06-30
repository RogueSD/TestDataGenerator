QT -= gui

TEMPLATE = lib
DEFINES += DOMAIN_LOGIC_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Controllers/carcontroller.cpp \
    Controllers/harmonicmotioncontroller.cpp \
    Controllers/planecontroller.cpp \
    DataStorage/cardata.cpp \
    DataStorage/harmonicmotiondata.cpp \
    DataStorage/planedata.cpp \
    Factories/carfactory.cpp \
    Factories/harmonicmotionfactory.cpp \
    Factories/planefactory.cpp \
    main.cpp

HEADERS += \
    Controllers/basecontroller.h \
    Controllers/carcontroller.h \
    Controllers/harmonicmotioncontroller.h \
    Controllers/planecontroller.h \
    DataStorage/cardata.h \
    DataStorage/data.h \
    DataStorage/harmonicmotiondata.h \
    DataStorage/planedata.h \
    Factories/abstractfactory.h \
    Factories/carfactory.h \
    Factories/harmonicmotionfactory.h \
    Factories/planefactory.h \
    domain_logic_global.h \
    main.h \
    stub.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
