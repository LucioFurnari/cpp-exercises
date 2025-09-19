#include <iostream>
using namespace std;

// Escribir un programa en C++ que realice una búsqueda secuencial en un arreglo de números enteros ordenado 
// de menor a mayor. El programa debe solicitar al usuario que ingrese, por teclado, una serie de números (elegir 
// una condición de corte apropiada). Éstos deben ser almacenados en forma ordenada en un arreglo. Por otra 
// parte, se debe ofrecer una opción de búsqueda, donde se solicite al usuario ingresar un número e informar si se 
// encuentra o no en el arreglo. 

void order_arr(int arr[], int & dl, int number) {
  int pos {dl};

  arr[pos] = number;
  while(number < arr[pos-1] && pos > 0 ) {
    arr[pos] = arr[pos-1];
    arr[pos-1] = number;
    pos--;
  }
  dl++;
}

bool find_number(int arr[], int & dl, int number) {
  for(int i=0; i<dl; i++) {
    if(number == arr[i]) {
      return true;
    }
  }

  return false;
}


int main() {
  const int DF {5};
  int dl {0};
  int user_numbers[DF] {};
  int number {};
  int value {};
  char selection = 'n';

  for(int i=0; i<DF; i++) {
    cout << "Enter a number: " << endl;
    cin >> number;
    order_arr(user_numbers, dl, number);
  }


  cout << "Wanna find a number ? write y or n" << endl;
  cin >> selection;
  
  if(selection == 'y') {
    cout << "Enter the number to find: ";
    cin >> value;
    if(find_number(user_numbers, dl, value)) {
      cout << "The number was found." << endl;
    } else {
      cout << "The number was not found" << endl;
    }
  } else {
    cout << "Have a nice day!" << endl;
  }

  return 0;
}