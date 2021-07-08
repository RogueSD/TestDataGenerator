#ifndef CONTROLLERS_GLOBAL_H
#define CONTROLLERS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CONTROLLERS_LIBRARY)
#  define CONTROLLERS_EXPORT Q_DECL_EXPORT
#else
#  define CONTROLLERS_EXPORT Q_DECL_IMPORT
#endif

#endif // CONTROLLERS_GLOBAL_H
