#include "transfer_history.h"
#include "ui_transfer_history.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QTableWidgetItem>
#include <QDebug>
#include <QMessageBox>

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
    QFile Current_User("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/Current_User.txt");
    Current_User.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream out(&Current_User);
    QString mail = out.readLine();
    Current_User.close();


    //WCZYTYWANIE DANYCH PRZELEWÓW
    QFile User_Account("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/User_Account.txt");
    User_Account.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&User_Account);
    QString transfer;
    QVector<QString> vec1;
    in.seek(0);
    while(!in.atEnd())
    {
        transfer = in.readLine();
        if(transfer.contains(mail) == true)
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


    ui->tableWidget->setRowCount(vec1.size() / 5);
    if(vec1.size() != 0)
    {
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
    else if(vec1.size() == 0)
    {
        QMessageBox :: warning(this,"Uwaga!","Brak danych do wczytania!", QMessageBox::Ok);
    }

}
