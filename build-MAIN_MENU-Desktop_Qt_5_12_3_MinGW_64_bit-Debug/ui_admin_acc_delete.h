/********************************************************************************
** Form generated from reading UI file 'admin_acc_delete.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_ACC_DELETE_H
#define UI_ADMIN_ACC_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin_acc_delete
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *user_mail;
    QLineEdit *pass_confirm;
    QPushButton *del_button;
    QPushButton *close_button;

    void setupUi(QDialog *admin_acc_delete)
    {
        if (admin_acc_delete->objectName().isEmpty())
            admin_acc_delete->setObjectName(QString::fromUtf8("admin_acc_delete"));
        admin_acc_delete->resize(400, 300);
        label = new QLabel(admin_acc_delete);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 121, 16));
        label_2 = new QLabel(admin_acc_delete);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 131, 20));
        user_mail = new QLineEdit(admin_acc_delete);
        user_mail->setObjectName(QString::fromUtf8("user_mail"));
        user_mail->setGeometry(QRect(200, 50, 161, 20));
        pass_confirm = new QLineEdit(admin_acc_delete);
        pass_confirm->setObjectName(QString::fromUtf8("pass_confirm"));
        pass_confirm->setGeometry(QRect(200, 90, 161, 20));
        del_button = new QPushButton(admin_acc_delete);
        del_button->setObjectName(QString::fromUtf8("del_button"));
        del_button->setGeometry(QRect(120, 140, 131, 61));
        close_button = new QPushButton(admin_acc_delete);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(20, 10, 171, 23));

        retranslateUi(admin_acc_delete);

        QMetaObject::connectSlotsByName(admin_acc_delete);
    } // setupUi

    void retranslateUi(QDialog *admin_acc_delete)
    {
        admin_acc_delete->setWindowTitle(QApplication::translate("admin_acc_delete", "Dialog", nullptr));
        label->setText(QApplication::translate("admin_acc_delete", "Podaj maila u\305\274ytkownika", nullptr));
        label_2->setText(QApplication::translate("admin_acc_delete", "Podaj has\305\202o administratora", nullptr));
        del_button->setText(QApplication::translate("admin_acc_delete", "Usu\305\204 konto", nullptr));
        close_button->setText(QApplication::translate("admin_acc_delete", "Powr\303\263t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_acc_delete: public Ui_admin_acc_delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_ACC_DELETE_H
