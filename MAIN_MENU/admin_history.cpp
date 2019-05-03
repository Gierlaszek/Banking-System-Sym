#include "admin_history.h"
#include "ui_admin_history.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QIODevice>
#include <QMessageBox>
#include <QVector>
#include <QDebug>

admin_history::admin_history(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_history)
{
    ui->setupUi(this);
}

admin_history::~admin_history()
{
    delete ui;
}


void admin_history::on_pushButton_clicked()
{
    close ();
}

void admin_history::on_pushButton_2_clicked()
{

    QString user_mail = ui->lineEdit->text();
    QFile user_acc("User_Account.txt");
    user_acc.open(QIODevice::ReadWrite);
    QTextStream user_data(&user_acc);
    QString content = user_data.readAll();
    QString reading = "";
    int start = {};
    int marker = {};

    if (user_mail=="")
    {
        QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Proszę podać nazwę uzytkownika!",QMessageBox::Ok);
    }
    else if(user_mail.contains("@")==false || user_mail.contains(".")==false)
    {
        QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Proszę podać prawidłowy E-mail!",QMessageBox::Ok);
    }
    else if(content.contains(user_mail)==false)
    {
        QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Nie znaleziono użytkownika!",QMessageBox::Ok);
    }
    else {
        start = content.indexOf("Mail:"+user_mail);
        marker = content.indexOf("Mail:",start+1);
        if (marker==-1){for (int i=start;i<=content.length();i++) {reading.append(content[i]);}}
        else {for (int i=start;i<marker;i++) {reading.append(content[i]);}}
         }
        reading.remove(0,user_mail.size()+8);
        ui->textBrowser->setText(reading);
        user_acc.close();
    }


