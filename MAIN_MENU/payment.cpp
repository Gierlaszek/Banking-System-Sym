#include "payment.h"
#include "ui_payment.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>


payment::payment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::payment)
{
    ui->setupUi(this);
}

payment::~payment()
{
    delete ui;
}

void payment::on_pushButton_back_clicked()
{
    close();
}

void payment::on_pushButton_clicked()
{
    QString money = ui->lineEdit_pay->text();
    QString pass = ui->lineEdit_confirm->text();
    bool check1 = false;

    if(money != "")
    {
        QString alfabet = "abcdefghijklmnoprstuwxyzABCDEFGHIJKLMNOPRSTUWXYZ";
        for(int i = 0; i < money.length(); i++)
        {
            if(alfabet.contains(money[i]))
            {
                QMessageBox ::  warning(this,"UWAGA","Nieprawdiłowa liczba!",QMessageBox::Ok);
                break;
            }
            check1 = true;
        }
    }
    else if(money == "")
    {
        QMessageBox ::  warning(this,"UWAGA","Nieprawdiłowa liczba!",QMessageBox::Ok);
    }


    if(check1 == true)
    {
        //OTWORZENIE PLIKU Z AKTUALNYM UŻTYKOWNIKIEM
        QFile Current_User("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/Current_User.txt");
        Current_User.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream out(&Current_User);
        QString mail = out.readLine();
        QString password = out.readLine();
        Current_User.close();

        //OTWORZENIE PLIKU Z POTWIERDZENIEM WPLATY
        if(pass == password)
        {
            QFile Confirm_Payment("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/Confirm_Payment.txt");
            Confirm_Payment.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append);
            QTextStream in(&Confirm_Payment);
            in << mail;
            in << "\n" << money << "\n" << "\n";
            Confirm_Payment.close();
            QMessageBox :: information(this,"SUKCES!","Zapytanie zostało wysłane do Admina.",QMessageBox::Ok);
        }
        else
        {
            QMessageBox :: information(this,"UWAGA!","Niepoprawne hasło.",QMessageBox::Ok);
        }

        close();
    }

}
