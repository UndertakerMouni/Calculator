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
private slots:
    void digitClicked();
    void unaryOperatorClicked();
    void additiveOperatorClicked();
    void multiplicativeOperatorClicked();
    void equalClicked();
    void pointClicked();
    void changeSignClicked();
    void backspaceClicked();
    void clear();
    void clearAll();
    void clearMemory();
    void readMemory();
    void setMemory();
    void addToMemory();

private:
    Ui::CalculatorStandard *ui;

    void abortOperation();
    bool calculate(double rightOperand, const QString &pendingOperator);

    double sumInMemory;
    double sumSoFar;
    double factorSoFar;

    QString pendingAdditiveOperator;
    QString pendingMultiplicativeOperator;

    bool waitingForOperand;
};

#endif // CALCULATORSTANDARD_H
