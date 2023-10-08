#include "widgetapp.h"

namespace AA {

WidgetApp::WidgetApp(int argc, char *argv[])
    :m_app(new QApplication(argc, argv))
    ,theme("dark_amber")
{}

WidgetApp::WidgetApp(int argc, char *argv[], const char *theme)
    :m_app(new QApplication(argc, argv))
    ,theme(theme)
{}

WidgetApp::WidgetApp(QApplication *app)
    :m_app(app)
    ,theme("dark_amber")
{

}

WidgetApp::WidgetApp(QApplication *app, const char *theme)
    :m_app(app)
    ,theme(theme)
{

}

void WidgetApp::loadWindow(QWidget *widget)
{
    this->m_main = widget;
    setTheme();
    this->m_main->show();
}

int WidgetApp::result()
{
    return m_app->exec();
}

int WidgetApp::load(QMainWindow *main)
{
    loadWindow(main);
    return result();
}

int WidgetApp::load(QWidget *main)
{
    loadWindow(main);
    return result();
}

QWidget *WidgetApp::main()
{
    return this->m_main;
}

void WidgetApp::setTheme()
{
    QString styleName = ":/css/";
    styleName += theme;
    styleName += ".css";
    QFile styleSheet(styleName);
    styleSheet.open(QFile::ReadOnly);
    m_app->setStyleSheet(styleSheet.readAll());
    styleSheet.close();
}

}
