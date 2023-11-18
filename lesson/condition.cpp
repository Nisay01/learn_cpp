#include <iostream>

int main()
{
    // Declare a variable
    int year;

    // Ask the user to enter a year
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        std::cout << year << " is a leap year." << std::endl;
    }
    else
    {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}