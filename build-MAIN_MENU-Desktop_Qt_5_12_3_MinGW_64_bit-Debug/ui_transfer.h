/********************************************************************************
** Form generated from reading UI file 'transfer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFER_H
#define UI_TRANSFER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Transfer
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_back;
    QPushButton *pushButton_Wyslij;
    QLineEdit *lineEdit_odiorca;
    QLineEdit *lineEdit_tytul;
    QLineEdit *lineEdit_konto;
    QLineEdit *lineEdit_kwota;
    QLineEdit *lineEdit_potwierdzenie;
    QLabel *label_8;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Transfer)
    {
        if (Transfer->objectName().isEmpty())
            Transfer->setObjectName(QString::fromUtf8("Transfer"));
        Transfer->resize(407, 344);
        centralwidget = new QWidget(Transfer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 161, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 70, 101, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 160, 60, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 100, 101, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 130, 60, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 160, 60, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 190, 141, 16));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(30, 230, 113, 32));
        pushButton_Wyslij = new QPushButton(centralwidget);
        pushButton_Wyslij->setObjectName(QString::fromUtf8("pushButton_Wyslij"));
        pushButton_Wyslij->setGeometry(QRect(190, 230, 113, 32));
        lineEdit_odiorca = new QLineEdit(centralwidget);
        lineEdit_odiorca->setObjectName(QString::fromUtf8("lineEdit_odiorca"));
        lineEdit_odiorca->setGeometry(QRect(190, 40, 171, 21));
        lineEdit_tytul = new QLineEdit(centralwidget);
        lineEdit_tytul->setObjectName(QString::fromUtf8("lineEdit_tytul"));
        lineEdit_tytul->setGeometry(QRect(190, 70, 171, 21));
        lineEdit_konto = new QLineEdit(centralwidget);
        lineEdit_konto->setObjectName(QString::fromUtf8("lineEdit_konto"));
        lineEdit_konto->setGeometry(QRect(190, 100, 171, 21));
        lineEdit_kwota = new QLineEdit(centralwidget);
        lineEdit_kwota->setObjectName(QString::fromUtf8("lineEdit_kwota"));
        lineEdit_kwota->setGeometry(QRect(190, 130, 171, 21));
        lineEdit_potwierdzenie = new QLineEdit(centralwidget);
        lineEdit_potwierdzenie->setObjectName(QString::fromUtf8("lineEdit_potwierdzenie"));
        lineEdit_potwierdzenie->setGeometry(QRect(190, 190, 171, 21));
        lineEdit_potwierdzenie->setEchoMode(QLineEdit::Password);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 130, 60, 16));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(190, 160, 171, 21));
        Transfer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Transfer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 407, 22));
        Transfer->setMenuBar(menubar);
        statusbar = new QStatusBar(Transfer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Transfer->setStatusBar(statusbar);

        retranslateUi(Transfer);

        QMetaObject::connectSlotsByName(Transfer);
    } // setupUi

    void retranslateUi(QMainWindow *Transfer)
    {
        Transfer->setWindowTitle(QApplication::translate("Transfer", "MainWindow", nullptr));
        label->setText(QApplication::translate("Transfer", "Imie i Nazwisko Odbiorcy", nullptr));
        label_3->setText(QApplication::translate("Transfer", "Tytu\305\202 przelewu", nullptr));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Transfer", "Numer konta", nullptr));
        label_2->setText(QApplication::translate("Transfer", "Kwota", nullptr));
        label_6->setText(QApplication::translate("Transfer", "Data", nullptr));
        label_7->setText(QApplication::translate("Transfer", "Potwierdzenie haslem", nullptr));
        pushButton_back->setText(QApplication::translate("Transfer", "Powr\303\263t", nullptr));
        pushButton_Wyslij->setText(QApplication::translate("Transfer", "Wyslij", nullptr));
        label_8->setText(QApplication::translate("Transfer", "PLN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transfer: public Ui_Transfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFER_H
