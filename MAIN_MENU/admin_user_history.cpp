#include "admin_user_history.h"
#include "ui_admin_user_history.h"
#include <QString>
#include <QFile>
#include<QTextStream>
#include<QMessageBox>
#include <QIODevice>

admin_user_history::admin_user_history(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_user_history)
{
    ui->setupUi(this);
}

admin_user_history::~admin_user_history()
{
    delete ui;
}

void admin_user_history::on_close_clicked()
{
    close();
}

void admin_user_history::on_check_history_clicked()
{
    QString user_mail = ui ->check_history->text();
    QFile user_acc ("User_Acoount.txt");
    user_acc.open(QIODevice :: ReadWrite);
    QTextStream user_data(&user_acc);
    QString content=user_data.readAll();
    int start = content.indexOf("Mail:"+user_mail);
    int marker = content.indexOf("Mail:",start+1);
    int end = marker-start;


}
