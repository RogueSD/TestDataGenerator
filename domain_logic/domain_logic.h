#ifndef DOMAIN_LOGIC_H
#define DOMAIN_LOGIC_H

#include "DataStorage/data.h"
#include "Options/dataoptions.h"

#if defined(DOMAIN_LOGIC_LIBRARY)
#  define GENERATE_DATA_EXPORT Q_DECL_EXPORT
#else
#  define GENERATE_DATA_EXPORT Q_DECL_IMPORT
#endif

GENERATE_DATA_EXPORT Data* generateTestData(char id, double step, int duration, DataOptions* options = nullptr);

#endif // DOMAIN_LOGIC_H
