#include "admin_confirm_payment.h"
#include "ui_admin_confirm_payment.h"
#include<QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>
#include <QVector>


admin_confirm_payment::admin_confirm_payment(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_confirm_payment)
{
    ui->setupUi(this);
}

admin_confirm_payment::~admin_confirm_payment()
{
    delete ui;
}

void admin_confirm_payment::on_pushButton_clicked()
{
    close();
}

void admin_confirm_payment::on_pushButton_2_clicked()
{
    QFile Confirm_Payment("Confirm_Payment.txt");
    Confirm_Payment.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream in(&Confirm_Payment);
    QString mail, amount, text;
    while(!in.atEnd())
    {
        mail = in.readLine();
        if(mail != "")
        {
            amount = in.readLine();
            text = mail + "\n" + amount;
            break;
        }
    }

    Confirm_Payment.close();
    ui->textBrowser->setText(text);
}

void admin_confirm_payment::on_pushButton_3_clicked()
{
    QFile Confirm_Payment("Confirm_Payment.txt");
    Confirm_Payment.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream in(&Confirm_Payment);
    QString mail, amount;
    QVector<QString> vec1;

    while(!in.atEnd())
    {
        vec1 += in.readLine();
    }
    in.seek(0);
    while(!in.atEnd())
    {
        mail = in.readLine();
        if(mail.contains("@") == true)
        {
            amount = in.readLine();
            break;
        }
    }

    for(int i =0; i < vec1.size(); i++)
    {
        if(vec1[i] == mail)
        {
            vec1.erase(vec1.begin() + i, vec1.begin() + i + 3);
            break;
        }
    }
    in.flush();
    Confirm_Payment.close();

    Confirm_Payment.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream clear(&Confirm_Payment);
    for (int n = 0; n < vec1.size(); n++)
    {
        clear << "\n" << vec1[n];
    }
    Confirm_Payment.close();


    QFile User_Account("User_Account.txt");
    User_Account.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream out(&User_Account);
    QString user, money;
    QVector<QString> vec2;
    while(!out.atEnd())
    {
        vec2 += out.readLine();
    }
    out.seek(0);
    while(!out.atEnd())
    {
        user = out.readLine();
        if (user == mail)
        {
            money = out.readLine();
            float Money = money.toFloat();
            float Amount = amount.toFloat();
            Money += Amount;
            money = QString::number(Money);
            for(int i = 0; i < vec2.size(); i++)
            {
                if(vec2[i] == mail)
                {
                    vec2[i+1] = money;
                }
            }
            break;
        }
    }
    User_Account.close();

    User_Account.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream write(&User_Account);
    for(int i = 0; i < vec2.size(); i++)
    {
        write << vec2[i] << "\n";
    }

    User_Account.close();

}

void admin_confirm_payment::on_pushButton_4_clicked()
{
    QFile Confirm_Payment("Confirm_Payment.txt");
    Confirm_Payment.open(QIODevice::ReadWrite | QIODevice::Text);
    QTextStream in(&Confirm_Payment);
    QString mail, amount;
    QVector<QString> vec1;

    while(!in.atEnd())
    {
        vec1 += in.readLine();
    }
    in.seek(0);
    while(!in.atEnd())
    {
        mail = in.readLine();
        if(mail.contains("@") == true)
        {
            amount = in.readLine();
            break;
        }
    }

    for(int i = 0; i < vec1.size(); i++)
    {
        if(vec1[i] == mail)
        {
            vec1.erase(vec1.begin() + i, vec1.begin() + i + 3);
            break;
        }
    }
    in.flush();
    Confirm_Payment.close();

    Confirm_Payment.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream clear(&Confirm_Payment);
    for (int n = 0; n < vec1.size(); n++)
    {
        clear << "\n" << vec1[n];
    }
    Confirm_Payment.close();
}
