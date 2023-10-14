#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QWidget>
#include "register.h"
#include "login.h"

namespace Ui {
class Launcher;
}

class Launcher : public QWidget
{
    Q_OBJECT

public:
    explicit Launcher(QWidget *parent = nullptr);
    ~Launcher();

private:
    Ui::Launcher *ui;
    Register *m_RegisterDialog;
    Login *m_LoginDialog;
};

#endif // LAUNCHER_H
