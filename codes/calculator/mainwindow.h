#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;

private slots:

    void NumPressed();
    void MathButtonPressed();
    void EqualButton();
    void ChangeNumberSign();


    void on_clear_clicked();
};

#endif // MAINWINDOW_H
