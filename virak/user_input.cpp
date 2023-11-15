#include <iostream>

int main()
{
  char gender;
  int age;

  std::cout << "Gender: ";
  std::cin >> gender;

  std::cout << "Age: ";
  std::cin >> age;

  std::cout << "....." << std::endl;

  std::cout << "Gender: " << gender << std::endl;
  std::cout << "Age: " << age << std::endl;

  return 0;
}
