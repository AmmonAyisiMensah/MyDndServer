#include "mydndserver.h"
#include "ui_mydndserver.h"
#include <QLineEdit>
#include <QPushButton>

MyDndServer::MyDndServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyDndServer)
    , m_RegisterDialog(new Register)
    ,m_LoginDialog(new Login)
{
    ui->setupUi(this);
    connect(ui->btn_register, &QPushButton::clicked, m_RegisterDialog, &Register::show);
    connect(ui->btn_login, &QPushButton::clicked, m_LoginDialog, &Login::show);
    QGraphicsScene scene;
    QGraphicsPixmapItem item(QPixmap::fromImage(QImage(":/assets/bg01.jpg")));
    scene.addItem(&item);

    ui->graphicsView->setScene(&scene);
    ui->graphicsView->show();
}

MyDndServer::~MyDndServer()
{
    delete ui;
}

