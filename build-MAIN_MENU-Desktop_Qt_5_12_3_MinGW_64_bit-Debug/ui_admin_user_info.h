/********************************************************************************
** Form generated from reading UI file 'admin_user_info.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_USER_INFO_H
#define UI_ADMIN_USER_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_admin_user_info
{
public:
    QPushButton *close_button;
    QPushButton *search_button;
    QLabel *label;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

    void setupUi(QDialog *admin_user_info)
    {
        if (admin_user_info->objectName().isEmpty())
            admin_user_info->setObjectName(QString::fromUtf8("admin_user_info"));
        admin_user_info->resize(723, 300);
        close_button = new QPushButton(admin_user_info);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(20, 20, 75, 23));
        search_button = new QPushButton(admin_user_info);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setGeometry(QRect(160, 270, 75, 23));
        label = new QLabel(admin_user_info);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 190, 121, 20));
        lineEdit = new QLineEdit(admin_user_info);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(140, 230, 113, 20));
        textBrowser = new QTextBrowser(admin_user_info);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(360, 10, 201, 121));
        label_2 = new QLabel(admin_user_info);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 20, 61, 16));
        label_3 = new QLabel(admin_user_info);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 30, 47, 13));
        label_4 = new QLabel(admin_user_info);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 40, 47, 13));
        label_5 = new QLabel(admin_user_info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 50, 47, 13));
        label_6 = new QLabel(admin_user_info);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 60, 47, 13));
        label_7 = new QLabel(admin_user_info);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(320, 70, 47, 13));
        label_8 = new QLabel(admin_user_info);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(300, 80, 71, 20));
        label_9 = new QLabel(admin_user_info);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(310, 100, 51, 20));

        retranslateUi(admin_user_info);

        QMetaObject::connectSlotsByName(admin_user_info);
    } // setupUi

    void retranslateUi(QDialog *admin_user_info)
    {
        admin_user_info->setWindowTitle(QApplication::translate("admin_user_info", "Dialog", nullptr));
        close_button->setText(QApplication::translate("admin_user_info", "Wyloguj", nullptr));
        search_button->setText(QApplication::translate("admin_user_info", "Szukaj", nullptr));
        label->setText(QApplication::translate("admin_user_info", "Podaj email", nullptr));
        label_2->setText(QApplication::translate("admin_user_info", "Adres email", nullptr));
        label_3->setText(QApplication::translate("admin_user_info", "Imie", nullptr));
        label_4->setText(QApplication::translate("admin_user_info", "Nazwisko", nullptr));
        label_5->setText(QApplication::translate("admin_user_info", "Adres", nullptr));
        label_6->setText(QApplication::translate("admin_user_info", "Telefon", nullptr));
        label_7->setText(QApplication::translate("admin_user_info", "Has\305\202o", nullptr));
        label_8->setText(QApplication::translate("admin_user_info", "Numer konta", nullptr));
        label_9->setText(QApplication::translate("admin_user_info", "Stan konta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_user_info: public Ui_admin_user_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_USER_INFO_H
