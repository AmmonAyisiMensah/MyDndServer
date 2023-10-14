/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *password_check;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_register;
    QPushButton *btn_close;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(540, 412);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Ayimea.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Register->setWindowIcon(icon);
        horizontalLayout_3 = new QHBoxLayout(Register);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(Register);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LeftToRight);
        label->setInputMethodHints(Qt::ImhUrlCharactersOnly);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(Register);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(Register);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(Register);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        username = new QLineEdit(Register);
        username->setObjectName("username");

        verticalLayout_2->addWidget(username);

        password = new QLineEdit(Register);
        password->setObjectName("password");

        verticalLayout_2->addWidget(password);

        password_check = new QLineEdit(Register);
        password_check->setObjectName("password_check");

        verticalLayout_2->addWidget(password_check);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_register = new QPushButton(Register);
        btn_register->setObjectName("btn_register");

        horizontalLayout_2->addWidget(btn_register);

        btn_close = new QPushButton(Register);
        btn_close->setObjectName("btn_close");

        horizontalLayout_2->addWidget(btn_close);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(2, 1);

        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(119, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Register to this MyDndServer", nullptr));
        label->setText(QCoreApplication::translate("Register", "Create MyDndServer Account", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "Password(check)", nullptr));
        btn_register->setText(QCoreApplication::translate("Register", "Register", nullptr));
        btn_close->setText(QCoreApplication::translate("Register", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
