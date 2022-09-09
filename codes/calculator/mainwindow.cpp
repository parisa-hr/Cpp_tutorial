#include "mainwindow.h"
#include "ui_mainwindow.h"


static double  calcVal = 0.0;// meghdare avalie calculator 0.0
// will define if this was the last math button clicked
static bool  divTrigger  = false;
static bool  multTrigger = false;
static bool  addTrigger  = false;
static bool  SubTrigger  = false;

MainWindow::MainWindow(QWidget *parent): // calculator
    QMainWindow(parent),  // call the QMainWindow constructor
    ui(new Ui::MainWindow)   // create the UI class and asign it to the UI member
{
    ui->setupUi(this);  // setup the UI

    ui->Display->setText(QString::number(calcVal));  // neshon mide 0 ra
    QPushButton *numButtons[10];  // az btn_0 ta btn_9 ye aray be tool 10 //Will hold references to all the number buttons

    for (int i = 0; i < 10; ++i)
    {
        QString  butName = "Btn_" + QString::number(i);
        numButtons[i] = MainWindow::findChild<QPushButton *>(butName);    // Get the buttons by name and add to array
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));    // When the button is released call num_pressed()
    }

    // connect(object1,signal1,object2,slot1) //in connect ha baraye math function ha va = va +/-
    connect(ui->Btn_add, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Btn_Sub, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Btn_mult, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Btn_divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Btn_ecual, SIGNAL(released()), this, SLOT(EqualButton()));
    connect(ui->change_Sign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));
}

//= ===================================================================
MainWindow::~MainWindow()
{
    delete ui;
}

//= ===================================================================
void  MainWindow::NumPressed()
{
    QPushButton *button     = (QPushButton *)sender();// Sender returns a pointer to the button pressed
    QString      butVal     = button->text();// Get number on button
    QString      displayVal = ui->Display->text();// Get the value in the display

    if ((displayVal.toDouble() == 0.0) || (displayVal.toDouble() == 0.0))
    {
        ui->Display->setText(butVal);
    }
    else
    {
        QString  newVal    = displayVal + butVal;
        double   dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));   // ta 16 ragham mitone karbar vared konad
    }
}

//= ===================================================================
void  MainWindow::MathButtonPressed()// mainwindow hamon calculator e
{   // Cancel out previous math button clicks
    divTrigger  = false;
    multTrigger = false;
    addTrigger  = false;
    SubTrigger  = false;

    QString  displayVal = ui->Display->text(); // Store current value in Display
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString      butVal = button->text();// Get math symbol on the button

    if ((QString::compare(butVal, "/", Qt::CaseSensitive)) == 0)
    {
        divTrigger = true;
    }
    else if ((QString::compare(butVal, "×", Qt::CaseSensitive)) == 0)
    {
        multTrigger = true;
    }
    else if ((QString::compare(butVal, "+", Qt::CaseSensitive)) == 0)
    {
        addTrigger = true;
    }
    else
    {
        SubTrigger = true;
    }

    ui->Display->setText("");
}

//= ===================================================================
void  MainWindow::EqualButton()
{
    double   Solution      = 0.0;
    QString  displayVal    = ui->Display->text();
    double   dblDisplayVal = displayVal.toDouble();

    if (addTrigger || SubTrigger || multTrigger || divTrigger)
    {
        if (addTrigger)
        {
            Solution = calcVal + dblDisplayVal;
        }
        else if (SubTrigger)
        {
            Solution = calcVal - dblDisplayVal;
        }
        else if (multTrigger)
        {
            Solution = calcVal * dblDisplayVal;
        }
        else
        {
            Solution = calcVal / dblDisplayVal;
        }
    }

    ui->Display->setText(QString::number(Solution));
}

//= ===================================================================
void  MainWindow::ChangeNumberSign()
{
    QString  displayVal = ui->Display->text();
    QRegExp  reg("[-+]?[0-9.]*");

    if (reg.exactMatch(displayVal))
    {
        double  dbldisplayVal     = displayVal.toDouble();
        double  dbldisplayValSign = -1 * dbldisplayVal;
        ui->Display->setText(QString::number(dbldisplayValSign));
    }
}

//= ===================================================================
void  MainWindow::on_clear_clicked()
{
    ui->Display->setText("0");
}
