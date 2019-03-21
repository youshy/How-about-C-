#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

// because I'm lazy
using namespace std;

int main()
{
  // placeholder for calculator
  string firstNumber("Enter first number: ");
  string secondNumber("Enter second number: ");
  string sNum1, sNum2;

  cout << firstNumber;
  getline(cin, sNum1);

  cout << secondNumber;
  getline(cin, sNum2);

  double num1 = stod(sNum1);
  double num2 = stod(sNum2);

  string operation("What operation you want to perform? (A)dd, (S)ubstract, (M)ultiply, (D)ivide?");
  string option;

  cout << operation << endl;
  getline(cin, option);

  if (option == "A")
  {
    printf("%.2f + %.2f = %.2f\n", num1, num2, (num1 + num2));
  }
  else if (option == "S")
  {
    printf("%.2f - %.2f = %.2f\n", num1, num2, (num1 - num2));
  }
  else if (option == "M")
  {
    printf("%.2f * %.2f = %.2f\n", num1, num2, (num1 * num2));
  }
  else if (option == "D")
  {
    printf("%.2f / %.2f = %.2f\n", num1, num2, (num1 / num2));
  }
  else
  {
    printf("You haven't told me what you want to do...");
  }

  return 0;
}