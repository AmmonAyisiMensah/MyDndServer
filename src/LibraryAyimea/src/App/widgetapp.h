#ifndef WIDGETAPP_H
#define WIDGETAPP_H

#include <Library_Ayimea_global.h>
#include <QApplication>
#include <QMainWindow>
#include <QFile>

namespace AA {

/**
 * @brief Application wrapper for a GUI widget application
 */
class AYIMEA_EXPORT WidgetApp
{
public:
    /**
     * @brief Default constructor
     * @param argc Number of arguments provided
     * @param argv Array of arguments
     */
    WidgetApp(int argc, char *argv[]);

    /**
     * @brief Load widget application with a specific style
     * @param argc Number of arguments provided
     * @param argv Array of arguments
     * @param style stylesheet name
     */
    WidgetApp(int argc, char *argv[], const char *style);

    /**
     * @brief Set the main application window
     * @param main Instance of main window
     */
    void loadWindow(QMainWindow *main);

    /**
     * @brief Enter the main event loop and wait until return code is set
     * @return Application exit code
     */
    int result();

    /**
     * @brief Set the main application window
     * @param main Instance of main window
     * @return Application exit code
     */
    int load(QMainWindow *main);

    /**
     * @brief Get the instance pointer of the main window
     * @return Mainwindow pointer
     */
    QMainWindow *window();

private:
    /**
     * @brief Our main control flow and settings of the GUI applicsation
     */
    QApplication app;

    /**
     * @brief Instance pointer of main window
     */
    QMainWindow *main;
};
}
#endif // WIDGETAPP_H
