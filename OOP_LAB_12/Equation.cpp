#include "Equation.h"
#include <iostream>


double Equation::calculateRoot1(double a, double b) {
    if (a == 0) throw "Помилка: коефіцієнт a = 0";
    return -b / a;
}


double Equation::calculateRoot2(double a, double b) throw() {
    if (a == 0) throw "Помилка: коефіцієнт a = 0";
    return -b / a;
}


double Equation::calculateRoot3(double a, double b) throw(std::invalid_argument) {
    if (a == 0) throw std::invalid_argument("Помилка: коефіцієнт a = 0");
    return -b / a;
}


double Equation::calculateRoot4(double a, double b) throw(EquationException) {
    if (a == 0) throw EquationException();
    return -b / a;
}
