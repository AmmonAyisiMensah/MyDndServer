#include "mydndserver.h"
#include "./ui_mydndserver.h"
#include <QLineEdit>
#include <QPushButton>

MyDndServer::MyDndServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyDndServer)
    , m_RegisterDialog(new Register)
{
    ui->setupUi(this);
    connect(ui->btn_register, &QPushButton::clicked, m_RegisterDialog, &Register::show);
}

MyDndServer::~MyDndServer()
{
    delete ui;
}

