#include <iostream>
using namespace std;


// En un comercio de artículos electrónicos se lleva un registro de los precios de los productos disponibles. El 
// administrador desea ordenar estos precios de menor a mayor para facilitar su visualización. Como desarrollador, 
// te han solicitado implementar un programa en C++ que realice esta tarea utilizando el algoritmo de 
// ordenamiento por inserción. 

// Requerimientos: 
// • El programa debe permitir al usuario ingresar la cantidad de productos y sus respectivos precios.
// • Se debe implementar el algoritmo de ordenamiento por inserción para ordenar los precios en orden 
// ascendente. 
// • Una vez ordenados, el programa debe mostrar los precios ordenados en pantalla. 
// Instrucciones adicionales: 
// • Utilizar un arreglo para almacenar los precios. 
// • Implementar una función separada que realice el ordenamiento por inserción. 
// • La cantidad de productos y los precios deben ser ingresados por el usuario.

void sort_array(int arr[], int dl) {
  for(int i=1; i<dl; i++) {
    int temp = arr[i];
    int j = i-1;
    while(j >=0 && temp < arr[j]) {
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = temp;
  }
}

int main() {

  int q_of_products;
  int price;
  int arr[q_of_products] {};

  cout << "Enter the quantity of products to save: ";
  cin >> q_of_products;

  for(int i=0; i<q_of_products; i++) {
    cout << "Enter the price of the product:";
    cin >> price;
    arr[i] = price;
  }

  return 0;
}