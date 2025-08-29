#include <iostream>
using namespace std;

// Escribir un programa que permita al usuario ingresar números enteros positivos (los números ingresados no 
// deben almacenarse). Al finalizar, informar la cantidad de veces que apareció cada dígito (del 0 al 9) en todos los 
// números. 
// Ejemplo: Si el usuario ingresa los números 1156, 23, 73364, 988, 1003, 5, se debe informar que el 0 apareció 2 
// veces, el 1 apareció 3 veces, el 2 apareció 1 vez, el 3 apareció 4 veces, etc.


int main() {
  int number;
  const int size = 10;
  int result;

  int count[size] = {0,0,0,0,0,0,0,0,0,0};

  for(int i=0; i < 3; i++) {
    cout << "Ingresa un numero: " << endl;
    cin >> number;

    if(number > 0) {
      while (number > 0) {
      result = number % 10;
      number = number / 10;

      count[result] = count[result] + 1;
      }
    } else {
      i--;
    }

  }

  for(int i=0; i < size; i++) {
    cout << "El numero " << i << " aparecio: " << count[i] << " veces." << endl;
  }
  return 0;
}