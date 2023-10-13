#include "mydndserver.h"
#include "ui_mydndserver.h"
#include <QLineEdit>
#include <QPushButton>


MyDndServer::MyDndServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyDndServer)
    , m_RegisterDialog(new Register)
    , m_LoginDialog(new Login)
{
    ui->setupUi(this);
    connect(ui->btn_register, &QPushButton::clicked, m_RegisterDialog, &Register::show);
    connect(ui->btn_login, &QPushButton::clicked, m_LoginDialog, &Login::show);

    bg1->setPos(0,0);
    bg2->setPos(bg1->pixmap().width(),0);
    view = new View(768, 600, {bg1, bg2});
    ui->graphicsView->setScene(view);
    ui->graphicsView->show();
}

MyDndServer::~MyDndServer()
{
    delete ui;
}

void MyDndServer::update()
{
    bg1->setPos(bg1->pos().x()-1, bg1->pos().y());
    bg2->setPos(bg2->pos().x()-1, bg2->pos().y());
}

