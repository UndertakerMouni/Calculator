#include "calculatorstandard.h"
#include "ui_calculatorstandard.h"

#include <Qmath.h>

CalculatorStandard::CalculatorStandard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorStandard)
{
    ui->setupUi(this);

    setFixedSize(271,285);
    sumInMemory = 0.0;
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    waitingForOperand = true;

    //NumberKey
    connect(ui->pushButton_Zero, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_One, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_Two, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_Three, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_Four, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_Five, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_Six, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_Seven, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_Eight, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_Nine, SIGNAL(clicked()), this, SLOT(digitClicked()));

    //
    connect(ui->pushButton_Point, SIGNAL(clicked()), this ,SLOT(pointClicked()));
    connect(ui->pushButton_PlusMinus, SIGNAL(clicked()), this, SLOT(changeSignClicked()));

    //
    connect(ui->pushButton_Backspace, SIGNAL(clicked()), this, SLOT(backspaceClicked()));
    connect(ui->pushButton_Clear, SIGNAL(clicked()), this, SLOT(clear()));
    connect(ui->pushButton_ClearAll, SIGNAL(clicked()), this, SLOT(clearAll()));

    //OperatorKey
    connect(ui->pushButton_Add, SIGNAL(clicked()), this, SLOT(additiveOperatorClicked()));
    connect(ui->pushButton_Sub, SIGNAL(clicked()), this, SLOT(additiveOperatorClicked()));
    connect(ui->pushButton_Mul, SIGNAL(clicked()), this, SLOT(multiplicativeOperatorClicked()));
    connect(ui->pushButton_Div, SIGNAL(clicked()), this, SLOT(multiplicativeOperatorClicked()));

    //
    connect(ui->pushButton_Sqrt, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_X_2, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Derivative, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Equl, SIGNAL(clicked()), this, SLOT(equalClicked()));

    //M
    connect(ui->pushButton_MC, SIGNAL(clicked()), this, SLOT(clearMemory()));
    connect(ui->pushButton_MPlus,SIGNAL(clicked()), this, SLOT(addToMemory()));
    connect(ui->pushButton_MR, SIGNAL(clicked()), this, SLOT(readMemory()));
    connect(ui->pushButton_MS, SIGNAL(clicked()), this ,SLOT(setMemory()));


}

CalculatorStandard::~CalculatorStandard()
{
    delete ui;
}

void CalculatorStandard::digitClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    int digitValue = clickedButton->text().toInt();
    if (ui->lineEdit_display->text() == "0" && digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->lineEdit_display->clear();
    waitingForOperand = false;
    }
    ui->lineEdit_display->setText(ui->lineEdit_display->text() + QString::number(digitValue));
}

void CalculatorStandard::unaryOperatorClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString clickedOperator = clickedButton->text();
    double operand = ui->lineEdit_display->text().toDouble();
    double result = 0.0;

    if (clickedOperator == tr("Sqrt")) {
        if (operand < 0.0) {
            abortOperation();
            return;
        }
        result = sqrt(operand);
    } else if (clickedOperator == tr("X^2")) {
        result = pow(operand, 2.0);
    } else if (clickedOperator == tr("1/X")) {
        if (operand == 0.0) {
            abortOperation();
            return;
        }
        result = 1.0 / operand;
    }
    ui->lineEdit_display->setText(QString::number(result));
    waitingForOperand = true;
}

void CalculatorStandard::additiveOperatorClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString clickedOperator = clickedButton->text();
    double operand = ui->lineEdit_display->text().toDouble();


    if (!pendingMultiplicativeOperator.isEmpty()) {

        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
        return;
        }
        ui->lineEdit_display->setText(QString::number(factorSoFar));
        operand = factorSoFar;
        factorSoFar = 0.0;
        pendingMultiplicativeOperator.clear();
    }


    if (!pendingAdditiveOperator.isEmpty()) {

        if (!calculate(operand, pendingAdditiveOperator)) {
            abortOperation();
        return;
        }
        ui->lineEdit_display->setText(QString::number(sumSoFar));
    } else {
        sumSoFar = operand;
    }

    pendingAdditiveOperator = clickedOperator;

    waitingForOperand = true;
}

void CalculatorStandard::multiplicativeOperatorClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString clickedOperator = clickedButton->text();
    double operand = ui->lineEdit_display->text().toDouble();

    if (!pendingMultiplicativeOperator.isEmpty()) {
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
        return;
        }
        ui->lineEdit_display->setText(QString::number(factorSoFar));
    } else {
        factorSoFar = operand;
    }

    pendingMultiplicativeOperator = clickedOperator;
    waitingForOperand = true;
}

void CalculatorStandard::equalClicked()
{
    double operand = ui->lineEdit_display->text().toDouble();

    if (!pendingMultiplicativeOperator.isEmpty()) {
        if (!calculate(operand, pendingMultiplicativeOperator)) {
            abortOperation();
        return;
        }
        operand = factorSoFar;
        factorSoFar = 0.0;
        pendingMultiplicativeOperator.clear();
    }
    if (!pendingAdditiveOperator.isEmpty()) {
        if (!calculate(operand, pendingAdditiveOperator)) {
            abortOperation();
        return;
        }
        pendingAdditiveOperator.clear();
    } else {
        sumSoFar = operand;
    }

    ui->lineEdit_display->setText(QString::number(sumSoFar));
    sumSoFar = 0.0;
    waitingForOperand = true;
}

void CalculatorStandard::pointClicked()
{
    if (waitingForOperand)
        ui->lineEdit_display->setText("0");
    if (!ui->lineEdit_display->text().contains("."))
        ui->lineEdit_display->setText(ui->lineEdit_display->text() + tr("."));
    waitingForOperand = false;
}

void CalculatorStandard::changeSignClicked()
{
    QString text = ui->lineEdit_display->text();
    double value = text.toDouble();

    if (value > 0.0) {
        text.prepend(tr("-"));
    } else if (value < 0.0) {
        text.remove(0, 1);
    }
    ui->lineEdit_display->setText(text);
}

void CalculatorStandard::backspaceClicked()
{
    if (waitingForOperand)
        return;

    QString text = ui->lineEdit_display->text();
    text.chop(1);
    if (text.isEmpty()) {
        text = "0";
        waitingForOperand = true;
    }
    ui->lineEdit_display->setText(text);
}

void CalculatorStandard::clear()
{
    if (waitingForOperand)
        return;

    ui->lineEdit_display->setText("0");
    waitingForOperand = true;
}

void CalculatorStandard::clearAll()
{
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    pendingAdditiveOperator.clear();
    pendingMultiplicativeOperator.clear();
    ui->lineEdit_display->setText("0");
    waitingForOperand = true;
}

void CalculatorStandard::clearMemory()
{
    sumInMemory = 0.0;
}

void CalculatorStandard::readMemory()
{
    ui->lineEdit_display->setText(QString::number(sumInMemory));
    waitingForOperand = true;
}

void CalculatorStandard::setMemory()
{
    equalClicked();
    sumInMemory = ui->lineEdit_display->text().toDouble();
}

void CalculatorStandard::addToMemory()
{
    equalClicked();
    sumInMemory += ui->lineEdit_display->text().toDouble();
}

void CalculatorStandard::abortOperation()
{
    clearAll();
    ui->lineEdit_display->setText(tr("####"));
}

bool CalculatorStandard::calculate(double rightOperand, const QString &pendingOperator)
{
    if (pendingOperator == tr("+")) {
        sumSoFar += rightOperand;
    } else if (pendingOperator == tr("-")) {
        sumSoFar -= rightOperand;
    } else if (pendingOperator == tr("*")) {
        factorSoFar *= rightOperand;
    } else if (pendingOperator == tr("/")) {
    if (rightOperand == 0.0)
        return false;
    factorSoFar /= rightOperand;
    }
    return true;
}
