#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_exitButton_clicked()
{
    QMessageBox :: StandardButton question = QMessageBox :: warning(this,"Potwierdź decyzję","Czy na pewno chcesz wyjść?",QMessageBox:: Yes | QMessageBox::No);
    if (question==QMessageBox::Yes)

        QApplication::quit();

}

void MainWindow::on_registerButton_clicked()
{

    REGISTER_WINDOW = new class REGISTER_WINDOW (this);
    REGISTER_WINDOW -> show();

}

void MainWindow::on_loginButton_clicked()
{
    login_window = new class login_window(this);
    login_window -> show();
}
