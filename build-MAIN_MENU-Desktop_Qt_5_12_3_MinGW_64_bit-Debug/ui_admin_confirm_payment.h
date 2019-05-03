/********************************************************************************
** Form generated from reading UI file 'admin_confirm_payment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_CONFIRM_PAYMENT_H
#define UI_ADMIN_CONFIRM_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_confirm_payment
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_confirm_payment)
    {
        if (admin_confirm_payment->objectName().isEmpty())
            admin_confirm_payment->setObjectName(QString::fromUtf8("admin_confirm_payment"));
        admin_confirm_payment->resize(289, 260);
        centralwidget = new QWidget(admin_confirm_payment);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 60, 161, 71));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 10, 113, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 10, 121, 32));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 140, 131, 32));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 60, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 60, 16));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 140, 113, 32));
        admin_confirm_payment->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_confirm_payment);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 289, 22));
        admin_confirm_payment->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_confirm_payment);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin_confirm_payment->setStatusBar(statusbar);

        retranslateUi(admin_confirm_payment);

        QMetaObject::connectSlotsByName(admin_confirm_payment);
    } // setupUi

    void retranslateUi(QMainWindow *admin_confirm_payment)
    {
        admin_confirm_payment->setWindowTitle(QApplication::translate("admin_confirm_payment", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("admin_confirm_payment", "powr\303\263t", nullptr));
        pushButton_2->setText(QApplication::translate("admin_confirm_payment", "Kolejna Osoba", nullptr));
        pushButton_3->setText(QApplication::translate("admin_confirm_payment", "Potwierdzenie", nullptr));
        label->setText(QApplication::translate("admin_confirm_payment", "Mail", nullptr));
        label_2->setText(QApplication::translate("admin_confirm_payment", "Kwota", nullptr));
        pushButton_4->setText(QApplication::translate("admin_confirm_payment", "Anulowanie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_confirm_payment: public Ui_admin_confirm_payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_CONFIRM_PAYMENT_H
