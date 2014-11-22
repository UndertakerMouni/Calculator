#include "calculatorscientific.h"
#include "ui_calculatorscientific.h"

CalculatorScientific::CalculatorScientific(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorScientific)
{
    ui->setupUi(this);
}

CalculatorScientific::~CalculatorScientific()
{
    delete ui;
}
