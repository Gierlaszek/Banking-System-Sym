#include "admin_window.h"
#include "ui_admin_window.h"
#include "register_window.h"
#include "admin_acc_delete.h"

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
    close();
}

void admin_window::on_transfer_button_clicked()
{
    ADMIN_CONFIRM_PAYMENT = new class admin_confirm_payment(this);
    ADMIN_CONFIRM_PAYMENT->show();
}

void admin_window::on_user_history_button_clicked()
{
    ADMIN_TRANSFER_HISTORY = new class admin_transfer_history(this);
    ADMIN_TRANSFER_HISTORY->show();
}
