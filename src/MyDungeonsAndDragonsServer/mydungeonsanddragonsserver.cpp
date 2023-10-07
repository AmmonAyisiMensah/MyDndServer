#include "mydungeonsanddragonsserver.h"
#include "./ui_mydungeonsanddragonsserver.h"

MyDungeonsAndDragonsServer::MyDungeonsAndDragonsServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyDungeonsAndDragonsServer)
{
    ui->setupUi(this);
}

MyDungeonsAndDragonsServer::~MyDungeonsAndDragonsServer()
{
    delete ui;
}

