#include <iostream>
using namespace std;


// Escribe un programa que sume dos matrices de 3x3 y muestre la matriz resultante.

int main() {
  const int row = 3;
  const int column = 3;

  int matrixOne[row][column] = {
    {2,3,6},
    {1,4,7},
    {8,5,2},
  };

  int matrixTwo[row][column] = {
    {2,3,6},
    {1,4,7},
    {8,5,2},
  };

  int matrixResult[row][column] = {};

  for(int r=0; r<row; r++) {
    for(int c=0; c<column; c++) {
      matrixResult[r][c] = matrixOne[r][c] + matrixTwo[r][c];
    }
  };

  for(int r=0; r<row; r++) {
    for(int c=0; c<column; c++) {
      cout << matrixResult[r][c] << endl;
    }
  };

  return 0;
}
