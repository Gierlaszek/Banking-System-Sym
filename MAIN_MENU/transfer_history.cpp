#include "transfer_history.h"
#include "ui_transfer_history.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QTableWidgetItem>
#include <QDebug>

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
    QString transfer;
    QVector<QString> vec1;
    while(!in.atEnd())
    {
        transfer = in.readLine();
        if(transfer == mail)
        {
            qDebug() << transfer;
            in.readLine();
            while(1)
            {
                QString linia = in.readLine();
                if(linia.contains("@") == true)
                {
                    break;
                }
                else
                {
                    vec1.push_back(linia);
                }
            }
        }
    }


    int n = 0;
    for(int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        for(int j = 0; j < ui->tableWidget->columnCount(); j++)
        {
            QTableWidgetItem *cell = ui->tableWidget->item(i,j);
            if(!cell)
            {
                cell = new QTableWidgetItem;
                ui->tableWidget->setItem(i, j, cell);
            }
            cell->setText(vec1[n]);
            n++;
            if(n == vec1.size())
                break;


        }
        if(n == vec1.size())
            break;
    }

}
