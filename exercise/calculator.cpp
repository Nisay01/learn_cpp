#include <iostream>

int main()
{
    int arg1, arg2;
    char op;
    std::cout << "Enter first Number: ";
    std::cin >> arg1;
    std::cout << "Enter Operator: ";
    std::cin >> op;
    std::cout << "Enter Secound Number: ";
    std::cin >> arg2;

    if (op == '+')
    {
        std::cout << arg1 + arg2;
    }
    else if (op == '*')
    {
        std::cout << arg1 * arg2;
    }
    else if (op == '-')
    {
        std::cout << arg1 - arg2;
    }
    else
    {
        std::cout << arg1 / arg2;
    }
    return 0;
}