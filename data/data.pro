QT -= gui

TEMPLATE = lib
DEFINES += DATA_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

LIBS += -L../generators/debug -lgenerators

SOURCES += \
    Options/cardataoptions.cpp \
    Options/dataoptions.cpp \
    Options/harmonicmotiondataoptions.cpp \
    Options/planedataoptions.cpp \
    Storage/cardata.cpp \
    Storage/harmonicmotiondata.cpp \
    Storage/planedata.cpp

HEADERS += \
    Options/cardataoptions.h \
    Options/dataoptions.h \
    Options/harmonicmotiondataoptions.h \
    Options/inputedatastate.h \
    Options/planedataoptions.h \
    Storage/cardata.h \
    Storage/data.h \
    Storage/harmonicmotiondata.h \
    Storage/planedata.h \
    data_global.h


# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
