/********************************************************************************
** Form generated from reading UI file 'mydndserver.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDNDSERVER_H
#define UI_MYDNDSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDndServer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_menu;
    QSpacerItem *horizontalSpacer;
    QToolButton *btn_register;
    QToolButton *btn_login;
    QLabel *label;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btn_character_sheet;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btn_equipment;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *btn_inventory;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *btn_action;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *btn_journal;

    void setupUi(QWidget *MyDndServer)
    {
        if (MyDndServer->objectName().isEmpty())
            MyDndServer->setObjectName("MyDndServer");
        MyDndServer->resize(800, 600);
        verticalLayout = new QVBoxLayout(MyDndServer);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_menu = new QToolButton(MyDndServer);
        btn_menu->setObjectName("btn_menu");

        horizontalLayout->addWidget(btn_menu);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_register = new QToolButton(MyDndServer);
        btn_register->setObjectName("btn_register");

        horizontalLayout->addWidget(btn_register);

        btn_login = new QToolButton(MyDndServer);
        btn_login->setObjectName("btn_login");

        horizontalLayout->addWidget(btn_login);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(MyDndServer);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        graphicsView = new QGraphicsView(MyDndServer);
        graphicsView->setObjectName("graphicsView");

        verticalLayout->addWidget(graphicsView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_character_sheet = new QToolButton(MyDndServer);
        btn_character_sheet->setObjectName("btn_character_sheet");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/789_Lorc_RPG_icons/Icon.3_83.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_character_sheet->setIcon(icon);
        btn_character_sheet->setIconSize(QSize(128, 128));

        horizontalLayout_2->addWidget(btn_character_sheet);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_equipment = new QToolButton(MyDndServer);
        btn_equipment->setObjectName("btn_equipment");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/789_Lorc_RPG_icons/Icon.6_94.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_equipment->setIcon(icon1);
        btn_equipment->setIconSize(QSize(128, 128));

        horizontalLayout_2->addWidget(btn_equipment);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        btn_inventory = new QToolButton(MyDndServer);
        btn_inventory->setObjectName("btn_inventory");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/789_Lorc_RPG_icons/Icon.6_37.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_inventory->setIcon(icon2);
        btn_inventory->setIconSize(QSize(128, 128));

        horizontalLayout_2->addWidget(btn_inventory);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        btn_action = new QToolButton(MyDndServer);
        btn_action->setObjectName("btn_action");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/789_Lorc_RPG_icons/Icon.2_43.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_action->setIcon(icon3);
        btn_action->setIconSize(QSize(128, 128));

        horizontalLayout_2->addWidget(btn_action);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btn_journal = new QToolButton(MyDndServer);
        btn_journal->setObjectName("btn_journal");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/789_Lorc_RPG_icons/Icon.5_85.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_journal->setIcon(icon4);
        btn_journal->setIconSize(QSize(128, 128));

        horizontalLayout_2->addWidget(btn_journal);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MyDndServer);

        QMetaObject::connectSlotsByName(MyDndServer);
    } // setupUi

    void retranslateUi(QWidget *MyDndServer)
    {
        MyDndServer->setWindowTitle(QCoreApplication::translate("MyDndServer", "MyDndServer", nullptr));
        btn_menu->setText(QCoreApplication::translate("MyDndServer", "Menu", nullptr));
        btn_register->setText(QCoreApplication::translate("MyDndServer", "Register", nullptr));
        btn_login->setText(QCoreApplication::translate("MyDndServer", "Login", nullptr));
        label->setText(QCoreApplication::translate("MyDndServer", "Welcome to My Dungeons & Dragons Server!", nullptr));
        btn_character_sheet->setText(QString());
        btn_equipment->setText(QString());
        btn_inventory->setText(QString());
        btn_action->setText(QString());
        btn_journal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyDndServer: public Ui_MyDndServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDNDSERVER_H
