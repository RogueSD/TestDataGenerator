#ifndef DOMAIN_LOGIC_GLOBAL_H
#define DOMAIN_LOGIC_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DOMAIN_LOGIC_LIBRARY)
#  define DOMAIN_LOGIC_EXPORT Q_DECL_EXPORT
#else
#  define DOMAIN_LOGIC_EXPORT Q_DECL_IMPORT
#endif

#endif // DOMAIN_LOGIC_GLOBAL_H
