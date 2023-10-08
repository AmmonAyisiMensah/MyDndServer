#include "register.h"
#include "ui_register.h"
#include "Library_Ayimea_global.h"

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    setWindowFlags(AA_DIALOG_HINTS);
    connect(ui->btn_close, &QPushButton::clicked, this, &QDialog::close);
}

Register::~Register()
{
    delete ui;
}
