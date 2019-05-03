#include "payment.h"
#include "ui_payment.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


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
    QMessageBox :: StandardButton info1 = QMessageBox::information(this,"SUKCES!","Zapytanie zostało wysłane do Admina.",QMessageBox::Ok);
    }
    else
    {
        QMessageBox :: StandardButton info1 = QMessageBox::information(this,"SUKCES!","Niepoprawne hasło.",QMessageBox::Ok);
    }

    close();

}
