#include <iostream>

int main()
{
    int choice, C, F;

    while (choice != 3)
    {
        std::cout << "1.Celsius to Fahrenheit: " << std::endl;
        std::cout << "2.Fahrenheit to Celsius: " << std::endl;
        std::cout << "3.Exit" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> choice;
        if (choice == 1)
        {
            std::cout << "Enter temperature in celsius: ";
            std::cin >> C;
            std::cout << "Temp in F: " << (C * 9 / 5) + 32;
        }
        else if (choice == 2)
        {
            std::cout << "Temperature in Fahrenheit:";
            std::cin >> F;
            std::cout << "Temp in C: " << (F - 32) * 5 / 9;
        }
    }

    return 0;
}