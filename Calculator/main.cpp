#include "calculatorstandard.h"
#include "calculatorscientific.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CalculatorScientific w;
  //  CalculatorStandard w;
    w.show();

    return a.exec();
}
