#include <iostream>
#include <string>
using namespace std;

//  a) Implementar la función invertir_cadena(cadena) que muestre una cadena pasada
//    por parámetro en orden inverso.
//  b) Escribir un programa que solicite el ingreso por teclado de una cadena y luego
//    llame a la función creada en el punto anterior para informar el resultado en
//    pantalla.

string reverse_string(string text) {
  string result {};
  for (int i=text.length()-1; i >= 0; i--) {
    result += text[i];
  }
  return result;
}

int main() {
  string text {};
  cout << "Enter a text to reverse it: ";
  cin >> text;
  cout << "The reverse of the text is: " << reverse_string(text) << endl;
  return 0;
}