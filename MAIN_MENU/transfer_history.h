#ifndef TRANSFER_HISTORY_H
#define TRANSFER_HISTORY_H

#include <QMainWindow>

namespace Ui {
class transfer_history;
}

class transfer_history : public QMainWindow
{
    Q_OBJECT

public:
    explicit transfer_history(QWidget *parent = 0);
    ~transfer_history();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_history_clicked();

private:
    Ui::transfer_history *ui;
};

#endif // TRANSFER_HISTORY_H
