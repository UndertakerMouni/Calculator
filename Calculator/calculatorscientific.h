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
    void subToMemory();

private:
    Ui::CalculatorScientific *ui;

    double angleToArc(double angle);
    void abortOperation();
    bool calculate(double rightOperand, const QString &pendingOperator);

    double sumInMemory;
    double sumSoFar;
    double factorSoFar;

    QString pendingAdditiveOperator;
    QString pendingMultiplicativeOperator;

    bool waitingForOperand;

};

#endif // CALCULATORSCIENTIFIC_H
