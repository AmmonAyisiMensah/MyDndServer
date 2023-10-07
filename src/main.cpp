#include <widgetapp.h>
#include <mainwindow.h>

int main(int argc, char *argv[])
{
    AA::WidgetApp a(argc, argv, "Material/dark_amber");
    a.load(new MainWindow);

    return a.result();
}
