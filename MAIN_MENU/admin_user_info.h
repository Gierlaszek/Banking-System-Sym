#ifndef ADMIN_USER_INFO_H
#define ADMIN_USER_INFO_H

#include <QDialog>

namespace Ui {
class admin_user_info;
}

class admin_user_info : public QDialog
{
    Q_OBJECT

public:
    explicit admin_user_info(QWidget *parent = nullptr);
    ~admin_user_info();

private slots:
    void on_close_button_clicked();

    void on_search_button_clicked();

private:
    Ui::admin_user_info *ui;
};

#endif // ADMIN_USER_INFO_H
