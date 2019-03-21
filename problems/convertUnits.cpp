#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

int main()
{
  // km = miles * 1.60934

  string provideValue("Provide value: ");
  string sValue;

  cout << provideValue;
  getline(cin, sValue);

  double value = stod(sValue);

  string operation("Do you want to convert (M)iles to kilometers or (K)ilometers to miles?");
  string option;

  cout << operation << endl;
  getline(cin, option);

  if (option == "M")
  {
    printf("%.2f miles is %.2f kilometers", value, value * 0.62137);
  }
  else if (option == "K")
  {
    printf("%.2f kilomenters is %.2f miles", value, value * 1.60934);
  }
  else
  {
    printf("Well, you haven't provided the option...");
  }

  return 0;
}