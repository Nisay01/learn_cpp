#include <iostream>

int main()
{
    char operation;
    double num1, num2;

    // Input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform calculation based on the operator
    switch (operation)
    {
    case '+':
        std::cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        std::cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        std::cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            std::cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        else
        {
            std::cout << "Error! Division by zero is undefined.";
        }
        break;
    default:
        std::cout << "Error! Invalid operator.";
        break;
    }

    return 0;
}