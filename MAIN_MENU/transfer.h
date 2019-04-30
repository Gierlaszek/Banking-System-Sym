#ifndef TRANSFER_H
#define TRANSFER_H

#include <QMainWindow>

namespace Ui {
class Transfer;
}

class Transfer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Transfer(QWidget *parent = 0);
    ~Transfer();

private slots:
    void on_pushButton_Wyslij_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::Transfer *ui;
};

#endif // TRANSFER_H
