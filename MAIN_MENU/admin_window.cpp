#include "admin_window.h"
#include "ui_admin_window.h"
#include "register_window.h"
#include "admin_acc_delete.h"
#include <QMessageBox>

admin_window::admin_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_window)
{
    ui->setupUi(this);
}

admin_window::~admin_window()
{
    delete ui;
}

void admin_window::on_adduser_button_clicked()
{
    REGISTER_WINDOW = new class REGISTER_WINDOW (this);
    REGISTER_WINDOW -> show();
}

void admin_window::on_deleteuser_button_clicked()
{
    ADMIN_ACC_DELETE = new class admin_acc_delete(this);
    ADMIN_ACC_DELETE -> show();
}

void admin_window::on_user_data_button_clicked()
{
    ADMIN_USER_INFO = new class admin_user_info(this);
    ADMIN_USER_INFO -> show();

}

void admin_window::on_pushButton_clicked()
{
    QMessageBox :: StandardButton question = QMessageBox :: warning(this,"Potwierdź decyzję","Czy na pewno chcesz się wylogować?",QMessageBox:: Yes | QMessageBox::No);
    if (question==QMessageBox::Yes)
        close();

    close();
}

void admin_window::on_transfer_button_clicked()
{
    ADMIN_CONFIRM_PAYMENT = new class admin_confirm_payment(this);
    ADMIN_CONFIRM_PAYMENT->show();
}

void admin_window::on_user_history_button_clicked()
{
    ADMIN_HISTORY = new class admin_history(this);
    ADMIN_HISTORY->show();
}
