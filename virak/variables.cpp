#include <iostream>

int main()
{
  // declare variables or create variables
  int age = 20;
  double salary = 203.5;
  bool isUnderAge = false;
  char title = 'N';

  // print out the value of those variables
  std::cout << "Age: " << age << std::endl;
  std::cout << "Salary: " << salary << std::endl;
  std::cout << "Eligible Age: " << isUnderAge << std::endl;
  std::cout << "Title: " << title << std::endl
            << std::endl;

  std::cout << "Assigning new value" << std::endl
            << std::endl;

  // assign new value or change the value of those variables
  age = 30;
  salary = 50;
  isUnderAge = true;
  title = 'V';

  std::cout << "Age: " << age << std::endl;
  std::cout << "Salary: " << salary << std::endl;
  std::cout << "Eligible Age: " << isUnderAge << std::endl;
  std::cout << "Title: " << title << std::endl;

  return 0;
}

/*
1. What is the entry point of program in C++?
2. Can we assign double value to a variable with type integer? Why?
3. Create four variables with different types and print out those variables to the console.
4. Assign value to each variables and print out to the console.
5. How to compile a file in C++? please explain.
6. std::endl ប្រើសំរាប់ធ្វើអ្វី?
*/