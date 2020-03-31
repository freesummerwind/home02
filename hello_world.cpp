#include <iostream>

int main()
{
  std::cout << "Hello! Input your name: "; //запрашиваем имя пользователя
  std::string name = ""; //создаём переменную для хранения имени
  std::cin >> name; //сохраняем имя в переменную
  std::cout << "Hello World from " << name << std::endl; //выводим приветствие
}
