#include <iostream>
#include <unordered_map>
using namespace std;

// Eliminar duplicados: crear una función que elimine los elementos duplicados de un
// arreglo de N números enteros, dejando una única ocurrencia de cada número

// void remove_duplicates(int arr[], int length) {

// }

int main() {
  unordered_map<int, int> listMap;
  const int length = 6;
  int list[] = {2,5,2,5,5,1};

  for(int n=0; n < length; n++) {
    cout << list[n] << " ";
  }
  for(int i=0; i < length; i++) {
    if(listMap.count(list[i]) > 0) {
      for(int j=i; i < length-1; j++)
        list[j] = list[j+1];
    } else {
      listMap[list[i]] = 1;
    }
  }
  cout << "Number of duplicated 2: " << listMap[2] << endl;

  return 0;
}