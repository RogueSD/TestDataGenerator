#ifndef DOMAIN_LOGIC_H
#define DOMAIN_LOGIC_H

#include "controllers_global.h"
#include "../data/Storage/data.h"
#include "../data/Options/dataoptions.h"

#if defined(CONTROLLERS_LIBRARY)
#  define GENERATE_DATA_EXPORT Q_DECL_EXPORT
#else
#  define GENERATE_DATA_EXPORT Q_DECL_IMPORT
#endif

GENERATE_DATA_EXPORT Data* generateTestData(char id, double step, int duration, DataOptions* options = nullptr);

#endif // DOMAIN_LOGIC_H
