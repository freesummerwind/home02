#include <iostream>

int main()
{
  std::cout << "Hello! Input your name: ";
  std::string name = "";
  std::cin >> name;
  std::cout << "Hello World from " << name << std::endl;
}
