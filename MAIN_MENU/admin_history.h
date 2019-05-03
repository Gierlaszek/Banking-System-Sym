#ifndef ADMIN_HISTORY_H
#define ADMIN_HISTORY_H

#include <QDialog>

namespace Ui {
class admin_history;
}

class admin_history : public QDialog
{
    Q_OBJECT

public:
    explicit admin_history(QWidget *parent = nullptr);
    ~admin_history();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::admin_history *ui;
};

#endif // ADMIN_HISTORY_H
