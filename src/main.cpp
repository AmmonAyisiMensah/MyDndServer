#include "launcher.h"
#include "widgetapp.h"
#include <QThread>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AA::WidgetApp app(&a, STYLE_DARK_CYAN);
    app.load(new Launcher);

    return app.result();
}


