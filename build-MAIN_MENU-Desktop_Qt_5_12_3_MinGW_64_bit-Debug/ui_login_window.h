/********************************************************************************
** Form generated from reading UI file 'login_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_WINDOW_H
#define UI_LOGIN_WINDOW_H

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

class Ui_login_window
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_mail;
    QLineEdit *lineEdit_password;
    QPushButton *backButton;
    QPushButton *loginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login_window)
    {
        if (login_window->objectName().isEmpty())
            login_window->setObjectName(QString::fromUtf8("login_window"));
        login_window->resize(298, 236);
        centralwidget = new QWidget(login_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 111, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 81, 16));
        lineEdit_mail = new QLineEdit(centralwidget);
        lineEdit_mail->setObjectName(QString::fromUtf8("lineEdit_mail"));
        lineEdit_mail->setGeometry(QRect(140, 20, 113, 21));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(140, 60, 113, 21));
        lineEdit_password->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(20, 100, 113, 32));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(170, 100, 113, 32));
        login_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 298, 22));
        login_window->setMenuBar(menubar);
        statusbar = new QStatusBar(login_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login_window->setStatusBar(statusbar);

        retranslateUi(login_window);

        QMetaObject::connectSlotsByName(login_window);
    } // setupUi

    void retranslateUi(QMainWindow *login_window)
    {
        login_window->setWindowTitle(QApplication::translate("login_window", "MainWindow", nullptr));
        label->setText(QApplication::translate("login_window", "Mail", nullptr));
        label_2->setText(QApplication::translate("login_window", "Password:", nullptr));
        backButton->setText(QApplication::translate("login_window", "powrot", nullptr));
        loginButton->setText(QApplication::translate("login_window", "Zaloguj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_window: public Ui_login_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_WINDOW_H
