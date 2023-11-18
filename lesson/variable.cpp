#include <iostream> //standard inbrary

int main()              // main entry point or function
{                       // declare vairiable or create vairiable
  int age = 20;         // int,double,bool,char,string = type
  double salary = 300;  // age,salry,isUnder,title = variable name
  bool isUnder = false; // 20,300,false,'N' = value
  char title = 'N';
  std::cout << "Age: " << age << std::endl;
  std::cout << "Salary: " << salary << std::endl;
  std::cout << "Isuder: " << isUnder << std::endl;
  std::cout << "Title: " << title << std::endl
            << std::endl;
  // assign new vaule or change the vaule os those variables
  age = 30;
  salary = 50;
  isUnder = true;
  title = 'V';
  std::cout << "Age: " << age << std::endl;
  std::cout << "Salary: " << salary << std::endl;
  std::cout << "isUnder: " << isUnder << std::endl;
  std::cout << "Title: " << title << std::endl;
  return 0;
}