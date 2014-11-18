#include "calculatorstandard.h"
#include "ui_calculatorstandard.h"

CalculatorStandard::CalculatorStandard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorStandard)
{
    ui->setupUi(this);
}

CalculatorStandard::~CalculatorStandard()
{
    delete ui;
}
