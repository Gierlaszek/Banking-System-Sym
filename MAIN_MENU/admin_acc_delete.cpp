#include "admin_acc_delete.h"
#include "ui_admin_acc_delete.h"
#include <QString>
#include <QFile>
#include <QtDebug>
#include <QMessageBox>
#include <QTextStream>
#include <QRegularExpression>

admin_acc_delete::admin_acc_delete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin_acc_delete)
{
    ui->setupUi(this);
}

admin_acc_delete::~admin_acc_delete()
{
    delete ui;
}



void admin_acc_delete::on_del_button_clicked()
{
    QString user_mail = ui ->user_mail->text();
    QString pass_confirm = ui -> pass_confirm -> text();



// Otwieranie Database'a, szukanie maila i sprawdzanie, czy saldo wynosi 0
    QFile Database ("Database.txt");
    Database.open (QIODevice :: ReadWrite);
    QTextStream data(&Database);
    QString content = data.readAll();


    int money_position=content.indexOf(QRegExp("\\d{16}"),content.indexOf(user_mail))+18;
    if (user_mail=="")
    {
        QMessageBox ::QMessageBox :: warning(this,"UWAGA","Proszę podać nazwę uzytkownika!",QMessageBox::Ok);
    }
    else if(user_mail.contains("@")==false || user_mail.contains(".")==false)
    {
        QMessageBox ::QMessageBox :: warning(this,"UWAGA","Proszę podać prawidłowy E-mail!",QMessageBox::Ok);
    }
    else if(content.contains(user_mail)==false)
    {
        QMessageBox ::QMessageBox :: warning(this,"UWAGA","Nie znaleziono użytkownika!",QMessageBox::Ok);
    }
    else if (content[money_position]!='0') {
        QMessageBox ::QMessageBox :: warning(this,"UWAGA","Saldo nie wynosi 0!",QMessageBox::Ok);
    }
    else if (pass_confirm!="Admin1") {
        QMessageBox ::QMessageBox :: warning(this,"UWAGA","Nieprawidłowe hasło!",QMessageBox::Ok);

    }
    else {
        // kasowanie użytkownika z bazy danych
        int start = content.indexOf(user_mail);
        int marker = content.indexOf(QRegExp("\\d{16}"),start);
        int end = marker-start+21;
        content=content.remove(start,end);
        Database.remove();
        Database.close();
        Database.open(QIODevice :: WriteOnly);
        QTextStream data(&Database);
        data << content;
        Database.close();


        //kasowanie uzytkownika z historii przelewów
        QFile user_acc("User_Account.txt");
        user_acc.open(QIODevice::ReadWrite);
        QTextStream user_data(&user_acc);
        content.clear();
        content = user_data.readAll();
        start = content.indexOf("Mail:"+user_mail);
        marker = content.indexOf("Mail:",start+1);
        end = marker-start;
        if (marker!=-1) {content.remove(start,end);}
        else if (marker==-1) {content.remove(start,content.length()-start);}
        user_acc.remove();
        user_acc.close();
        user_acc.open(QIODevice::WriteOnly);
        user_data << content;

        QMessageBox ::QMessageBox :: information(this,"SUKCES","Pomyślnie usunięto uzytkownika",QMessageBox::Ok);

    }


    }

void admin_acc_delete::on_close_button_clicked()
{
    close();
}

