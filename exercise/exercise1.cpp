//1. What is the entry point of program in C++?
// -> From C/C++ programming perspective, the program entry point is main() function.
//2. Can we assign double value to a variable with type integer? Why?
//-> double​ ជា​ value​ ចំនួនទស្សភាគ ព្រោះនៅក្នុង c++ គេ​កំណត់ value doble ជាចំនួនទស្សភាគ
//3. Create four variables with different types and print out those variables to the console.
//4. Assign value to each variables and print out to the console.
//3-4 ->
#include <iostream>

int main()
{
  char name = 'N';
  int  age = 20;
  int student = 300; 
  double average = 60;
 
  std::cout << "name: "<< name << std::endl;
  std::cout << "age: " << age << std::endl;
  std::cout << "Student: " << student << std::endl;
  std::cout << "Average: " << average << std::endl
            << std::endl;
    
  name = 30;
  student = 50;
  age= true ;
  average = 'V';
  std::cout << "name: "<< name << std::endl;
  std::cout << "age: " << age << std::endl;
  std::cout << "Student: " << student << std::endl;
  std::cout << "Average: " << average << std::endl;
  return 0;
}
//5. How to compile a file in C++? please explain.
// -> g++ + name file -> Enter
// -> \. + tab -> Enter
//6. std::endl ប្រើសំរាប់ធ្វើអ្វី?
//-> សម្រាប់ចុះបន្ទាត់ដោយមិនចាបបាចប្រើ​​ using namespace std;