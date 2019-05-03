#ifndef ADMIN_USER_HISTORY_H
#define ADMIN_USER_HISTORY_H

#include <QDialog>

namespace Ui {
class admin_user_history;
}

class admin_user_history : public QDialog
{
    Q_OBJECT

public:
    explicit admin_user_history(QWidget *parent = nullptr);
    ~admin_user_history();

private slots:
    void on_close_clicked();

    void on_check_history_clicked();

private:
    Ui::admin_user_history *ui;
};

#endif // ADMIN_USER_HISTORY_H
