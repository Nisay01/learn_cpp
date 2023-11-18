#include <iostream>

int main()
{

    int firstnumber, secoundnumber, choice;

    while (choice != 5)
    {
        std::cout << "Calculator Menu" << std::endl;
        std::cout << "1.Addition" << std::endl;
        std::cout << "2.Sutraction" << std::endl;
        std::cout << "3.Multiplication" << std::endl;
        std::cout << "4.Division" << std::endl;
        std::cout << "5.Exit" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1)
        {
            std::cout << "Enter first Number: ";
            std::cin >> firstnumber;
            std::cout << firstnumber + secoundnumber << std::endl;
        }
        else if (choice == 2)
        {
            std::cout << "Enter first Number: ";
            std::cin >> firstnumber;
            std::cout << firstnumber - secoundnumber << std::endl;
        }
        else if (choice == 3)
        {
            std::cout << "Enter first Number: ";
            std::cin >> firstnumber;
            std::cout << firstnumber * secoundnumber << std::endl;
        }
        else if (choice == 4)
        {
            std::cout << "Enter first Number: ";
            std::cin >> firstnumber;
            std::cout << firstnumber / secoundnumber << std::endl;
        }
    }

    return 0;
}