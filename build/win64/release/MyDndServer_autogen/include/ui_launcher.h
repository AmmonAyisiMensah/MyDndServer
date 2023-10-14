/********************************************************************************
** Form generated from reading UI file 'launcher.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHER_H
#define UI_LAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Launcher
{
public:
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *char_url;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_check;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_urlmap;
    QPushButton *btn_filemap;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *db_host;
    QLineEdit *db_port;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *db_name;
    QPushButton *btn_connect;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btn_menu_2;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btn_register_2;
    QToolButton *btn_login_2;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *Launcher)
    {
        if (Launcher->objectName().isEmpty())
            Launcher->setObjectName("Launcher");
        Launcher->resize(575, 423);
        horizontalLayout_7 = new QHBoxLayout(Launcher);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox = new QGroupBox(Launcher);
        groupBox->setObjectName("groupBox");
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        char_url = new QLineEdit(groupBox);
        char_url->setObjectName("char_url");

        verticalLayout_3->addWidget(char_url);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_check = new QPushButton(groupBox);
        btn_check->setObjectName("btn_check");

        horizontalLayout->addWidget(btn_check);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout);


        horizontalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Launcher);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        btn_urlmap = new QPushButton(groupBox_2);
        btn_urlmap->setObjectName("btn_urlmap");

        verticalLayout->addWidget(btn_urlmap);

        btn_filemap = new QPushButton(groupBox_2);
        btn_filemap->setObjectName("btn_filemap");

        verticalLayout->addWidget(btn_filemap);


        horizontalLayout_3->addWidget(groupBox_2);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        groupBox_4 = new QGroupBox(Launcher);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        db_host = new QLineEdit(groupBox_4);
        db_host->setObjectName("db_host");

        horizontalLayout_4->addWidget(db_host);

        db_port = new QLineEdit(groupBox_4);
        db_port->setObjectName("db_port");

        horizontalLayout_4->addWidget(db_port);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        db_name = new QLineEdit(groupBox_4);
        db_name->setObjectName("db_name");

        verticalLayout_2->addWidget(db_name);

        btn_connect = new QPushButton(groupBox_4);
        btn_connect->setObjectName("btn_connect");

        verticalLayout_2->addWidget(btn_connect);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_4->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(groupBox_4);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout_4->addWidget(lineEdit_4);


        horizontalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_5->addLayout(horizontalLayout_5);


        horizontalLayout_6->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(Launcher);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        pushButton_4 = new QPushButton(groupBox_3);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_7->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(groupBox_3);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout_7->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_7->addWidget(pushButton_5);


        horizontalLayout_6->addWidget(groupBox_3);

        horizontalLayout_6->setStretch(0, 1);

        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_menu_2 = new QToolButton(Launcher);
        btn_menu_2->setObjectName("btn_menu_2");

        horizontalLayout_2->addWidget(btn_menu_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_register_2 = new QToolButton(Launcher);
        btn_register_2->setObjectName("btn_register_2");

        horizontalLayout_2->addWidget(btn_register_2);

        btn_login_2 = new QToolButton(Launcher);
        btn_login_2->setObjectName("btn_login_2");

        horizontalLayout_2->addWidget(btn_login_2);


        verticalLayout_6->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout_6);

        horizontalSpacer_6 = new QSpacerItem(49, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        retranslateUi(Launcher);

        QMetaObject::connectSlotsByName(Launcher);
    } // setupUi

    void retranslateUi(QWidget *Launcher)
    {
        Launcher->setWindowTitle(QCoreApplication::translate("Launcher", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Launcher", "Checkout D&D Beyond character", nullptr));
        char_url->setText(QCoreApplication::translate("Launcher", "https://character-service.dndbeyond.com/character/v5/character/103508287", nullptr));
        btn_check->setText(QCoreApplication::translate("Launcher", "Check ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Launcher", "Create Map from ", nullptr));
        btn_urlmap->setText(QCoreApplication::translate("Launcher", "From URL", nullptr));
        btn_filemap->setText(QCoreApplication::translate("Launcher", "From File", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Launcher", "Database Connection (not connected D:<)", nullptr));
        db_host->setText(QCoreApplication::translate("Launcher", "127.0.0.1", nullptr));
        db_host->setPlaceholderText(QCoreApplication::translate("Launcher", "Host", nullptr));
        db_port->setText(QCoreApplication::translate("Launcher", "1433", nullptr));
        db_port->setPlaceholderText(QCoreApplication::translate("Launcher", "Port", nullptr));
        db_name->setText(QCoreApplication::translate("Launcher", "MyDndServer", nullptr));
        db_name->setPlaceholderText(QCoreApplication::translate("Launcher", "Database", nullptr));
        btn_connect->setText(QCoreApplication::translate("Launcher", "Connect", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("Launcher", "User", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("Launcher", "Pass", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Launcher", "Database Migration", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Launcher", "new", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Launcher", "Undo", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Launcher", "Fresh", nullptr));
        btn_menu_2->setText(QCoreApplication::translate("Launcher", "Menu", nullptr));
        btn_register_2->setText(QCoreApplication::translate("Launcher", "Register", nullptr));
        btn_login_2->setText(QCoreApplication::translate("Launcher", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Launcher: public Ui_Launcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHER_H
