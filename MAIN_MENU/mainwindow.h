#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "register_window.h"
#include "login_window.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_exitButton_clicked();

    void on_registerButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
    REGISTER_WINDOW *REGISTER_WINDOW;
    login_window *login_window;


};

#endif // MAINWINDOW_H
