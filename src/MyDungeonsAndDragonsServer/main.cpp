#include "mydungeonsanddragonsserver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDungeonsAndDragonsServer w;
    w.show();
    return a.exec();
}
