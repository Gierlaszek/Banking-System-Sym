#include "admin_transfer_history.h"
#include "ui_admin_transfer_history.h"

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
