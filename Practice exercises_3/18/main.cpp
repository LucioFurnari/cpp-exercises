#include <iostream>
using namespace std;

// Escribir una función que reciba un arreglo de enteros y devuelva el promedio de los
// elementos que se encuentren en posiciones impares del arreglo

int get_average(int numbers[10]) {
  int result {0};
  for(int i=1; i < 10; i+=2) {
    result += numbers[i];
  }
  return result / 5;
}

int main() {
  int listOfNumber[10];

  cout << "Enter 10 numbers: " << endl;
  for(int n=0; n < 10; n++) {
    cout << "Number " << n << ": ";
    cin >> listOfNumber[n];
  }

  cout << "The average of the numbers in the odd position is: " << get_average(listOfNumber) << endl;
  return 0;
}