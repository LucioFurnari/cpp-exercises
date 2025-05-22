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