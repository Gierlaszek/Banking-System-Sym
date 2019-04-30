#ifndef LOGIN_WINDOW_H
#define LOGIN_WINDOW_H

#include <QMainWindow>
#include "user_window.h"
#include "admin_window.h"

namespace Ui {
class login_window;
}

class login_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit login_window(QWidget *parent = 0);
    ~login_window();

private slots:

    void on_backButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::login_window *ui;
    admin_window *admin_window;
    user_window *user_window;
};

#endif // LOGIN_WINDOW_H
