#ifndef ADMIN_CONFIRM_PAYMENT_H
#define ADMIN_CONFIRM_PAYMENT_H

#include <QMainWindow>

namespace Ui {
class admin_confirm_payment;
}

class admin_confirm_payment : public QMainWindow
{
    Q_OBJECT

public:
    explicit admin_confirm_payment(QWidget *parent = 0);
    ~admin_confirm_payment();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::admin_confirm_payment *ui;
};

#endif // ADMIN_CONFIRM_PAYMENT_H
