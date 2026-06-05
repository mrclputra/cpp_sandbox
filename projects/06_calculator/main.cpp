#include <iostream>
#include "arithmetic.h"

double getDouble() {
    std::cout << "Enter a number: ";
    double x{};
    std::cin >>x;
    return x;
}

char getOperator() {
    std::cout << "Enter op +,-,*,/: ";
    char op;
    std::cin >> op;
    return op;
}

void calculate(double x, double y, char op) {
    double result{};

    if (op == '+')
        result = add(x, y);
    else if (op == '-')
        result = subtract(x, y);
    else if (op == '*')
        result = multiply(x, y);
    else if (op == '/')
        result = divide(x, y);
    else
        return;

    std::cout << result;
}

int main()
{
    double x{getDouble()};
    double y{getDouble()};
    char op{getOperator()};

    calculate(x, y, op);

    return 0;
}
