#ifndef HOTKEYSLIB_GLOBAL_H
#define HOTKEYSLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HOTKEYSLIB_LIBRARY)
#define HOTKEYSLIB_EXPORT Q_DECL_EXPORT
#else
#define HOTKEYSLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // HOTKEYSLIB_GLOBAL_H
