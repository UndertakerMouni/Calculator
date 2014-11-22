#ifndef CALCULATORSCIENTIFIC_H
#define CALCULATORSCIENTIFIC_H

#include <QMainWindow>

namespace Ui {
class CalculatorScientific;
}

class CalculatorScientific : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalculatorScientific(QWidget *parent = 0);
    ~CalculatorScientific();

private:
    Ui::CalculatorScientific *ui;
};

#endif // CALCULATORSCIENTIFIC_H
