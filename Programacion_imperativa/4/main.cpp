#include <iostream>
using namespace std;

int main() {
  const int MAX {5};
  int logical_dimension {1};
  int arr[MAX];
  int number {};

  cout << "Enter a number: " << endl;
  cin >> number;
  arr[0] = number;

  for(int i=1; i<MAX; i++) {
    cout << "Enter a number: " << endl;
    cin >> number;
    
    int pos = logical_dimension;
    while (pos > 0 && number < arr[pos-1])
    {
      arr[pos] = arr[pos-1];
      pos--;
    }
    arr[logical_dimension] = number;
    logical_dimension++;
  }

  for (int i = 0; i < MAX; i++)
  {
    cout << arr[i] << endl;
  }  
  return 0;
}
