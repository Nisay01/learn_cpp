/*

Exercise: create a grading system
 - ask user to input the point and print out the grade according to the grading system.

point > 50 => grade E
point > 60 => grade D
point > 70 => grade C
point > 80 => grade B
point > 90 => grade A

*/
#include <iostream>

int main()

{
    std::string point;
    std::cout << "Your Point: ";
    std::cin >> point >> ;
    if (point > 50)
    {
        std::cout << "Your Grade E " << std::endl;
    }
    else if (point > 60)
    {
        std::cout << "Your Grade D " << std::endl;
        git
    }
    else if (Point > 70)
    {
        std::cout << "Your Grade C" << std::endl;
    }
    else if (point > 80)
    {
        std::cout << "Your Grade B" << std::endl;
    }
    else if (point > 90)
    {
        std::cout << "Your Grade A" << std::endl;
    }
    else
        (point < 50)
        {
            std::cout << "Your Failed​";
        }

    return 0;
}