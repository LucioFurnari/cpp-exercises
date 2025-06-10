#include <iostream>
using namespace std;

// Ordenamiento de números:
//  a) Desarrolla una función que ordena en forma ascendente los elementos de un
//  arreglo de 10 números enteros.
//  Por ejemplo, el arreglo con los elementos [2,5,1,4,4,8,12,9,7,11] quedaría
//  ordenado como [1,2,4,4,5,7,8,9,11,12]
//  b) ¿Qué debería modificar del algoritmo anterior para que los ordene en orden
//  descendente?

// void sort_ascending(int list[10]) {

// }

int main() {
  int list[10] = {2,5,1,4,4,8,12,9,7,11};

  for(int i=0; i < 10; i++) {
    int minNumber = i;

    for(int j=i+1; j < 10; j++) {
      if(list[j] < list[minNumber]) {
        minNumber = j;
      }
    }

    if(minNumber != i) {
      int temp = list[minNumber];
      list[minNumber] = list[i];
      list[i] = temp;
    }
  }

  for(int k=0; k < 10; k++) {
    cout << list[k] << " ";
  }

  return 0;
}
// 2,5,1,4,4,8,12,9,7,11 i=0
// 1,5,2,4,4,8,12,9,7,11 i=1