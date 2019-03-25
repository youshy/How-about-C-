#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main()
{
  // Conditions: 1 - 18, 21, 50, > 65
  std::string sAge = "0";
  std::cout << "Enter your age: ";
  getline(std::cin, sAge);
  int nAge = std::stoi(sAge);

  if ((nAge >= 1) && (nAge <= 18))
  {
    std::cout << "Important Birtday!\n";
  }
  else if ((nAge == 21) || (nAge == 50))
  {
    std::cout << "Important Birtday!\n";
  }
  else if (nAge >= 65)
  {
    std::cout << "Important Birtday!\n";
  }
  else
  {
    std::cout << "Well, it not that important birtday!\n";
  }

  return 0;
}