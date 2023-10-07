#ifndef LIBRARY_AYIMEA_GLOBAL_H
#define LIBRARY_AYIMEA_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QObject>
#include <QDebug>

#define AA_DIALOG_HINTS Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::WindowSystemMenuHint

#if defined(LIBRARY_AYIMEA)
#  define AYIMEA_EXPORT Q_DECL_EXPORT
#else
#  define AYIMEA_EXPORT Q_DECL_IMPORT
#endif

#define AA_SUCCES 0
#define AA_FAILED 2



#endif // LIBRARY_AYIMEA_GLOBAL_H
