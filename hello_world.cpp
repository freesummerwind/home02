#include <iostream>

int main()
{
  std::cout << "Hello! Input your name: "; //Запрашиваем имя пользователя
  std::string name = ""; //Создаём переменную для хранения имени
  std::cin >> name; //Сохраняем имя в переменную
  std::cout << "Hello World from " << name << std::endl; //Выводим приветствие
}
