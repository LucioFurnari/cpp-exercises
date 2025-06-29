#include <iostream>
using namespace std;

// Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
// The program computes the answer on the two numbers the user entered and prints the results. If the user enters an invalid symbol, the program should print nothing.


double enter_value() {
  double number;
  cout << "Enter a double value: ";
  cin >> number;
  return number;
}

char get_option() {
  char option;
  cout << "Enter one of the following mathematical symbols  +, -, *, or /" << endl;
  cin >> option;
  return option;
}

void calculate_doubles(double & numberOne, double & numberTwo, char & option) {
  if(option != '+' && option != '-' && option != '*' && option != '/') {
    cout << "You enter an invalid symbol" << endl;
  }
  
  switch (option)
  {
  case '+':
    cout << "The sum of the two numbers is: " << (numberOne + numberTwo) << endl;
    break;
  case '-':
    cout << "The rest of the two numbers is: " << (numberOne - numberTwo) << endl;
    break;
  case '*':
    cout << "The multiplication of the two numbers is: " << (numberOne * numberTwo) << endl;
    break;
  case '/':
    cout << "The division of the two numbers is: " << (numberOne / numberTwo) << endl;
    break;
  default:
    break;
  }
  
}

int main() {
  double numberOne = enter_value();
  double numberTwo = enter_value();
  char option = get_option();
  calculate_doubles(numberOne, numberTwo, option);

  return 0;
}