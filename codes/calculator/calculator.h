#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

class calculator : public QMainWindow
{
    Q_OBJECT
public:
    explicit calculator(QWidget *parent = 0);
    ~calculator();



private:
    Ui::Calculator *ui;


};

#endif // CALCULATOR_H
