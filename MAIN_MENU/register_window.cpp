#include "register_window.h"
#include "ui_register_window.h"
#include <QMessageBox>
#include "mainwindow.h"
#include <QString>
#include <QDebug>
#include <QFile>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <QRegExp>
REGISTER_WINDOW::REGISTER_WINDOW(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::REGISTER_WINDOW)
{
    ui->setupUi(this);
}

REGISTER_WINDOW::~REGISTER_WINDOW()
{
    delete ui;
}

void REGISTER_WINDOW::on_exitButton_clicked()
{
    QMessageBox :: StandardButton question = QMessageBox :: warning(this,"Potwierdź decyzję","Czy na pewno chcesz wyjść?",QMessageBox:: Yes | QMessageBox::No);
    if (question==QMessageBox::Yes)

        QApplication::quit();
}

void REGISTER_WINDOW::on_backButton_clicked()
{
    close();

}

void REGISTER_WINDOW::on_createAccButton_clicked()
{
    QString name = ui -> lineEdit_1->text();
    QString surname = ui -> lineEdit_2->text();
    QString adress = ui -> lineEdit_3->text();
    QString mail = ui -> lineEdit_4->text();
    QString phone = ui -> lineEdit_5->text();
    QString password = ui -> lineEdit_6->text();
    QString confirm = ui -> lineEdit_7->text();
    QString acc_number;
    bool check1=false;
    bool check2=false;


    // POPRAWNOŚĆ DANYCH


    if (name == "" || surname == "" || adress == "" || mail == "" ||phone == "" ||password == "" ||confirm == "")
    {
        QMessageBox ::  warning(this,"UWAGA","Proszę wypełnić wszystkie pola!",QMessageBox::Ok);
    }
    else if (password!=confirm)
    {
        QMessageBox ::  warning(this,"UWAGA","Proszę podać prawidłowy adres E-mail!",QMessageBox::Ok);
    }
    else if (ui->checkBox->checkState()==false)
    {
        QMessageBox ::  warning(this,"UWAGA","Proszę zaakceptować politykę prywatności!",QMessageBox::Ok);
    }
    else if (mail.contains("@")==false || mail.contains( ".")==false )
    {
        QMessageBox ::  warning(this,"UWAGA","Proszę podać prawidłowy adres E-mail!",QMessageBox::Ok);
    }
    else if(phone.length() != 9 || phone.contains(QRegExp("\\D")))
    {
        QMessageBox ::  warning(this,"UWAGA","Proszę podać prawidłowy numer telefonu!",QMessageBox::Ok);
    }
    else if (name.contains(QRegExp ("\\d")) || surname.contains(QRegExp("\\d")))
    {
        QMessageBox ::  warning(this,"UWAGA","Proszę podać prawidłowe imię i nazwisko!",QMessageBox::Ok);
    }
    else {
        check1=true;
    }

    //SZUKANIE IDENTYCZNEGO KONTA
    QFile User_Account("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/User_Account.txt");
    User_Account.open(QIODevice::ReadWrite | QIODevice::Text |QIODevice::Append);
    QTextStream out(&User_Account);
    QString content_user_acc = out.readAll();
    QFile Database("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/Database.txt");
    Database.open(QIODevice::ReadWrite);
    QTextStream data(&Database);
    qDebug();
    const QString content1 = data.readAll();
    if(((content1.contains(mail) && mail!="")||(content_user_acc.contains(mail)&&mail!=""))&&check1==true)
    {
        QMessageBox ::  warning(this,"UWAGA","Podany adres E-mail jest już używany!",QMessageBox::Ok);
    }
    else
    {
        check2=true;
    }
    Database.close();

    // GENEROWANIE NUMERU KONTA
  if (check1==true &&check2==true)
  {
        for (int n=0;n<16;n++)
        {
        int p = rand()%10;
        QString acc = QString::number(p);
        acc_number.append(acc);
        }
    }

    // ZAPIS KONTA DO BAZY DANYCH
    if (check1==true &&check2==true)
    {
     Database.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append);
    qDebug();
    data << "\n" << mail << "\n";
    data << name << "\n";
    data << surname<< "\n";
    data << adress << "\n";
    data << phone<< "\n";
    data << password << "\n";
    data << acc_number << "\n";
    Database.close();
    }

    //UTWORZENIE DANYCH PRZELEWOW UZYTKOWNIKA

    if (check1 == true && check2 == true)
    {
        out <<"Mail:" + mail << "\n";
        out << "0"<<"\n";
        out << "@";
    }

    User_Account.close();

    //INFORMACJA O ZAREJESTROWANIU
    if (check1==true &&check2==true)
    {
        QMessageBox :: StandardButton info1 = QMessageBox::information(this,"SUKCES!","Rejestracja zakończona pomyślnie!",QMessageBox::Ok);
        if (info1 == QMessageBox::Ok)
            close();
    }



}
