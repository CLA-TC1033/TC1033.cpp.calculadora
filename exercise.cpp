#include "calculadora.hpp"
#include <iostream>

int main()
{
    double op1, op2;

    std::cout << "Operando 1: ";
    std::cin >> op1;

    std::cout << "Operando 2: ";
    std::cin >> op2;


    std::cout << "La suma es: " << suma(op1,op2) << "\n";
    std::cout << "La resta es: " << resta(op1, op2) << "\n";
    std::cout << "La multiplicación es: " << multiplica(op1, op2) << "\n";
    std::cout << "La división es: " << divide(op1, op2) << "\n";

    return 0;
}