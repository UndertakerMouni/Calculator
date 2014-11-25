#include "calculatorscientific.h"
#include "ui_calculatorscientific.h"

#include <Qmath.h>


CalculatorScientific::CalculatorScientific(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalculatorScientific)
{
    setFixedSize(530,355);
    ui->setupUi(this);
    sumInMemory = 0.0;
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    waitingForOperand = true;

    //
    ui->radioButton_10->setChecked(true);
    ui->radioButton_Angle->setChecked(true);



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

    connect(ui->pushButton_A, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_B, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_C, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_D, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_E, SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(ui->pushButton_F, SIGNAL(clicked()), this, SLOT(digitClicked()));

    connect(ui->pushButton_Pi, SIGNAL(clicked()), this, SLOT(digitClicked()));

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
    connect(ui->pushButton_Mod, SIGNAL(clicked()), this, SLOT(additiveOperatorClicked()));
    connect(ui->pushButton_And, SIGNAL(clicked()), this, SLOT(additiveOperatorClicked()));
    connect(ui->pushButton_Xor, SIGNAL(clicked()), this, SLOT(additiveOperatorClicked()));
    connect(ui->pushButton_X_y, SIGNAL(clicked()), this, SLOT(additiveOperatorClicked()));
 //   connect(ui->pushButton_, SIGNAL(clicked()), this, SLOT(additiveOperatorClicked()));
    //
    connect(ui->pushButton_Sqrt, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_X_2, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_X_3, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Ln, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Log, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Sin,SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Sinh, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Cos, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Cosh, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Tan, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Tanh, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Fac, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_E_x, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_10_x, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Int, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Not, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));

    connect(ui->pushButton_Derivative, SIGNAL(clicked()), this, SLOT(unaryOperatorClicked()));
    connect(ui->pushButton_Equl, SIGNAL(clicked()), this, SLOT(equalClicked()));

    //M
    connect(ui->pushButton_MC, SIGNAL(clicked()), this, SLOT(clearMemory()));    
    connect(ui->pushButton_MR, SIGNAL(clicked()), this, SLOT(readMemory()));
    connect(ui->pushButton_MS, SIGNAL(clicked()), this ,SLOT(setMemory()));
    connect(ui->pushButton_MPlus,SIGNAL(clicked()), this, SLOT(addToMemory()));
    connect(ui->pushButton_MMinus, SIGNAL(clicked()), this, SLOT(subToMemory()));
}

CalculatorScientific::~CalculatorScientific()
{
    delete ui;
}

void CalculatorScientific::digitClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    int digitValue = 0;
    QString digitValue16;
    double Pi;

    if(clickedButton->text() == "Pi"){
        Pi = getPi();
        ui->lineEdit_display->clear();
    }else{
        if(ui->radioButton_16->isChecked())
            digitValue16 = clickedButton->text();
        else
            digitValue = clickedButton->text().toInt();
    }

    if (ui->lineEdit_display->text() == "0" && digitValue == 0.0)
        return;

    if (waitingForOperand) {
        ui->lineEdit_display->clear();
    waitingForOperand = false;
    }
    if(clickedButton->text() == "Pi"){
        ui->lineEdit_display->setText(QString::number(Pi));
        waitingForOperand = true;
    }else{
        if(ui->radioButton_16->isChecked())
            ui->lineEdit_display->setText(ui->lineEdit_display->text() + digitValue16);
        else
            ui->lineEdit_display->setText(ui->lineEdit_display->text() + QString::number(digitValue));
    }
}

void CalculatorScientific::unaryOperatorClicked()
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
    } else if (clickedOperator == tr("x^2")) {
        result = pow(operand, 2.0);
    } else if (clickedOperator == tr("x^3")){
        result = pow(operand, 3.0);
    } else if (clickedOperator == tr("1/X")) {
        if (operand == 0.0) {
            abortOperation();
            return;
        }
        result = 1.0 / operand;
    } else if (clickedOperator == tr("ln")) {
        if (operand < 0.0) {
            abortOperation();
            return;
        }
        result = log(operand);
    } else if (clickedOperator == tr("log")) {
        if (operand < 0.0) {
            abortOperation();
            return;
        }
        result = log10(operand);
    } else if (clickedOperator == tr("sin")) {
        if(ui->radioButton_Arc->isChecked())
            result = sin(operand);
        else
            result = sin(angleToArc(operand));
    } else if (clickedOperator == tr("sinh")) {

        result = sinh(operand);
    } else if (clickedOperator == tr("cos")) {
        if(ui->radioButton_Arc->isChecked())
            result = cos(operand);
        else
            result = cos(angleToArc(operand));
    } else if (clickedOperator == tr("cosh")) {

        result = cosh(operand);
    } else if (clickedOperator == tr("tan")) {
        if(ui->radioButton_Arc->isChecked())
            result = tan(operand);
        else
            result = tan(angleToArc(operand));
    } else if (clickedOperator == tr("tanh")) {

        result = tanh(operand);
    } else if (clickedOperator == tr("n!")) {
        if (operand < 0.0) {
            abortOperation();
            return;
        }
        result = 1;
        for(int i = 1; i <= (int)operand; i++)
            result *= i;
    } else if (clickedOperator == tr("e^x")) {
        result = exp(operand);
    } else if (clickedOperator == tr("10^x")) {
        result = pow(10,operand);
    } else if (clickedOperator == tr("Int")) {
        result = (int)(operand);
    } else if (clickedOperator == tr("Not")) {
        result = ~(int)(operand);
    }
    ui->lineEdit_display->setText(QString::number(result));
    waitingForOperand = true;
}

void CalculatorScientific::additiveOperatorClicked()
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

void CalculatorScientific::multiplicativeOperatorClicked()
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

void CalculatorScientific::equalClicked()
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

void CalculatorScientific::pointClicked()
{
    if (waitingForOperand)
        ui->lineEdit_display->setText("0");
    if (!ui->lineEdit_display->text().contains("."))
        ui->lineEdit_display->setText(ui->lineEdit_display->text() + tr("."));
    waitingForOperand = false;
}

void CalculatorScientific::changeSignClicked()
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

void CalculatorScientific::backspaceClicked()
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

void CalculatorScientific::clear()
{
    if (waitingForOperand)
        return;

    ui->lineEdit_display->setText("0");
    waitingForOperand = true;
}

void CalculatorScientific::clearAll()
{
    sumSoFar = 0.0;
    factorSoFar = 0.0;
    pendingAdditiveOperator.clear();
    pendingMultiplicativeOperator.clear();
    ui->lineEdit_display->setText("0");
    waitingForOperand = true;
}

void CalculatorScientific::clearMemory()
{
    sumInMemory = 0.0;
}

void CalculatorScientific::readMemory()
{
    ui->lineEdit_display->setText(QString::number(sumInMemory));
    waitingForOperand = true;
}

void CalculatorScientific::setMemory()
{
    equalClicked();
    sumInMemory = ui->lineEdit_display->text().toDouble();
}

void CalculatorScientific::addToMemory()
{
    equalClicked();
    sumInMemory += ui->lineEdit_display->text().toDouble();
}
void CalculatorScientific::subToMemory()
{
    equalClicked();
    sumInMemory -= ui->lineEdit_display->text().toDouble();
}

/////////////////////////////////////////////////////////

double CalculatorScientific::angleToArc(double angle)
{
    double Pi = asin(0.5)*6;
//	double Pi = 3.1415926;
    double Arc=angle/180*Pi;
    return Arc;
}
double CalculatorScientific::getPi()
{
    double Pi = 3.141592653589;
    return Pi;
}

void CalculatorScientific::abortOperation()
{
    clearAll();
    ui->lineEdit_display->setText(tr("####"));
}

bool CalculatorScientific::calculate(double rightOperand, const QString &pendingOperator)
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
    } else if (pendingOperator == tr("%")) {
        sumSoFar = fmod(sumSoFar,rightOperand);
    } else if (pendingOperator == tr("And")) {
        sumSoFar = (int)sumSoFar & (int)rightOperand;
    } else if (pendingOperator == tr("Xor")) {
        sumSoFar = (int)sumSoFar ^ (int)rightOperand;
    } else if (pendingOperator == tr("x^y")) {
        sumSoFar = pow(sumSoFar,rightOperand);
    }
    return true;
}

