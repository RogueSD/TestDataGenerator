#ifndef INPUTEDATASTATE_H
#define INPUTEDATASTATE_H
#include "domain_logic_global.h"

#if defined(DOMAIN_LOGIC_LIBRARY)
#  define ENUM_DATA_OPTIONS_EXPORT Q_DECL_EXPORT
#else
#  define ENUM_DATA_OPTIONS_EXPORT Q_DECL_IMPORT
#endif

enum class InputDataState : char
{
    LIMITED,
    CONCRETE
};

#endif // INPUTEDATASTATE_H
