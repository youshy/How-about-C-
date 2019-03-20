#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main()
{

  std::string sQuestion("Enter first number: ");
  std::string sNum1, sNum2;
  std::cout << sQuestion;

  //receive user input
  getline(std::cin, sNum1);

  std::cout << "Enter second number: ";
  getline(std::cin, sNum2);

  // changes string to integer
  int nNum1 = std::stoi(sNum1);
  int nNum2 = std::stoi(sNum2);

  printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));

  return 0;
}