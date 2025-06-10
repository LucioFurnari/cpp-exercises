#include <iostream>
using namespace std;

// Ordenamiento de números:
//  a) Desarrolla una función que ordena en forma ascendente los elementos de un
//  arreglo de 10 números enteros.
//  Por ejemplo, el arreglo con los elementos [2,5,1,4,4,8,12,9,7,11] quedaría
//  ordenado como [1,2,4,4,5,7,8,9,11,12]
//  b) ¿Qué debería modificar del algoritmo anterior para que los ordene en orden
//  descendente?

void sort_ascending(int arr[], int l) {
  for(int i=0; i < l; i++) {
    int minNumber = i;

    for(int j=i+1; j < l; j++) {
      if(arr[j] < arr[minNumber]) {
        minNumber = j;
      }
    }

    if(minNumber != i) {
      int temp = arr[minNumber];
      arr[minNumber] = arr[i];
      arr[i] = temp;
    }
  }
}

int main() {
  const int longArr = 10;
  int list[10] = {2,5,1,4,4,8,12,9,7,11};

  sort_ascending(list, longArr);

  for(int k=0; k < 10; k++) {
    cout << list[k] << " ";
  }

  return 0;
}