/********************************************************************************
** Form generated from reading UI file 'register_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_WINDOW_H
#define UI_REGISTER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_REGISTER_WINDOW
{
public:
    QWidget *centralwidget;
    QPushButton *createAccButton;
    QCheckBox *checkBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *exitButton;
    QPushButton *backButton;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *REGISTER_WINDOW)
    {
        if (REGISTER_WINDOW->objectName().isEmpty())
            REGISTER_WINDOW->setObjectName(QString::fromUtf8("REGISTER_WINDOW"));
        REGISTER_WINDOW->resize(800, 600);
        centralwidget = new QWidget(REGISTER_WINDOW);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        createAccButton = new QPushButton(centralwidget);
        createAccButton->setObjectName(QString::fromUtf8("createAccButton"));
        createAccButton->setGeometry(QRect(510, 280, 75, 23));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(350, 310, 391, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 47, 13));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 47, 13));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 150, 47, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 190, 47, 13));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 230, 47, 13));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 270, 47, 13));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 300, 47, 13));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(234, 10, 171, 23));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(230, 40, 181, 23));
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(140, 80, 113, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 110, 113, 20));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(140, 140, 113, 20));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(140, 180, 113, 20));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(140, 220, 113, 20));
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 260, 113, 20));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(140, 290, 113, 20));
        lineEdit_7->setEchoMode(QLineEdit::Password);
        REGISTER_WINDOW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(REGISTER_WINDOW);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        REGISTER_WINDOW->setMenuBar(menubar);
        statusbar = new QStatusBar(REGISTER_WINDOW);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        REGISTER_WINDOW->setStatusBar(statusbar);

        retranslateUi(REGISTER_WINDOW);

        QMetaObject::connectSlotsByName(REGISTER_WINDOW);
    } // setupUi

    void retranslateUi(QMainWindow *REGISTER_WINDOW)
    {
        REGISTER_WINDOW->setWindowTitle(QApplication::translate("REGISTER_WINDOW", "MainWindow", nullptr));
        createAccButton->setText(QApplication::translate("REGISTER_WINDOW", "Za\305\202\303\263\305\274 konto", nullptr));
        checkBox->setText(QApplication::translate("REGISTER_WINDOW", "Akceptuj\304\231 regulamin i zgadzam si\304\231 z warunkami polityki prywatno\305\233ci", nullptr));
        label->setText(QApplication::translate("REGISTER_WINDOW", "Imie", nullptr));
        label_2->setText(QApplication::translate("REGISTER_WINDOW", "Nazwisko", nullptr));
        label_3->setText(QApplication::translate("REGISTER_WINDOW", "Adres", nullptr));
        label_4->setText(QApplication::translate("REGISTER_WINDOW", "mail", nullptr));
        label_5->setText(QApplication::translate("REGISTER_WINDOW", "nr. tel", nullptr));
        label_6->setText(QApplication::translate("REGISTER_WINDOW", "Haslo", nullptr));
        label_7->setText(QApplication::translate("REGISTER_WINDOW", "potwierdz haslo", nullptr));
        exitButton->setText(QApplication::translate("REGISTER_WINDOW", "Wyjd\305\272 z programu", nullptr));
        backButton->setText(QApplication::translate("REGISTER_WINDOW", "Powr\303\263t do ekranu g\305\202\303\263wnego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class REGISTER_WINDOW: public Ui_REGISTER_WINDOW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_WINDOW_H
