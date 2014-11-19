#include "calculatorstandard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CalculatorStandard w;
    w.show();

    return a.exec();
}
