#include <iostream>
#include <string>
using namespace std;

//  a) Implementar la función mayuscula(cadena) que transforme una cadena pasada
//    por parámetro en mayúsculas.
//  b) Escribir un programa que solicite el ingreso por teclado de una cadena y luego
//    llame a la función creada en el punto anterior para informar el resultado en
//    pantalla.


void change_to_capital(string & text) {
  for(int i=0; i < text.length(); i++) {
    text[i] = toupper(text[i]);
  }
}

int main() {
  string text {};
  cout << "Write a text: ";
  cin >> text;
  change_to_capital(text);
  cout << "The text in capital: " << text << endl;
  return 0;
}