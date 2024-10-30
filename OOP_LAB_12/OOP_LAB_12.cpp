#include "Equation.h"
#include <iostream>
#include <exception>

void customTerminate() {
    std::cerr << "Відсутній обробник виняткової ситуації. Завершення програми." << std::endl;
    exit(1);
}

void customUnexpected() {
    std::cerr << "Непередбачений виняток. Завершення програми." << std::endl;
    exit(1);
}

int main() {
    std::set_terminate(customTerminate);
    std::set_unexpected(customUnexpected);

    Equation eq;
    double a, b;

    std::cout << "Введіть значення a та b для рівняння ax + b = 0: ";
    std::cin >> a >> b;

    try {
        std::cout << "Корінь (без специфікації): " << eq.calculateRoot1(a, b) << std::endl;
    }
    catch (const char* e) {
        std::cerr << "Помилка: " << e << std::endl;
    }

    try {
        std::cout << "Корінь (специфікація throw()): " << eq.calculateRoot2(a, b) << std::endl;
    }
    catch (const char* e) {
        std::cerr << "Помилка: " << e << std::endl;
    }

    try {
        std::cout << "Корінь (стандартний виняток): " << eq.calculateRoot3(a, b) << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    try {
        std::cout << "Корінь (власний виняток): " << eq.calculateRoot4(a, b) << std::endl;
    }
    catch (const EquationException& e) {
        std::cerr << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}
