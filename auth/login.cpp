#include <iostream>
#include <string>

int main()
{
  std::string username;
  std::string password;

  const std::string CORRECT_USERNAME = "Virak";
  const std::string CORRECT_PASSWORD = "Vxy123456";

  std::cout << "Please input username: ";
  std::cin >> username;

  std::cout << "Please input password: ";
  std::cin >> password;

  if (username == CORRECT_USERNAME && password == CORRECT_PASSWORD)
  {
    std::cout << "You are logged in!!" << std::endl;
  }
  else
  {
    std::cout << "Invalid credentials!!" << std::endl;
  }

  return 0;
}