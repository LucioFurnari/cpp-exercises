#include <iostream>
#include <string>

using namespace std;

/* Realizar un algoritmo que almacene información de, como máximo, 500 libros en un arreglo estático. Un libro se 
define como un struct con los siguientes campos: titulo, autor, ISBN, editorial, cantidadHojas. El algoritmo finaliza 
luego de cargar el libro "El hobbit", el cual debe procesarse o cuando ya no quede espacio en el arreglo (lo que 
suceda primero). Finalmente, imprimir el arreglo resultante mostrando todos los datos de cada libro.  */


struct Book {
  string title;
  string author;
  int ISBN;
  string editorial;
  int amountPages;
};

int main() {

  
  return 0;
}