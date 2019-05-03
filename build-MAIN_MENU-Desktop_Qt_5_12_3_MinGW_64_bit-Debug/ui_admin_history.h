/********************************************************************************
** Form generated from reading UI file 'admin_history.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_HISTORY_H
#define UI_ADMIN_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_admin_history
{
public:
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget;

    void setupUi(QDialog *admin_history)
    {
        if (admin_history->objectName().isEmpty())
            admin_history->setObjectName(QString::fromUtf8("admin_history"));
        admin_history->resize(664, 300);
        lineEdit = new QLineEdit(admin_history);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 50, 113, 20));
        textBrowser = new QTextBrowser(admin_history);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 100, 256, 192));
        label = new QLabel(admin_history);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 47, 13));
        pushButton = new QPushButton(admin_history);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 75, 23));
        pushButton_2 = new QPushButton(admin_history);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 70, 75, 23));
        listWidget = new QListWidget(admin_history);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(370, 90, 256, 192));

        retranslateUi(admin_history);

        QMetaObject::connectSlotsByName(admin_history);
    } // setupUi

    void retranslateUi(QDialog *admin_history)
    {
        admin_history->setWindowTitle(QApplication::translate("admin_history", "Dialog", nullptr));
        label->setText(QApplication::translate("admin_history", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("admin_history", "Wyloguj", nullptr));
        pushButton_2->setText(QApplication::translate("admin_history", "Poka\305\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_history: public Ui_admin_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_HISTORY_H
