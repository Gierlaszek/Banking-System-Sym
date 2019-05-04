#include "admin_transfer_history.h"
#include "ui_admin_transfer_history.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QIODevice>
#include <QMessageBox>
#include <QVector>
#include <QDebug>

admin_transfer_history::admin_transfer_history(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_transfer_history)
{
    ui->setupUi(this);
}

admin_transfer_history::~admin_transfer_history()
{
    delete ui;
}

void admin_transfer_history::on_pushButton_2_clicked()
{
    close ();
}

void admin_transfer_history::on_pushButton_clicked()
{
    QString mail = ui->lineEdit->text();
    QFile User_Account("User_Account.txt");
    User_Account.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&User_Account);
    QString transfer;
    QVector<QString> vec1;
    if (mail=="")    {ui->tableWidget->clear(); QMessageBox ::  warning(this,"UWAGA","Proszę podać nazwę uzytkownika!",QMessageBox::Ok);}

    else {
    while(!in.atEnd())
    {
        transfer = in.readLine();
        if(transfer.contains(mail) == true)
        {
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
    int n = 0;
    if(vec1.size() != 0)
    {
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
        QMessageBox :: warning(this,"Uwaga","Brak danych do wyświetlenia!",QMessageBox::Ok);
    }

}
}
