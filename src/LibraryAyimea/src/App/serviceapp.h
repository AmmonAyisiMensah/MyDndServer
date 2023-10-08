#ifndef SERVICEAPP_H
#define SERVICEAPP_H

#include "Library_Ayimea_global.h"
#include <QCoreApplication>
#include "loghandler.h"

namespace AA {

/**
 * @brief Application wrapper for a background service program
 */
class AYIMEA_EXPORT ServiceApp
{
public:
    /**
     * @brief Default constructor
     * @param argc Number of arguments provided
     * @param argv Array of arguments
     */
    ServiceApp(int argc, char *argv[]);

    /**
    * @brief Enter the main event loop and wait until return code is set
    * @return Application return code
    */
    int result();

    /**
     * @brief Force the service application to exit with a specific retrun code
     * @param returnCode The integer the application will return
     */
    void exit(int returnCode);

private:
    /**
     * @brief Our main event loop from Qt
     */
    QCoreApplication app;
};

}

#endif // SERVICEAPP_H
