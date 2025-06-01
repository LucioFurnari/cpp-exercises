#include <iostream>
#include <string>
using namespace std;

// Escribe un programa en C++ que simule la gestión de una cuenta bancaria. El
// programa debe permitir al usuario realizar las siguientes operaciones:
//  ● Ingresar un monto a la cuenta.
//  ● Retirar un monto de la cuenta.
//  ● Mostrarel saldo actual de la cuenta.
//  Requisitos:
//  ● Utiliza una variable global para almacenar el saldo total de la cuenta.
//  ● Implementa funciones con variables locales para realizar cada una de las
//  operaciones mencionadas.
//  ● Asegúrate de manejar adecuadamente los casos donde no hay fondos suficientes
//  para realizar un retiro.

float balance = { 0 };

void add_amount(float amount) {
  balance += amount;
}

void remove_amount(float amount) {
  // Check if have money.
  if (balance == 0 || balance - amount < 0) {
    cout << "You have no money." << endl;
  }
  balance -= amount;
}

void show_menu() {
  cout << "A: Enter an amount into the account." << endl;
  cout << "B: Withdraw an amount from the account." << endl;
  cout << "C: Display the current account balance." << endl;
  cout << "D: Exit the program." << endl;
}

int main() {
  char option {};

  cout << "Welcome, what operation do you want to do: " << endl;

  do {
    show_menu();
    cin >> option;
  } while(toupper(option) != 'D');

  return 0;
}