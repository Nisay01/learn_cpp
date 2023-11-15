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

  int point;

  std::cin >> point;

  if (point > 61)
  {
    std::cout << "You passed with an honor" << std::endl;
  }
  else if (point > 51)
  {
    std::cout << "You passed" << std::endl;
  }
  else
  {
    std::cout << "Not in condition" << std::endl;
  }

  return 0;
}