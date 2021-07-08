#ifndef DATA_H
#define DATA_H

#include "../generators/DataGenerator.h"
#include <QtCore/qglobal.h>

#if defined(DATA_LIBRARY)
#  define DATA_EXPORT Q_DECL_EXPORT
#else
#  define DATA_EXPORT Q_DECL_IMPORT
#endif

struct DATA_EXPORT Data
{
    char identity;

    Data() { }
    virtual ~Data() { }

    virtual void collect(DataGenerator*) = 0;
    virtual Data* clone() = 0;
};

#endif // DATA_H
