#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main()
{
  // placeholder for calculator
  std::string firstNumber("Enter first number: ");
  std::string secondNumber("Enter second number: ");
  std::string num1, num2;

  std::cout << firstNumber;
  getline(std::cin, num1);

  std::cout << secondNumber;
  getline(std::cin, num2);

  int num1toNumber = std::stoi(num1);
  int num2toNumber = std::stoi(num2);

  std::string operation("What operation you want to perform? (A)dd, (S)ubstract, (M)ultiply, (D)ivide?\n");
  std::string func;

  std::cout << operation;
  getline(std::cin, func);

  std::string add("A");

  if (operation == add)
  {
    printf("%d + %d = %d\n", num1toNumber, num2toNumber, (num1toNumber + num2toNumber));
  }

  return 0;
}