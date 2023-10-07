#ifndef MYDUNGEONSANDDRAGONSSERVER_H
#define MYDUNGEONSANDDRAGONSSERVER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MyDungeonsAndDragonsServer; }
QT_END_NAMESPACE

class MyDungeonsAndDragonsServer : public QWidget
{
    Q_OBJECT

public:
    MyDungeonsAndDragonsServer(QWidget *parent = nullptr);
    ~MyDungeonsAndDragonsServer();

private:
    Ui::MyDungeonsAndDragonsServer *ui;
};
#endif // MYDUNGEONSANDDRAGONSSERVER_H
