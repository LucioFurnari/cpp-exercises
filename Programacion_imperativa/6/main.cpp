#include <iostream>
using namespace std;

void plus_one(int arr[], const int size) {
  for(int i=0; i < size; i++) {
    cout << "Numero: " << arr[i] << endl;
    arr[i] = arr[i]+1;
    cout << "Numero mas uno: " << arr[i] << endl;
  }
}

int main() {
  const int size = 3;
  int arr[3] = {2,5,6};
  plus_one(arr, size);
  return 0;
}