/********************************************************************************
** Form generated from reading UI file 'admin_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_WINDOW_H
#define UI_ADMIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_window
{
public:
    QWidget *centralwidget;
    QPushButton *adduser_button;
    QPushButton *deleteuser_button;
    QPushButton *transfer_button;
    QPushButton *user_history_button;
    QPushButton *user_data_button;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *admin_window)
    {
        if (admin_window->objectName().isEmpty())
            admin_window->setObjectName(QString::fromUtf8("admin_window"));
        admin_window->resize(800, 600);
        centralwidget = new QWidget(admin_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        adduser_button = new QPushButton(centralwidget);
        adduser_button->setObjectName(QString::fromUtf8("adduser_button"));
        adduser_button->setGeometry(QRect(60, 30, 141, 23));
        deleteuser_button = new QPushButton(centralwidget);
        deleteuser_button->setObjectName(QString::fromUtf8("deleteuser_button"));
        deleteuser_button->setGeometry(QRect(60, 60, 141, 23));
        transfer_button = new QPushButton(centralwidget);
        transfer_button->setObjectName(QString::fromUtf8("transfer_button"));
        transfer_button->setGeometry(QRect(60, 90, 141, 23));
        user_history_button = new QPushButton(centralwidget);
        user_history_button->setObjectName(QString::fromUtf8("user_history_button"));
        user_history_button->setGeometry(QRect(60, 120, 141, 23));
        user_data_button = new QPushButton(centralwidget);
        user_data_button->setObjectName(QString::fromUtf8("user_data_button"));
        user_data_button->setGeometry(QRect(60, 150, 141, 23));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 20, 75, 23));
        admin_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        admin_window->setMenuBar(menubar);
        statusbar = new QStatusBar(admin_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        admin_window->setStatusBar(statusbar);

        retranslateUi(admin_window);

        QMetaObject::connectSlotsByName(admin_window);
    } // setupUi

    void retranslateUi(QMainWindow *admin_window)
    {
        admin_window->setWindowTitle(QApplication::translate("admin_window", "MainWindow", nullptr));
        adduser_button->setText(QApplication::translate("admin_window", "Dodaj u\305\274ytkownika", nullptr));
        deleteuser_button->setText(QApplication::translate("admin_window", "Usu\305\204 uzytkownika", nullptr));
        transfer_button->setText(QApplication::translate("admin_window", "Wykonaj przelew", nullptr));
        user_history_button->setText(QApplication::translate("admin_window", "Operacje uzytkownika", nullptr));
        user_data_button->setText(QApplication::translate("admin_window", "Dane u\305\274ytkownika", nullptr));
        pushButton->setText(QApplication::translate("admin_window", "Wyloguj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_window: public Ui_admin_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_WINDOW_H
