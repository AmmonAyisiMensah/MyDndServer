#include "mydndserver.h"
#include "widgetapp.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AA::WidgetApp app(&a);
    app.loadWindow(new MyDndServer);
    return app.result();
}


