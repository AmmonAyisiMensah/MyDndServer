#include "login.h"
#include "ui_login.h"
#include "Library_Ayimea_global.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowFlags(AA_DIALOG_HINTS);
    connect(ui->btn_close, &QPushButton::clicked, this, &QDialog::close);
}

Login::~Login()
{
    delete ui;
}
