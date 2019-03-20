#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int integer, char **array)
{
  std::cout << "Well, now I'm printing this and because of what I have on my right, I am creating new line" << std::endl;

  if (integer != 1)
  {
    std::cout << "You entered " << integer << " arguments \n";
  };

  for (int i = 0; i < integer; ++i)
  {
    std::cout << array[i] << "\n";
  }

  return 0; //
}