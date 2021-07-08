QT -= gui

TEMPLATE = lib
DEFINES += CONTROLLERS_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += -L../data/debug -ldata \
        -L../generators/debug -lgenerators \
        -L../validators/debug -lvalidators

SOURCES += \
    Controllers/basecontroller.cpp \
    Controllers/carcontroller.cpp \
    Controllers/harmonicmotioncontroller.cpp \
    Controllers/planecontroller.cpp \
    Factories/abstractfactory.cpp \
    Factories/carfactory.cpp \
    Factories/harmonicmotionfactory.cpp \
    Factories/planefactory.cpp \
    domain_logic.cpp

HEADERS += \
    Controllers/basecontroller.h \
    Controllers/carcontroller.h \
    Controllers/harmonicmotioncontroller.h \
    Controllers/planecontroller.h \
    Factories/abstractfactory.h \
    Factories/carfactory.h \
    Factories/harmonicmotionfactory.h \
    Factories/planefactory.h \
    controllers_global.h \
    domain_logic.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
