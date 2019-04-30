/********************************************************************************
** Form generated from reading UI file 'admin_user_data.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_USER_DATA_H
#define UI_ADMIN_USER_DATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin_user_data
{
public:
    QPushButton *close_button;
    QPushButton *search_button;
    QLabel *label;
    QLineEdit *email;

    void setupUi(QDialog *admin_user_data)
    {
        if (admin_user_data->objectName().isEmpty())
            admin_user_data->setObjectName(QString::fromUtf8("admin_user_data"));
        admin_user_data->resize(400, 300);
        close_button = new QPushButton(admin_user_data);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(20, 10, 75, 23));
        search_button = new QPushButton(admin_user_data);
        search_button->setObjectName(QString::fromUtf8("search_button"));
        search_button->setGeometry(QRect(134, 240, 91, 23));
        label = new QLabel(admin_user_data);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 80, 131, 16));
        email = new QLineEdit(admin_user_data);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(120, 110, 113, 20));

        retranslateUi(admin_user_data);

        QMetaObject::connectSlotsByName(admin_user_data);
    } // setupUi

    void retranslateUi(QDialog *admin_user_data)
    {
        admin_user_data->setWindowTitle(QApplication::translate("admin_user_data", "Dialog", nullptr));
        close_button->setText(QApplication::translate("admin_user_data", "Zamknij", nullptr));
        search_button->setText(QApplication::translate("admin_user_data", "Szukaj danych", nullptr));
        label->setText(QApplication::translate("admin_user_data", "Podaj emaila", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_user_data: public Ui_admin_user_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_USER_DATA_H
