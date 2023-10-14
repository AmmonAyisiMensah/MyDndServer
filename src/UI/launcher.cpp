#include "launcher.h"
#include "ui_launcher.h"

Launcher::Launcher(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Launcher)
  , m_RegisterDialog(new Register)
  , m_LoginDialog(new Login)
{
  ui->setupUi(this);
  connect(ui->btn_register, &QPushButton::clicked, m_RegisterDialog, &Register::show);
  connect(ui->btn_login, &QPushButton::clicked, m_LoginDialog, &Login::show);
}

Launcher::~Launcher()
{
    delete ui;
}
