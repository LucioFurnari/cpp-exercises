#include <iostream>
using namespace std;

// a) Implementar la función suma_digitos(numero) que, dado un número entero
//  como argumento, retorne la suma de sus dígitos. Por ejemplo, si el argumento de
//  la función es 438, deberá retornar 15 (pues 4+3+8=15).
// b) Escribir un programa que solicite al usuario el ingreso de un número entero, y que
//  utilizando la función del ejercicio anterior, muestre en pantalla un mensaje que
//  informe al usuario la suma de los dígitos del número ingresado.

int sum_digits(int number) {
  int result = { 0 };
  while(number != 0) {
    result += number % 10;
    number = number / 10;
  }
  return result;
}

int main() {
  int number {};
  cout << "Enter a number: " << endl;
  cin >> number;

  cout << "The sum of the digits of the number you enter is: " << sum_digits(number) << endl;

  return 0;
}