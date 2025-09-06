#include <iostream>
using namespace std;

void search_product(int products[][10], int list[], int & listDl, int columnDl, int rowDl) {

  for(int i=0; i<listDl; i++) {
    for(int c=0; c<columnDl; c++) {
      for(int r=0; r<rowDl; r++) {
        if(list[i] == products[c][r]) {
          cout << "Index: " << i << endl;
          cout << "Numero: " << products[c][r] << endl;
          cout << "Dl: " << listDl << endl;
          for(int l=i; l<listDl; l++) {
            list[l] = list[l+1];
          }
          listDl--;
          continue;
        }
      }
    }
  }

}

int main() {
  
  int products[3][10] = {
    {1,2,3,4,5,6,7,8,9,10},
    {11,12,13,14,15,16,17,18,19,20},
    {21,22,23,24,25,26,27,28,29,30},
  };
  int columnDl = 3;
  int rowDl = 10;

  int list[30] = {1,6,8,74,31,56,98,7,15,54,69,37,12,45,87};
  int listDl = 15;
  cout << "Dl: " << listDl << endl;
  search_product(products, list, listDl, columnDl, rowDl);
  cout << "Dl: " << listDl << endl;
  for(int i=0; i<listDl; i++) {
    cout << list[i] << ", ";
  }

  return 0;
}