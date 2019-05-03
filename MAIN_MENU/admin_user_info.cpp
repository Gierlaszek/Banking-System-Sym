#include "admin_user_info.h"
#include "ui_admin_user_info.h"
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QTextStream>

admin_user_info::admin_user_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_user_info)
{
    ui->setupUi(this);
}

admin_user_info::~admin_user_info()
{
    delete ui;
}

void admin_user_info::on_close_button_clicked()
{
    close();
}


void admin_user_info::on_search_button_clicked()
{

    QString email = ui ->lineEdit->text();
           // Otwieranie Database'a, szukanie maila i sprawdzanie, czy saldo wynosi 0
               QFile Database ("/Users/kamil/Desktop/bank_nowy/Debug-Kamil/Database.txt");
               Database.open (QIODevice :: ReadWrite);
               QTextStream data(&Database);
               QString content = data.readAll();
               QString content_1 = "";
               QString reading;


               if (email=="")
               {
                   QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Proszę podać nazwę uzytkownika!",QMessageBox::Ok);
               }
               else if(email.contains("@")==false || email.contains(".")==false)
               {
                   QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Proszę podać prawidłowy E-mail!",QMessageBox::Ok);
               }
               else if(content.contains(email)==false)
               {
                   QMessageBox :: StandardButton warning1 = QMessageBox :: warning(this,"UWAGA","Nie znaleziono użytkownika!",QMessageBox::Ok);
               }
               else
               {
                   int start = content.indexOf(email);
                   int money_position=content.indexOf(QRegExp("\\d{16}"),start)+18;
                   content_1 = content[money_position];
                   for (int i = start; i <=money_position; ++i) {content_1.append(content[i]);}
                   content_1.replace(0,1,"");
                   ui->textBrowser->setText(content_1);
                }
   }
