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
  Node* node = new Node;

  if(head == nullptr) {
    node->value = value;
    node->next = nullptr;
    head = node;
  } else {
    node->value = value;
    node->next = head;
    head = node;
  }
}

void addToEnd(Node* & head, int & value) {
  Node* node = new Node;

  if(head == nullptr) {
    node->value = value;
    node->next = nullptr;
    head = node;
  } else {
    Node* aux = head;
    
    while(aux->next != nullptr) {
      aux = aux->next;
    }

    node->value = value;
    node->next = nullptr;
    aux->next = node;
  }
}

void showList(Node* & head) {
  Node* aux = head;
  while (aux != nullptr)
  {

    cout << aux->value << endl;
    aux = aux->next;
  }
  
}

int main() {
  int value;
  Node* head = nullptr;

  cout << "Enter a number, that is not 0: ";
  cin >> value;
  while (value != 0)
  {
    // addToStart(head, value);
    addToEnd(head, value);
    cout << "Enter a number, that is not 0: ";
    cin >> value;
  }

  showList(head);

  return 0;
}