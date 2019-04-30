#ifndef USER_WINDOW_H
#define USER_WINDOW_H

#include <QMainWindow>
#include "transfer.h"
#include "transfer_history.h"

namespace Ui {
class user_window;
}

class user_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit user_window(QWidget *parent = 0);
    ~user_window();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_new_transfer_clicked();

    void on_pushButton_history_clicked();

private:
    Ui::user_window *ui;
    Transfer *Transfer;
    transfer_history *transfer_history;
};

#endif // USER_WINDOW_H
