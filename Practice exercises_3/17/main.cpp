#include <iostream>
using namespace std;

int add_pairs(int numbers[5]) {
  int total {0};
  for(int i=0; i < 5; i++) {
    if(numbers[i] % 2 == 0) {
      total += numbers[i];
    }
  }
  return total;
}

int main() {
  int numbers[5];
  int number;
  cout << "Enter 5 numbers: ";
  for(int p=0; p < 5; p++) {
    cin >> number;
    numbers[p] = number;
  }

  int total = add_pairs(numbers);

  cout << "The sum of all peers numbers is: " << total << endl;

  return 0;
}