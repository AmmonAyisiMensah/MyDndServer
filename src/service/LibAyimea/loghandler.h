#ifndef LOGHANDLER_H
#define LOGHANDLER_H

#include <QApplication>
#include "Library_Ayimea_global.h"

namespace AA {

/**
 * @brief The main logging functionality
 * @param type Describes the type of log message, debug, warning, critical, ...etc
 * @param context Contains nformation of the source code
 * @param message The actual log massage
 */
void AYIMEA_EXPORT handleLog(QtMsgType type, const QMessageLogContext &context, const QString &message);

}

#endif // LOGHANDLER_H
