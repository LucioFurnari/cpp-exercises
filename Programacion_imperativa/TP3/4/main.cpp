#include <iostream>
#include <string>

using namespace std;

// Dados los siguientes structs:

struct Product
{
  string description;
  float price;
};

struct Sale
{
  Product product;
  int quantity;
};

// Escribir y luego ejecutar las instrucciones necesarias para:
// a) Declarar una variable puntero a Venta y reservar memoria.
// b) Pedir al usuario que ingrese una cantidad vendida, descripción de producto y precio de producto,
// almacenando los datos en la Venta apuntada por el puntero declarado en el inciso anterior.
// c) Restar un 15% al precio del Producto guardado en la Venta apuntada por el puntero.
// d) Imprimir la descripción del producto dentro de la Venta y monto total (precio del producto * cantidad).


void getSale(Sale* & sale) {
  cout << "Enter the price and description of the product: " << endl;
  Product newProduct;
  cout << "Enter the price: " << endl;
  cin >> newProduct.price;

  cout << "Enter the description: " << endl;
  cin >> newProduct.description;

  sale->product = newProduct;
  cout << "Enter quantity of the product: " << endl;
  cin >> sale->quantity;
}

void subtractPercent(Sale* & sale) {
  sale->product.price = sale->product.price * 0.85;
}

void printDescription(Sale* & sale) {
  cout << sale->product.description << endl;
}

int main() {
  Sale * sale = new Sale;
  getSale(sale);
  subtractPercent(sale);
  printDescription(sale);
  return 0;
}