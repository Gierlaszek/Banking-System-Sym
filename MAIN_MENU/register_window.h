#ifndef REGISTER_WINDOW_H
#define REGISTER_WINDOW_H
#include <QMainWindow>
namespace Ui {
class REGISTER_WINDOW;
}

class REGISTER_WINDOW : public QMainWindow
{
    Q_OBJECT

public:
    explicit REGISTER_WINDOW(QWidget *parent = nullptr);
    ~REGISTER_WINDOW();

private slots:
    void on_exitButton_clicked();

    void on_backButton_clicked();

    void on_createAccButton_clicked();

private:
    Ui::REGISTER_WINDOW *ui;

};

#endif // REGISTER_WINDOW_H
