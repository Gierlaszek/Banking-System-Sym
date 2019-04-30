#ifndef USER_WINDOW_H
#define USER_WINDOW_H

#include <QMainWindow>

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
    void on_pushButton_3_clicked();

private:
    Ui::user_window *ui;
};

#endif // USER_WINDOW_H
