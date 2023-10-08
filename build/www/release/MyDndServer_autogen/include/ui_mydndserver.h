/********************************************************************************
** Form generated from reading UI file 'mydndserver.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDNDSERVER_H
#define UI_MYDNDSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDndServer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_register;
    QToolButton *btn_login;

    void setupUi(QWidget *MyDndServer)
    {
        if (MyDndServer->objectName().isEmpty())
            MyDndServer->setObjectName("MyDndServer");
        MyDndServer->resize(800, 600);
        verticalLayout = new QVBoxLayout(MyDndServer);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(MyDndServer);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_register = new QToolButton(MyDndServer);
        btn_register->setObjectName("btn_register");

        horizontalLayout->addWidget(btn_register);

        btn_login = new QToolButton(MyDndServer);
        btn_login->setObjectName("btn_login");

        horizontalLayout->addWidget(btn_login);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(MyDndServer);

        QMetaObject::connectSlotsByName(MyDndServer);
    } // setupUi

    void retranslateUi(QWidget *MyDndServer)
    {
        MyDndServer->setWindowTitle(QCoreApplication::translate("MyDndServer", "MyDndServer", nullptr));
        label->setText(QCoreApplication::translate("MyDndServer", "Welcome to My Dungeons & Dragons Server!", nullptr));
        btn_register->setText(QCoreApplication::translate("MyDndServer", "Register", nullptr));
        btn_login->setText(QCoreApplication::translate("MyDndServer", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDndServer: public Ui_MyDndServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDNDSERVER_H
