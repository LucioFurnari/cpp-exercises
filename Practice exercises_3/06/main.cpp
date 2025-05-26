#include <iostream>
using namespace std;

// a) Implementá la función maximo(num_1, num_2) que calcule y retorne el máximo
//    entre num_1 y num_2, ambos positivos.
// b) Luego, usá esa función para implementar un programa que solicite la lectura de 5
//    números que sean positivos, en caso de ingresar uno negativo volver a solicitar un
//    nuevo número, e informe el máximo número leído.

int maximum_number(int numberOne, int numberTwo) {
  if (numberOne > numberTwo) {
    return numberOne;
  }
  return numberTwo;
}

int main() {
  int number {0};
  int userNumber {};
  cout << "Enter 5 numbers: " << endl;

  for(int i=0; i < 5; i++) {
    cin >> userNumber;
    while(userNumber < 0) {
      cout << "The number you enter is negative, enter a positive number: " << endl;
      cin >> userNumber;
    }
    number = maximum_number(number, userNumber);
  }
  cout << "The maximum number is: " << number << endl;
  return 0;
}