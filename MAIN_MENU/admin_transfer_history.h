#ifndef ADMIN_TRANSFER_HISTORY_H
#define ADMIN_TRANSFER_HISTORY_H

#include <QDialog>

namespace Ui {
class admin_transfer_history;
}

class admin_transfer_history : public QDialog
{
    Q_OBJECT

public:
    explicit admin_transfer_history(QWidget *parent = nullptr);
    ~admin_transfer_history();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::admin_transfer_history *ui;
};

#endif // ADMIN_TRANSFER_HISTORY_H
