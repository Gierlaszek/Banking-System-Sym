#ifndef PAYMENT_H
#define PAYMENT_H

#include <QMainWindow>

namespace Ui {
class payment;
}

class payment : public QMainWindow
{
    Q_OBJECT

public:
    explicit payment(QWidget *parent = 0);
    ~payment();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_clicked();

private:
    Ui::payment *ui;
};

#endif // PAYMENT_H
