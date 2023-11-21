#include <iostream>

int main()
{
    int numericalGrade;

    // Get user input for numerical grade
    std::cout << "Enter your numerical grade: ";
    std::cin >> numericalGrade;

    // Switch statement to determine the letter grade
    switch (numericalGrade / 10)
    {
    case 10:
    case 9:
        std::cout << "Your letter grade is A." << std::endl;
        break;

    case 8:
        std::cout << "Your letter grade is B." << std::endl;
        break;

    case 7:
        std::cout << "Your letter grade is C." << std::endl;
        break;

    case 6:
        std::cout << "Your letter grade is D." << std::endl;
        break;

    default:
        std::cout << "Your letter grade is F." << std::endl;
    }

    return 0;
}
