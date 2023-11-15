#include <iostream>

int main()
{

  // if (9 > 10)
  // {
  //   std::cout << "9 is greater than 10" << std::endl;
  // }
  // else
  // {
  //   std::cout << "9 is not greater than 10" << std::endl;
  // }

  // int point;

  // std::cin >> point;

  // if (point > 61)
  // {
  //   std::cout << "You passed with an honor" << std::endl;
  // }
  // else if (point > 51)
  // {
  //   std::cout << "You passed" << std::endl;
  // }
  // else
  // {
  //   std::cout << "Not in condition" << std::endl;
  // }

  // shorthand condition
  // int age = (1 == 2) ? 20 : 10;
  // std::cout << age << std::endl;

  // small example
  std::string name;
  std::cout << "please input name:";
  std::cin >> name;

  if (name == "Nisay")
  {
    std::cout << "I am Nisay" << std::endl;
  }
  else if (name == "Virak")
  {
    std::cout << "I am Virak" << std::endl;
  }
  else
  {
    std::cout << "No one else" << std::endl;
  }

  return 0;
}

/*

Exercise: create a grading system
 - ask user to input the point and print out the grade according to the grading system.

point > 50 => grade E
point > 60 => grade D
point > 70 => grade C
point > 80 => grade B
point > 90 => grade A

*/
