/********************************************************************************
** Form generated from reading UI file 'admin_user_history.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_USER_HISTORY_H
#define UI_ADMIN_USER_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_user_history
{
public:
    QTableWidget *tableWidget;
    QPushButton *close;
    QPushButton *check_history;
    QLineEdit *user_mail;

    void setupUi(QDialog *admin_user_history)
    {
        if (admin_user_history->objectName().isEmpty())
            admin_user_history->setObjectName(QString::fromUtf8("admin_user_history"));
        admin_user_history->resize(530, 300);
        tableWidget = new QTableWidget(admin_user_history);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 120, 521, 171));
        close = new QPushButton(admin_user_history);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(20, 10, 75, 23));
        check_history = new QPushButton(admin_user_history);
        check_history->setObjectName(QString::fromUtf8("check_history"));
        check_history->setGeometry(QRect(390, 10, 91, 23));
        user_mail = new QLineEdit(admin_user_history);
        user_mail->setObjectName(QString::fromUtf8("user_mail"));
        user_mail->setGeometry(QRect(160, 10, 113, 20));

        retranslateUi(admin_user_history);

        QMetaObject::connectSlotsByName(admin_user_history);
    } // setupUi

    void retranslateUi(QDialog *admin_user_history)
    {
        admin_user_history->setWindowTitle(QApplication::translate("admin_user_history", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("admin_user_history", "Odbiorca", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("admin_user_history", "Tytu\305\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("admin_user_history", "Numer Konta", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("admin_user_history", "Kwota", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("admin_user_history", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("admin_user_history", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("admin_user_history", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("admin_user_history", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("admin_user_history", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("admin_user_history", "5", nullptr));
        close->setText(QApplication::translate("admin_user_history", "PushButton", nullptr));
        check_history->setText(QApplication::translate("admin_user_history", "Pokaz historie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_user_history: public Ui_admin_user_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_USER_HISTORY_H
