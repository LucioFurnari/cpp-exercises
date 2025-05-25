#include <iostream>
using namespace std;

// a) Implementar la función promedio_de_edades(edad1, edad2, edad3).
// b) Escribir un programa que solicite el ingreso por teclado de tres edades y luego
//  llame a la función creada en el punto anterior. Finalmente, informar el resultado
//  en pantalla.

int average_age(int ageOne, int ageTwo, int ageThree) {
  return (ageOne + ageTwo + ageThree) / 3;
}

int main() {
  int ageOne, ageTwo, ageThree;

  cout << "Enter the first age: " << endl;
  cin >> ageOne;
  while (ageOne < 0)
  {
    cout << "You enter a negative age, enter a positive age: " << endl;
    cin >> ageOne;
  }

  cout << "Enter the second age: " << endl;
  cin >> ageTwo;

  while (ageTwo < 0)
  {
    cout << "You enter a negative age, enter a positive age: " << endl;
    cin >> ageTwo;
  }

  cout << "Enter the third age: " << endl;
  cin >> ageThree;

  while (ageThree < 0)
  {
    cout << "You enter a negative age, enter a positive age: " << endl;
    cin >> ageThree;
  }

  cout << "The average of the ages is: " << average_age(ageOne, ageTwo, ageThree) << endl;
  return 0;
}