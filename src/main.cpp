#include "mydndserver.h"
#include "widgetapp.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AA::WidgetApp app(&a, STYLE_DARK_AMBER);
    return app.load(new MyDndServer);
}


