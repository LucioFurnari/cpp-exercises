#include <iostream>
using namespace std;

// a) Implementar la función mostrar_suma_digitos(numero) que, dado un número
//  entero como argumento, imprima en pantalla la suma de sus dígitos. ¿Qué valor
//  retorna esta función?
// b) Escribir un programa que solicite al usuario el ingreso de un número entero, y que
//  utilizando la función del ejercicio anterior, muestre en pantalla un mensaje que
//  informe al usuario la suma de los dígitos del número ingresado.

void show_digits_sum(int number) {
  int result = { 0 };
  while(number != 0) {
    result += number % 10;
    number = number / 10;
  }
  cout << "The sum of the digits are: " << result << endl;
}

int main() {
  int number {};
  cout << "Enter a number: " << endl;
  cin >> number;

  show_digits_sum(number);
  return 0;
}