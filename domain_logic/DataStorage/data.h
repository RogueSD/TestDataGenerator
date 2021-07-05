#ifndef DATA_H
#define DATA_H


#include "../data/DataGenerator.h"

#if defined(DOMAIN_LOGIC_LIBRARY)
#  define _DATA_EXPORT Q_DECL_EXPORT
#else
#  define _DATA_EXPORT Q_DECL_IMPORT
#endif

struct _DATA_EXPORT Data
{
    char identity;

    Data() { }
    virtual ~Data() { }

    virtual void collect(DataGenerator*) = 0;
    virtual Data* clone() = 0;
};

#endif // DATA_H
