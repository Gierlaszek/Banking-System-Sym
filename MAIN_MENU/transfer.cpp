#include "transfer.h"
#include "ui_transfer.h"
#include "user_window.h"
#include <QString>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <QDebug>
#include <QVector>
#include <QLocale>
#include <QDate>


Transfer::Transfer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Transfer)
{
    ui->setupUi(this);
    QString data = QDate::currentDate().toString("dd-MM-yyyy");
    ui->textBrowser->setText(data);
}

Transfer::~Transfer()
{
    delete ui;
}

void Transfer::on_pushButton_Wyslij_clicked()
{
    QString data = QDate::currentDate().toString("dd-MM-yyyy");

    //OTWARCIE PLIKU Z AKTUALNYM UŻTYKOWNIKIEM
    QFile Current_User("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/Current_User.txt");
    Current_User.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream out(&Current_User);
    QString mail = out.readLine();
    QString password = out.readLine();
    Current_User.close();

    //OTWORZENIE PLIKU Z DANYMI KONTA UZYTKOWANIKA
    QFile User_Account("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/User_Account.txt");
    User_Account.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream in(&User_Account);
    QString user, money;
    while(!in.atEnd())
    {
        user = in.readLine();
        if(user.contains(mail) == true)
        {
            money = in.readLine();
        }
    }
    in.flush();
    User_Account.close();

    QString addressee, title, acc_num, amount, pass;
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
    else if(amount.toFloat() > money.toFloat())
    {
        QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Brak środków na koncie",QMessageBox::Ok);
    }
    else
    {
        check1 = true;
        float Money = money.toFloat();
        float Amount = amount.toFloat();
        Money -= Amount;
        money = QString::number(Money);
    }


    //OTWARCIE PLIKU Z DANYMI KONTA UZYTKOWNIKA
    if(check1 == true)
    {
        User_Account.open(QIODevice::ReadWrite | QIODevice::Text);
        QTextStream in(&User_Account);
        QVector<QString> vec1;
        QVector<QString> vec2;
        vec2 << addressee << title << acc_num << amount << data;
        while(!in.atEnd())
        {
            vec1 += in.readLine();
        }
        for(int i = 0; i<vec1.size(); i++)
        {
          if(vec1[i].contains(mail) == true)
          {
              vec1[i+1] = money;
              for(int n = 0; n < vec2.size(); n++)
              {
                  vec1.insert(i+2+n, vec2[n]);
              }
          }

        }
        User_Account.close();

        //WPISANIE DANYCH PRZELEWU DO PLIKU
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
            hide();
        user_window *User_window = new user_window();
            User_window->show();

    }

}

void Transfer::on_pushButton_back_clicked()
{
    QMessageBox :: StandardButton question = QMessageBox :: warning(this,"Potwierdź decyzję","Czy na pewno chcesz wyjść?",QMessageBox:: Yes | QMessageBox::No);
    if (question == QMessageBox::Yes)
        close();
    user_window *User_window = new user_window();
        User_window->show();


}
