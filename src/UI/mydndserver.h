#ifndef MYDNDSERVER_H
#define MYDNDSERVER_H

#include <QWidget>
#include "register.h"
#include "login.h"
#include "view.h"

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MyDndServer; }
QT_END_NAMESPACE

class MyDndServer : public QWidget
{
    Q_OBJECT

public:
    MyDndServer(QWidget *parent = nullptr);
    ~MyDndServer();

    void update();

private:
    Ui::MyDndServer *ui;
    Register *m_RegisterDialog;
    Login *m_LoginDialog;
    View *view;

    QGraphicsPixmapItem *bg1 = new QGraphicsPixmapItem(QPixmap::fromImage(QImage(":/bg01.jpg")));
    QGraphicsPixmapItem *bg2 = new QGraphicsPixmapItem(QPixmap::fromImage(QImage(":/bg01.jpg")));


};
#endif // MYDNDSERVER_H
