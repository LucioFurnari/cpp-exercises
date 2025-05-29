#include <iostream>
using namespace std;

//  Escribir un programa que imprima el menú mostrado a continuación y solicite al usuario
//  elegir una opción, la cual se debe ejecutar para luego volver a mostrar el menú repetidas
//  veces, hasta que el usuario decida salir:
//    ‘A’: Invertir número.
//    ‘B’: Sumatoria de dígitos.
//    ‘C’: Decir si son múltiplos.
//    ‘D’: Salir.
//  Dependiendo del carácter ingresado por el usuario, realizar la acción indicada en el
//  menú: 
//    A: leer un número e invertir sus dígitos para luego imprimirlo en orden inverso; 
//    B: solicitar un número e imprimir la suma de sus dígitos; 
//    C: solicitar el ingreso de dos números y decir si el primero es múltiplo del segundo;
//    D: terminar el programa.
//  Si el usuario ingresa un carácter que no es la opción D, se debe ejecutar lo que
//  corresponda y volver a mostrar el menú para permitirle elegir otra opción. Si el carácter
//  ingresado por el usuario no es A, B, C ni D, mostrarle un mensaje de error y continuar
//  mostrándole el menú y solicitando una opción hasta que ingrese una que sea válida.
//  Implementar las funciones que considere necesarias

void show_menu() {
  cout << "Select an option: " << endl;
  cout << "A: Reverse numbers." << endl;
  cout << "B: Summation of digits." << endl;
  cout << "C: Check if they are multiples." << endl;
  cout << "D: Exit the program." << endl;
}

int invert_number(int number) {
  int revNum = 0;
  while (number > 0) {
      revNum = revNum * 10 + number % 10;
      number = number / 10;
  }
  return revNum;
}

void select_option(char option) {

  switch (toupper(option))
  {
  case 'A': {
    int number {};
    cout << "Enter a number: " << endl;
    cin >> number;
    cout << "The number in reverse: " << invert_number(number) << endl;
  }
    break;
  default:
    break;
  }
}

int main() {
  char option {};

  do {
    show_menu();
    cin >> option;
    select_option(option);
  } while(toupper(option) != 'D');


  return 0;
}