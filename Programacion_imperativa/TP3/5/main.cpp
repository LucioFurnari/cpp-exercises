#include <iostream>

using namespace std;

/*Se lee de teclado una secuencia de números enteros, finalizando cuando el usuario ingresa un cero (que nodebe insertarse).
  Los números leídos deberán ser almacenados en una lista enlazada simple.
  Hacer tres versiones, insertando en cada una con diferente criterio, a saber:
    a) Al inicio de la lista.
    b) Al final de la lista.
    c) En la posición correcta para que la lista quede ordenada de menor a mayor. Si el número a insertar ya
    se encontraba en la lista, deberá quedar antes que todas sus repeticiones.
  Finalmente, imprimir la lista.
*/

struct Node {
  int value;
  Node* next;
};

void addToStart(Node* & head, int & value) {

}

void showList(Node* & head) {
  while (head->next != nullptr)
  {
    cout << head->value << endl;
  }
  
}

int main() {
  int value;
  Node* head = nullptr;

  do
  {
    cout << "Enter a number, that is not 0: ";
    cin >> value;
    addToStart(head, value);
  } while (value != 0);
  

  return 0;
}