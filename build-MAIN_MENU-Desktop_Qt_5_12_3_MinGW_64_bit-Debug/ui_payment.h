/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_payment
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_pay;
    QLineEdit *lineEdit_confirm;
    QPushButton *pushButton_back;
    QPushButton *pushButton;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *payment)
    {
        if (payment->objectName().isEmpty())
            payment->setObjectName(QString::fromUtf8("payment"));
        payment->resize(441, 241);
        centralwidget = new QWidget(payment);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 60, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 141, 16));
        lineEdit_pay = new QLineEdit(centralwidget);
        lineEdit_pay->setObjectName(QString::fromUtf8("lineEdit_pay"));
        lineEdit_pay->setGeometry(QRect(220, 30, 181, 21));
        lineEdit_confirm = new QLineEdit(centralwidget);
        lineEdit_confirm->setObjectName(QString::fromUtf8("lineEdit_confirm"));
        lineEdit_confirm->setGeometry(QRect(220, 60, 181, 21));
        lineEdit_confirm->setEchoMode(QLineEdit::Password);
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(30, 120, 113, 32));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 120, 113, 32));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(410, 30, 60, 16));
        payment->setCentralWidget(centralwidget);
        menubar = new QMenuBar(payment);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 441, 22));
        payment->setMenuBar(menubar);
        statusbar = new QStatusBar(payment);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        payment->setStatusBar(statusbar);

        retranslateUi(payment);

        QMetaObject::connectSlotsByName(payment);
    } // setupUi

    void retranslateUi(QMainWindow *payment)
    {
        payment->setWindowTitle(QApplication::translate("payment", "MainWindow", nullptr));
        label->setText(QApplication::translate("payment", "Wp\305\202ata", nullptr));
        label_2->setText(QApplication::translate("payment", "Potwierdzenie has\305\202em", nullptr));
        pushButton_back->setText(QApplication::translate("payment", "powr\303\263t", nullptr));
        pushButton->setText(QApplication::translate("payment", "Dalej", nullptr));
        label_3->setText(QApplication::translate("payment", "PLN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payment: public Ui_payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
