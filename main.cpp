#include <iostream>
#include <string>

int main()
{
  int i = 0;
  std::string firstname,surname;
  std::cout << "What is your name? f" << std::endl;
  std::cin >> firstname >> surname << std::endl;
  std::cout << "Hi! Your name is " << firstname << " " << surname " maybe?" << std::endl;
  return 0;
}
