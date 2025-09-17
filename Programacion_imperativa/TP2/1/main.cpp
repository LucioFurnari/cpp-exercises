#include <iostream>
#include <string>
using namespace std;

// Escribir un programa en C++ que realice una búsqueda secuencial en un arreglo desordenado de cadena de 
// caracteres. El programa debe solicitar al usuario que ingrese, por teclado, nombres de diferentes colores (elegir 
// una condición de corte apropiada). Éstos deben ser almacenados en un arreglo. Por otra parte, se debe ofrecer 
// una opción de búsqueda, donde se solicite al usuario ingresar el nombre de un color e informar si dicho color se 
// encuentra o no en el arreglo.

void enter_colors(string arr[], int df) {
  string color;
  for(int i=0; i<df; i++) {
    cout << "Enter a color: ";
    getline(cin, color);

    arr[i] = color;
  }
}

bool find_color(string arr[], int df, string color) {
  bool find = false;
  for(int r=0; r<df; r++) {
    if(arr[r] == color) find=true;
  }
  return find;
}

int main() {
  const int DF = 5;
  string color;
  string color_list[DF] = {};
  enter_colors(color_list, DF);
  cout << "Search for a color: ";
  getline(cin, color);
  bool finded = find_color(color_list, DF, color);
  if (!finded) {
    cout << "Color not found." << endl;
  } else {
    cout << "Color found." << endl;
  }
  return 0;
}