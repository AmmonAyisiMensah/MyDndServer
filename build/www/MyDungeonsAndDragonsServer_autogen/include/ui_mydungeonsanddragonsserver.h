/********************************************************************************
** Form generated from reading UI file 'mydungeonsanddragonsserver.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDUNGEONSANDDRAGONSSERVER_H
#define UI_MYDUNGEONSANDDRAGONSSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDungeonsAndDragonsServer
{
public:

    void setupUi(QWidget *MyDungeonsAndDragonsServer)
    {
        if (MyDungeonsAndDragonsServer->objectName().isEmpty())
            MyDungeonsAndDragonsServer->setObjectName(QString::fromUtf8("MyDungeonsAndDragonsServer"));
        MyDungeonsAndDragonsServer->resize(800, 600);

        retranslateUi(MyDungeonsAndDragonsServer);

        QMetaObject::connectSlotsByName(MyDungeonsAndDragonsServer);
    } // setupUi

    void retranslateUi(QWidget *MyDungeonsAndDragonsServer)
    {
        MyDungeonsAndDragonsServer->setWindowTitle(QCoreApplication::translate("MyDungeonsAndDragonsServer", "MyDungeonsAndDragonsServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDungeonsAndDragonsServer: public Ui_MyDungeonsAndDragonsServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDUNGEONSANDDRAGONSSERVER_H
