/********************************************************************************
** Form generated from reading UI file 'user_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_WINDOW_H
#define UI_USER_WINDOW_H

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

class Ui_user_window
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *user_window)
    {
        if (user_window->objectName().isEmpty())
            user_window->setObjectName(QString::fromUtf8("user_window"));
        user_window->resize(598, 345);
        centralwidget = new QWidget(user_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 190, 113, 32));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(90, 250, 113, 32));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(290, 80, 251, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 220, 113, 32));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 80, 241, 41));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 30, 241, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 50, 201, 16));
        user_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(user_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 598, 22));
        user_window->setMenuBar(menubar);
        statusbar = new QStatusBar(user_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        user_window->setStatusBar(statusbar);

        retranslateUi(user_window);

        QMetaObject::connectSlotsByName(user_window);
    } // setupUi

    void retranslateUi(QMainWindow *user_window)
    {
        user_window->setWindowTitle(QApplication::translate("user_window", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("user_window", "Nowy przelew", nullptr));
        pushButton_3->setText(QApplication::translate("user_window", "Wyloguj", nullptr));
        pushButton_2->setText(QApplication::translate("user_window", "Historia ", nullptr));
        label->setText(QApplication::translate("user_window", "Dost\304\231pne \305\233rodki", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_window: public Ui_user_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_WINDOW_H
