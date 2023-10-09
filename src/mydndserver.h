#ifndef MYDNDSERVER_H
#define MYDNDSERVER_H

#include <QWidget>
#include "register.h"
#include "login.h"
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

private:
    Ui::MyDndServer *ui;
    Register *m_RegisterDialog;
    Login *m_LoginDialog;
};
#endif // MYDNDSERVER_H
