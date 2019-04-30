#ifndef ADMIN_ACC_DELETE_H
#define ADMIN_ACC_DELETE_H

#include <QDialog>

namespace Ui {
class admin_acc_delete;
}

class admin_acc_delete : public QDialog
{
    Q_OBJECT

public:
    explicit admin_acc_delete(QWidget *parent = nullptr);
    ~admin_acc_delete();

private slots:

    void on_del_button_clicked();

    void on_close_button_clicked();

private:
    Ui::admin_acc_delete *ui;
};

#endif // ADMIN_ACC_DELETE_H
