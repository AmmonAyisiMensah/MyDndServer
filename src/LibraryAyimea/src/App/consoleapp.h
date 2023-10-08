#ifndef CONSOLEAPP_H
#define CONSOLEAPP_H

#include "Library_Ayimea_global.h"
#include <QCoreApplication>

namespace AA {

/**
 * @brief The ConsoleApp class
 */
class AYIMEA_EXPORT ConsoleApp
{
public:
    /**
     * @brief ConsoleApp
     * @param argc
     * @param argv
     */
    ConsoleApp(int argc, char **argv);

    /**
     * @brief result
     * @return
     */
    int result(void);

    /**
     * @brief logOutput
     * @param type
     * @param context
     * @param msg
     */
    static void logOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg);

private:
    /**
     * @brief Instance pointer of the application core
     */
    QCoreApplication *app;
};

}


#endif // CONSOLEAPP_H
