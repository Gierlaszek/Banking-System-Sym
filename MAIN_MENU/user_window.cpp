#include "user_window.h"
#include "ui_user_window.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>
#include "login_window.h"
#include <QDebug>

user_window::user_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_window)
{
    ui->setupUi(this);

    //OTWARCIE PLIKU Z AKTUALNYM UŻTYKOWNIKIEM
    QFile Current_User("Current_User.txt");
    Current_User.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream out(&Current_User);
    QString mail = out.readLine();
    Current_User.close();

    //OTWaARCIE PLIKU Z DANYMI KONTA UZYTKOWNIKA
    QFile User_Account("User_Account.txt");
    User_Account.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream acc_user(&User_Account);
    QString ballance, User;
    while(!acc_user.atEnd())
    {
        User = acc_user.readLine();
        if(User == mail)
        {
            ballance = acc_user.readLine();
            ballance += " PLN";
        }
    }
    User.clear();
    User_Account.close();

    //OTWARCIE PLIKU Z BAZA DANYCH
    QFile Database("Database.txt");
    Database.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&Database);
    QString name, acc_num;

    while(!in.atEnd())
    {
        User = in.readLine();
        if(User == mail)
        {
            for(int i = 0; i < 2; i++)
            {
                name += in.readLine();
                name += " ";
            }
            for(int i = 0; i < 4; i++)
            {
                acc_num = in.readLine();
            }
        }
    }

    ui->textBrowser->append(name);
    ui->textBrowser_2->setText(acc_num);
    ui->textBrowser_3->setText(ballance);
    Database.close();
}

user_window::~user_window()
{
    delete ui;
}

void user_window::on_pushButton_back_clicked()
{
    QMessageBox :: StandardButton question = QMessageBox :: warning(this,"Potwierdź decyzję","Czy na pewno chcesz wyjść?",QMessageBox:: Yes | QMessageBox::No);
    if (question==QMessageBox::Yes)
        close();

}

void user_window::on_pushButton_new_transfer_clicked()
{
    transfer = new Transfer(this);
    transfer->show();
    hide();
}

void user_window::on_pushButton_history_clicked()
{
    Transfer_history = new class transfer_history(this);
    Transfer_history->show();
}

void user_window::on_pushButton_payment_clicked()
{
    Payment = new payment(this);
    Payment->show();

}
