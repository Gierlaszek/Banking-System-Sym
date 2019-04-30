#include "transfer.h"
#include "ui_transfer.h"
#include <QString>
#include <QTextStream>
#include<QFile>
#include <QMessageBox>
#include <QDebug>
#include <QVector>


Transfer::Transfer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Transfer)
{
    ui->setupUi(this);
}

Transfer::~Transfer()
{
    delete ui;
}

void Transfer::on_pushButton_Wyslij_clicked()
{
    //Zrobic date przelewu!!!

    //OTWARCIE PLIKU Z AKTUALNYM UŻTYKOWNIKIEM
    QFile Current_User("Current_User.txt");
    Current_User.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream out(&Current_User);
    QString mail = out.readLine();
    QString password = out.readLine();
    Current_User.close();

    QString addressee, title, acc_num, amount, data, pass;
    addressee = ui->lineEdit_odiorca->text();
    title = ui->lineEdit_tytul->text();
    acc_num = ui->lineEdit_konto->text();
    amount = ui->lineEdit_kwota->text();
    pass = ui->lineEdit_potwierdzenie->text();

    bool check1 = false;

    //POTWIERDZENIE DANYCH PRZELEWU
    if(addressee == "" || title == "" || acc_num == "" || amount == "")
    {
        QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Proszę wypełnić wszystkie pola!",QMessageBox::Ok);
    }
    else if(pass != password)
    {
        QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Nieprawidłowe hasło",QMessageBox::Ok);
    }
    else
    {
        check1 = true;
    }


    //OTWARCIE PLIKU Z DANYMI KONTA UZYTKOWNIKA
    if(check1 == true)
    {
        QFile User_Account("User_Account.txt");
        User_Account.open(QIODevice::ReadWrite | QIODevice::Text);
        QTextStream in(&User_Account);
        QString user;
        QVector<QString> vec1;
        QVector<QString> vec2;
        vec2 << addressee << title << acc_num << amount;
        while(!in.atEnd())
        {
            vec1 += in.readLine();
        }
        for(int i = 0; i<vec1.size(); i++)
        {
          if(vec1[i] == mail)
          {
              for(int n = 0; n < vec2.size(); n++)
              {
                  vec1.insert(i+2+n, vec2[n]);
              }
          }

        }
        User_Account.close();

        //WPISANIE DANYCH PRZELEWU
        User_Account.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out(&User_Account);
        for(int i = 0; i < vec1.size(); i++)
        {
            out << vec1[i] << "\n";
        }

        User_Account.close();



    }

    //INFORMACJA O ZAKONCZENIU PRZELEWU
    if (check1==true)
    {
        QMessageBox :: StandardButton info1 = QMessageBox::information(this,"SUKCES!","Przelew został wysłany.",QMessageBox::Ok);
        if (info1 == QMessageBox::Ok)
//            close();
            hide();
    }

}

void Transfer::on_pushButton_back_clicked()
{
    QMessageBox :: StandardButton question = QMessageBox :: warning(this,"Potwierdź decyzję","Czy na pewno chcesz wyjść?",QMessageBox:: Yes | QMessageBox::No);
    if (question == QMessageBox::Yes)
        close();


}
