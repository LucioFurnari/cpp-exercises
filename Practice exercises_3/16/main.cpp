#include <iostream>
using namespace std;

// Escribir un programa que solicite cinco números enteros, los almacene en un arreglo
// y luego calcule y muestre en pantalla el promedio de esos números.

void calculate_average(int numbers[5]) {
  int total {0};

  for(int k=0; k < 5; k++) {
    total += numbers[k];
  }

  cout << "The average of the 5 numbers is: " << (total/5) << endl;
}

int main() {
  int listNumber[5];
  int number {};

  for(int i=0; i < 5; i++) {
    cout << "Enter a number: ";
    cin >> number;
    listNumber[i] = number;
  }

  calculate_average(listNumber);
  return 0;
}