#include <iostream>
using namespace std;

// Implementar una función eliminar_ocurrencias que reciba un arreglo de números enteros, su dimensión lógica 
// y un número por parámetro y elimine todas las ocurrencias de dicho número que existan en el arreglo. 

void delete_occurrences(int arr[], int size, int number) {
  for(int i=0; i < size; i++) {
    if(arr[i] == number) {
      for(int k=i; k < size; k++) {
        arr[k] = arr[k+1];
      }
      i--;
      size--;
    }
  }

  for(int l=0; l<size; l++) {
    cout << arr[l] << ", ";
  }
}

int main() {
  const int size {5};
  int arr[size] = {1,2,2,5,9};
  delete_occurrences(arr, size, 2);
  return 0;
}