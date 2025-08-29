#include <iostream>
using namespace std;

void delete_number(int arr[], int size, int number) {
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
  delete_number(arr, size, 2);
  return 0;
}