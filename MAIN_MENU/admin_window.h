#ifndef ADMIN_WINDOW_H
#define ADMIN_WINDOW_H

#include <QMainWindow>
#include <register_window.h>
#include <admin_acc_delete.h>
#include<admin_user_info.h>

namespace Ui {
class admin_window;
}

class admin_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_window(QWidget *parent = 0);
    ~admin_window();

private slots:
    void on_adduser_button_clicked();

    void on_deleteuser_button_clicked();

    void on_user_data_button_clicked();

    void on_pushButton_clicked();

private:
    Ui::admin_window *ui;
    REGISTER_WINDOW *REGISTER_WINDOW;
    admin_acc_delete *ADMIN_ACC_DELETE;
    admin_user_info *ADMIN_USER_INFO;
};

#endif // ADMIN_WINDOW_H
