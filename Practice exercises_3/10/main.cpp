#include <iostream>
using namespace std;

//  Escribí un programa que solicite el ingreso de números enteros, finalizando luego de
//  leer un número para el cual la suma de sus dígitos sea menor que 10 o mayor que 50.
//  Informar la cantidad de números impares leídos. Utilizá las funciones es_par(número) y
//  suma_dígitos(número) implementadas anteriormente.

bool check_number(int & number) {
  int digits { 0 };
  while(number > 0) {
    digits += number % 10;
    number = number / 10;
  }

  return (digits < 10 || digits > 50);
}

void count_odd_numbers(int number, int & counter) {
  if (number % 2 != 0) {
    counter++;
  }
}
int main() {
  int number {0};
  int oddNumbersCounter { 0 };

  do {
    cout << "Enter a number: ";
    cin >> number;
    count_odd_numbers(number, oddNumbersCounter);
  } while(!check_number(number));

  cout << "The number of odd number you enter is: " << oddNumbersCounter << endl;
  return 0;
}