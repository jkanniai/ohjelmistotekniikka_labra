#include <iostream>
#include <string>

int main()
{
  std::string firstname,surname;
  std::cout << "What is your name?" << std::endl;
  std::cin >> firstname >> surname << std::endl;
  std::cout << "Hi! Your name is " << firstname << " " << surname " maybe?" << std::endl;
  return 0;
}
