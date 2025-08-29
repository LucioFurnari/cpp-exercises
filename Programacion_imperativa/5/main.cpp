#include <iostream>
using namespace std;

void find_element(int arr[], const int size, int number) {
  bool found = false;

  for(int i=0; i < size; i++) {
    if(arr[i] == number) {
      found = true;
      break;
    }
  }

  if(found) cout << "Number founded!" << endl;
  else cout << "Number not found" << endl;
}

int main() {
  const int size = 5;
  int arr[size] = {1,2,4,9,7};
  find_element(arr, size, 8);
  return 0;
}