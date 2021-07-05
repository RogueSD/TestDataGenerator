#ifndef DATAOPTIONS_H
#define DATAOPTIONS_H

#if defined(DOMAIN_LOGIC_LIBRARY)
#  define DATA_OPTIONS_EXPORT Q_DECL_EXPORT
#else
#  define DATA_OPTIONS_EXPORT Q_DECL_IMPORT
#endif

#include "inputedatastate.h"

struct DATA_OPTIONS_EXPORT DataOptions
{
protected:
    InputDataState _state;
public:
    InputDataState state();

    DataOptions();
    virtual ~DataOptions();
};

#endif // DATAOPTIONS_H
