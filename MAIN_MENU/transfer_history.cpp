#include "transfer_history.h"
#include "ui_transfer_history.h"
#include <QFile>
#include <QString>
#include <QTextStream>

transfer_history::transfer_history(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::transfer_history)
{
    ui->setupUi(this);
}

transfer_history::~transfer_history()
{
    delete ui;
}

void transfer_history::on_pushButton_clicked()
{
    close();
}

void transfer_history::on_pushButton_history_clicked()
{
    //AKTUALNY UŻYTKOWNIK
    QFile Current_User("Current_User.txt");
    Current_User.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream out(&Current_User);
    QString mail = out.readLine();
    Current_User.close();


    //WCZYTYWANIE DANYCH PRZELEWÓW
    QFile User_Account("User_Account.txt");
    User_Account.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&User_Account);
    QString n;
    QVector<QString> vec1;
    while(!in.atEnd())
    {
        n = in.readLine();
        if(n == mail)
        {
            vec1.push_back(in.readLine());
        }
    }

}
