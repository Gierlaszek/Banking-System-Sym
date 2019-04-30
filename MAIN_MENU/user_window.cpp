#include "user_window.h"
#include "ui_user_window.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>

user_window::user_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::user_window)
{
    ui->setupUi(this);

    QFile Database("/Users/kamil/Desktop/Bank-JP/build-MAIN_MENU-Desktop_Qt_5_5_1_clang_64bit-Debug/Database.txt");
    Database.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream in(&Database);
    QString User, name;
    //nie dziala narazie, zaiportowac mail z innego pliku
//    while(!in.atEnd())
//    {
//        User = in.readLine();
//        if(User == mail)
//        {
//            for(int i = 0; i < 2; i++)
//            {
//                name = in.readLine();
//                ui->textBrowser->append(name);
//            }
//        }
//    }

    ui->textBrowser_2->setText("Numer konta");
    ui->textBrowser_3->setText("Stan konta");
    Database.close();
}

user_window::~user_window()
{
    delete ui;
}

void user_window::on_pushButton_3_clicked()
{
    QMessageBox :: StandardButton question = QMessageBox :: warning(this,"Potwierdź decyzję","Czy na pewno chcesz wyjść?",QMessageBox:: Yes | QMessageBox::No);
    if (question==QMessageBox::Yes)
        close();

}
