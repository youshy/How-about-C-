#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main()
{
  std::string sAge = "0";
  std::cout << "Enter your age: ";
  getline(std::cin, sAge);
  int nAge = std::stoi(sAge);

  // No curly-brackets because I've played Code Golf here
  if ((nAge < 5))
    std::cout << "Too young for school\n";
  else if (nAge == 5)
    std::cout << "Go to Kindergarden\n";
  else if ((nAge >= 6) && (nAge <= 17))
    std::cout << "Go to grade " << nAge - 5 << std::endl;
  else
    std::cout << "Go to college!\n";

  return 0;
}