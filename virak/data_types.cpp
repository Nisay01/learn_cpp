#include <iostream>
#include <string>

int main()
{
  int myNum = 5;                // Integer (whole number)
  float myFloatNum = 5.99;      // Floating point number
  double myDoubleNum = 9.98;    // Floating point number
  char myLetter = 'D';          // Character
  bool myBoolean = true;        // Boolean
  std::string myText = "Hello"; // String

  std::cout << myNum << std::endl;
  std::cout << myFloatNum << std::endl;
  std::cout << myDoubleNum << std::endl;
  std::cout << myLetter << std::endl;
  std::cout << myBoolean << std::endl;
  std::cout << myText << std::endl;

  return 0;
}
