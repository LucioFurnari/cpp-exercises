#include <iostream>
using namespace std;

// Escribe un programa que busque un número en una matriz dada y devuelva su posición. Si el número no se 
// encuentra, debe indicarlo.

int find_number(int matrix[][3], int rows, int columns, int value, int & rowPos, int & columnPos) {

  for(int r=0; r<rows; r++) {
    for(int c=0; c<columns; c++) {
      if(matrix[r][c] == value) {
        rowPos = r;
        columnPos = c;
      }
    }
  }

  return -1;
}


int main() {
  const int rows = 3;
  const int columns = 3;
  int rowPos = -1;
  int columnPos = -1;
  int matrix[rows][columns] {
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };
  find_number(matrix, rows, columns, 5, rowPos, columnPos);
  if(rowPos > 0) {
    cout << "The number is in the row: " << rowPos << " and column: " << columnPos << endl;
  } else {
    cout << "The number could not be found" << endl;
  }

  return 0;
}