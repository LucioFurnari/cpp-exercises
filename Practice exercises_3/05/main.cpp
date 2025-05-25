#include <iostream>
#include <string>
using namespace std;

// a) Implementar la función cantidad_vocales(cadena), la cual debe informar la
//    cantidad de vocales sin tilde que contiene la cadena pasada por parámetro,
//    independientemente si son minúsculas o mayúsculas.
// b) Escribir un programa que solicite el ingreso por teclado de una cadena y luego
//    llame a la función creada en el punto anterior. Finalmente, informar el resultado
//    en pantalla.

int number_vowels(string text) {
  int total { 0 };
  for(size_t i = 0; i < text.length(); i++) {
    if(tolower(text[i]) == 'a' || tolower(text[i]) ==  'e' || tolower(text[i]) == 'i' || tolower(text[i]) == 'o' || tolower(text[i]) == 'u') {
      total++;
    }
  }
  return total;
}

int main() {
  string text {};
  cout << "Enter a text: " << endl;
  getline(cin, text);

  cout << "The text have: " << number_vowels(text) << " vowels." << endl;
  return 0;
}