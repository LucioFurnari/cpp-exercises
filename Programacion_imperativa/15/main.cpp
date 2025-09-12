#include <iostream>
using namespace std;

// Escribe un programa que busque un número en una matriz dada y devuelva su posición. Si el número no se 
// encuentra, debe indicarlo.

int find_number(int matrix[][3], int rows, int columns, int value) {

  for(int r=0; r<rows; r++) {
    for(int c=0; c<columns; c++) {
      if(matrix[r][c] == value) {
        
      }
    }
  }

  return -1;
}


int main() {
  const int rows = 3;
  const int columns = 3;
  int matrix[rows][columns] {
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };



  return 0;
}