#include "mydndserver.h"
#include "widgetapp.h"
#include <QThread>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AA::WidgetApp app(&a, STYLE_DARK_AMBER);

    MyDndServer dnd;
    app.load(&dnd);

    for(;;) {
        dnd.update();
        //QThread::currentThread()->sleep(1);
    }

    return app.result();
}


