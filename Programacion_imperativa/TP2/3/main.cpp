#include <iostream>
using namespace std;

// Escribir un programa en C++ que realice una búsqueda binaria en un arreglo de números enteros donde algunos 
// números pueden llegar a repetirse. El programa debe encontrar la primera aparición del número buscado e 
// informarlo en pantalla.


int binary_search(int arr[], int value, int dl) {
  int start = 0;
  int end = dl-1;

  while(start <= end) {
    int mid = (start+end) / 2;
    if(arr[mid] == value) {
      return mid;
    } else {
      if(arr[mid] > value) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }
  }

  return -1;
}

int main() {
  int dl = 10;
  int arr[10] = {2,2,1,3,5,6,8,8,9,4};

  int result = binary_search(arr, 8, dl);
  cout << "Result: " << result;
  return 0;
}