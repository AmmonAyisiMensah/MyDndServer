#include "launcher.h"
#include "ui_launcher.h"

Launcher::Launcher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Launcher)
{
    ui->setupUi(this);
}

Launcher::~Launcher()
{
    delete ui;
}
