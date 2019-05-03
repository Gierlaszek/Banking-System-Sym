#include "login_window.h"
#include "ui_login_window.h"
#include "mainwindow.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

login_window::login_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login_window)
{
    ui->setupUi(this);
}

login_window::~login_window()
{
    delete ui;
}

void login_window::on_backButton_clicked()
{
    close();
}

void login_window::on_loginButton_clicked()
{

    QString password, mail;
    mail = ui->lineEdit_mail->text();
    password = ui->lineEdit_password->text();

    //ZAPISANIE AKTUALNEGO UZYTKOWNIKA
    QFile Current_User("Current_User.txt");
    Current_User.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&Current_User);
    out << mail;
    out << "\n" << password;
    Current_User.close();

    //OTWIERANIE PLIKU
    QFile Database("Database.txt");
    Database.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&Database);
    QString us, user;

    //LOGOWANIE DO SYSTEMU JAKO UZYTKOWNIK I ADMIN
    while(!in.atEnd())
    {
        us = in.readLine();
        if(us == mail && us != "Admin")
        {
            for(int i=0; i < 5; i++)
            {
                user = in.readLine();
            }
                if(user.size() == password.length() && user == password)
                {
                   ui->statusbar->showMessage("Sukces. Zalogowano się poprawnie.");
                   user_window = new class user_window(this);
                   user_window->show();
                   close();
                }

        }
        else if(us == "Admin")
        {
            user = in.readLine();
            if(user.size() == password.length() && user == "Admin1")
            {
                ui->statusbar->showMessage("Sukces. Zalogowano jako admin.");
                admin_window = new class admin_window(this);
                admin_window->show();
                close();
            }
        }
        else if((!us.contains(mail) || !us.contains(password)) && (mail!="Admin" || password!="Admin1"))
        {
            QMessageBox :: warning(this,"UWAGA","logowanie nie powiodlo sie. Zly login lub haslo.", QMessageBox::Ok);
            break;
        }
    }
    Database.close();
}


