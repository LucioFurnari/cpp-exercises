#include <iostream>
using namespace std;

// Escribir las sentencias necesarias para: 
// A. Declarar un arreglo de enteros de 7 filas y 10 columnas 
// B. Asignar el valor 105 a la posición que se encuentra en la segunda fila, quinta columna. 
// C. Asignar en todas las posiciones de la cuarta fila el valor 5. 
// D. Imprimir todos los valores de la matriz, colocando cada fila en una nueva línea. 
// E. Permutar las columnas 3 y 5. 
// F. Sumar todos los elementos de las filas 2 y 6. 
// G. Imprimir todos los valores de la tercera columna. 
// H. Hallar en qué fila y columna se encuentra almacenado el mayor elemento.


void print_values(int arr[7][10]) { // D. Imprimir todos los valores de la matriz, colocando cada fila en una nueva línea. 
  for(int r = 0; r < 7; r++) {
    for(int c = 0; c < 10; c++) {
      cout << arr[r][c] << ", ";
    }
    cout << endl;
  }
}

void change_columns(int arr[7][10]) { // E. Permutar las columnas 3 y 5.
  for(int r=0; r<7; r++) {
    int temp = arr[r][3];
    arr[r][3] = arr[r][5];
    arr[r][5] = temp;
  }
}

int add_elements_in_rows(int arr[7][10]) {
  int result = 0;
  for(int i=0; i<10; i++) {
    result = result + (arr[1][i] + arr[5][i]);
  }

  return result;
}


int main() {
  int rows = 7;
  int columns = 10;

  int arr[7][10] = {0}; // Initialize all elements to 0

  // B. Asignar el valor 105 a la posición que se encuentra en la segunda fila, quinta columna.
  arr[1][4] = 105;

  // C. Asignar en todas las posiciones de la cuarta fila el valor 5.
  for (int c = 0; c < columns; c++) {
    arr[3][c] = 5;
  }

  print_values(arr);
  change_columns(arr);
  print_values(arr);

  cout << "Suma de la fila 2 y 6: " << add_elements_in_rows(arr) << endl;
  return 0;
}