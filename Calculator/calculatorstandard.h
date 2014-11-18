#ifndef CALCULATORSTANDARD_H
#define CALCULATORSTANDARD_H

#include <QMainWindow>

namespace Ui {
class CalculatorStandard;
}

class CalculatorStandard : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorStandard(QWidget *parent = 0);
    ~CalculatorStandard();

private:
    Ui::CalculatorStandard *ui;
};

#endif // CALCULATORSTANDARD_H
