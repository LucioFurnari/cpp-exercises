#include <iostream>
using namespace std;

int number_of_occurrences(int arr[], const int size, int number) {
  int count {0};

  for(int i=0; i < size; i++) {
    if(arr[i] == number) count++;
  }

  return count;
}

int main() {
  const int size {5};
  int arr[size] = {2,2,3,9,8};
  int count = number_of_occurrences(arr, size, 2);
  if(count>0) {
    cout << "The number appeared : " << count << " times" << endl;
  } else {
    cout << "The number does not appear" << endl;
  }
  return 0;
}