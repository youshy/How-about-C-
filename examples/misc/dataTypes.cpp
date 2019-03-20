#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

// Global variables:
// Hungarian notation - look it up!
int g_iRandNum = 0;

// Value that won't be changeable
const double PI = 3.14159;

int main()
{
  bool bMarried = false;
  bool bEngaged = true;

  char chMyGrade = 'A';

  // 65535 - maximum value, 0 - minimum value
  unsigned short int u16Age = 43;

  // 32767 - maximum value, -32767 - minimum value
  short int siWeight = 180;

  // refer to https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm

  // 4 bytes
  int nDays = 7;

  // 4 bytes
  long lBigNum = 1298212;

  // 4 bytes
  float fPi = 3.14159;

  // 8 bytes
  double dbBigFloat = 1.123234345;

  // 8 bytes
  long double ldPi = 3.14159265359;

  // automatic data type
  auto whatWillBeTrue = "My name";

  // below can be used for each datatype to check it's limits
  std::cout << "Minimum double " << std::numeric_limits<double>::min() << '\n';

  std::cout << "Maximum double " << std::numeric_limits<double>::max() << '\n';

  std::cout << "Minimum int " << std::numeric_limits<int>::min() << '\n';

  std::cout << "Maximum int " << std::numeric_limits<int>::max() << '\n';

  std::cout << "Minimum short int " << std::numeric_limits<short int>::min() << '\n';

  std::cout << "Maximum short int " << std::numeric_limits<short int>::max() << '\n';

  // check how many bytes
  std::cout << "int size " << sizeof(int) << " bytes" << '\n';

  // precision
  float fBigFloat = 1.1111111111;
  float fBigFloat2 = 1.1111111111;

  // six points of precision
  float fFloatSum = fBigFloat + fBigFloat2;

  printf("fFloatSum Precision : %.10f\n", fFloatSum);

  // let's check double
  double dbBigDouble = 1.11111111111111111111;
  double dbBigDouble2 = 1.1111111111;

  // ten points of precision
  double dbDoubleSum = dbBigDouble + dbBigDouble2;

  printf("dbDoubleSum Precision : %.20f", dbDoubleSum);

  return 0;
}