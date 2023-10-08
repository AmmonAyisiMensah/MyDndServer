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
class WidgetApp
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
     * @param theme stylesheet name
     */
    WidgetApp(int argc, char *argv[], const char *theme);


    WidgetApp(QApplication *app);


    WidgetApp(QApplication *app, const char *theme);

    /**
     * @brief Set the main application window
     * @param main Instance of main window
     */
    void loadWindow(QWidget *main);

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
     * @brief Set the main application window
     * @param main Instance of main widget
     * @return Application exit code
     */
    int load(QWidget *main);

    /**
     * @brief Get the instance pointer of the main widget
     * @return Widget pointer
     */
    QWidget *main();

private:
    /**
     * @brief Apply stylesheet for entire application
     */
    void setTheme();

private:
    /**
     * @brief Our main control flow and settings of the GUI applicsation
     */
    QApplication *m_app;

    /**
     * @brief stylesheet name
     */
    const char *theme;

    /**
     * @brief Instance pointer of main widget
     */
    QWidget *m_main;
};
}
#endif // WIDGETAPP_H
