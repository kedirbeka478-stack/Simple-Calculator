#include "std_lib_facilities.h"

double calculator(double a, double b, char c) {
  switch (c) {
    case '+':
      return a + b;

    case '-':
      return a - b;

    case '*':
      return a * b;

    case '/':
      return a / b;

    default:
      return 0;
  }
}

int main() {
  double num1, num2;
  char op;
  cout << "**************************** Simple Calculator ****************************\n";
  cout << endl;

  cout << "Enter two numbers.\n";
  cin >> num1 >> num2;

  cout << "Enter the operator: ";
  cin >> op;
  cout << endl;

  cout << "Result: " << calculator(num1, num2, op);
}