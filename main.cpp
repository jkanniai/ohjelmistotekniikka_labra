#include <iostream>
#include <string>

int main()
{
  int i = 0;
  std::string firstname,surname;
  std::cout << "What is your name?" << std::endl;
  std::cin >> firstname >> surname;
  std::cout << "Hi! Your name is " << firstname << " " << surname << " maybe?" << std::endl << std::endl;
  return 0;
}
