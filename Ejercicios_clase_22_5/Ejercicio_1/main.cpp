// Task 1
// Write a C++ program that allows the user to enter 5 positive integers. The program must:
// 1. Calculate and report the double of each number entered.
// 2. Report the largest of the five numbers.
// 3. If the number is even, also display its half.
// To do this, you must use at least two functions:
//  A function that receives a number and returns its double.
//  A function that receives a number and returns true if it is even and false if it is odd.
// You can add other functions if you think it is necessary.


#include <iostream>
using namespace std;

int double_number(int number) {
  return number * 2;
}

bool is_even(int number) {
  return number % 2 == 0;
}

int main() {
  int greaterNumber = 0;
  int number = 0;

  cout << "Ingrese 5 numeros: ";

  for(int i=0; i < 5; i++) {
    cin >> number;

    if(number < 0) {
      cout << "El numero no es valido, ingrese un numero positivo." << endl;
      i--;
      continue;
    }

    cout << "El doble del numero es: " << double_number(number) << endl;

    if (is_even(number)) {
      cout << "El numero es par." << endl;
    } else {
      cout << "El numero es impar." << endl;
    }

    if (number > greaterNumber) {
      greaterNumber = number;
    }
  }

  cout << "El mayor numero ingresado es: " << greaterNumber << endl;
  return 0;
}