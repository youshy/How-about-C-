#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main()
{
  // provided length and first member
  int arrnNums[10] = {1};

  int arrNums2[] = {1, 2, 3};

  int arrNums3[5] = {8, 9};

  std::cout << "1st value: " << arrnNums[0] << std::endl;
  arrnNums[0] = 11;
  std::cout << "1st value changed: " << arrnNums[0] << std::endl;
  std::cout << "1st array size: " << sizeof(arrnNums) << std::endl;

  return 0;
}