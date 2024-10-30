#ifndef EQUATION_H
#define EQUATION_H

#include <stdexcept>


class EquationException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Помилка: значення a = 0 не дозволене.";
    }
};


class Equation {
public:
    
    double calculateRoot1(double a, double b);

    
    double calculateRoot2(double a, double b) throw();

    
    double calculateRoot3(double a, double b) throw(std::invalid_argument);

    
    double calculateRoot4(double a, double b) throw(EquationException);
};

#endif
