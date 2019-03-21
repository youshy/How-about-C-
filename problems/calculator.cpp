#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

using namespace std;

int main()
{
  // placeholder for calculator
  string firstNumber("Enter first number: ");
  string secondNumber("Enter second number: ");
  string num1, num2;

  cout << firstNumber;
  getline(cin, num1);

  cout << secondNumber;
  getline(cin, num2);

  double num1toNumber = stod(num1);
  double num2toNumber = stod(num2);

  string operation("What operation you want to perform? (A)dd, (S)ubstract, (M)ultiply, (D)ivide?");
  string whattodo;

  cout << operation << endl;
  getline(cin, whattodo);

  if (whattodo == "A")
  {
    printf("%.0f + %.0f = %.0f\n", num1toNumber, num2toNumber, (num1toNumber + num2toNumber));
  }
  else if (whattodo == "S")
  {
    printf("%.0f - %.0f = %.0f\n", num1toNumber, num2toNumber, (num1toNumber - num2toNumber));
  }
  else if (whattodo == "M")
  {
    printf("%.0f * %.0f = %.0f\n", num1toNumber, num2toNumber, (num1toNumber * num2toNumber));
  }
  else if (whattodo == "D")
  {
    printf("%.0f / %.0f = %.2f\n", num1toNumber, num2toNumber, (num1toNumber / num2toNumber));
  }
  else
  {
    printf("You haven't told me what you want to do...");
  }

  return 0;
}