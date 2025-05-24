#include <iostream>
using namespace std;

// a) Escribir la función es_par(numero) que determine si el número entero que recibe
//  a través del parámetro “numero” es o no es par. La función deberá retornar 1 si
//  “numero” efectivamente es par y 0 en caso contrario.
// b) Escribir un programa que solicite al usuario el ingreso de un número entero, y que
//  utilizando la función, es_par(numero) del ejercicio anterior, determine si el
//  número ingresado es par o impar, imprimiendo un mensaje que lo informe al
//  usuario por pantalla.

int is_even(int number) {
  if (number % 2 == 0) {
    return 1;
  }
  return 0;
}

int main() {
  int number {};
  cout << "Enter a number: " << endl;
  cin >> number;

  int result = is_even(number);
  if (result == 1) {
    cout << "Your number is even." << endl;
  } else {
    cout << "Your number is odd." << endl;
  }
}