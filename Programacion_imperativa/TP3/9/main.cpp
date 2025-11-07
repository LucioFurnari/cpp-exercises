#include <iostream>

using namespace std;

/* Desarrollar un programa que realice las siguientes operaciones en listas enlazadas simples de números enteros.
  A. Cargar una lista insertando los elementos ordenados en forma descendente. Finaliza luego de ingresar
  el cero, que también se debe agregar a la lista.
  B. Eliminar las ocurrencias de los números que son múltiplos de 3.
  C. Imprimir la lista antes y después de la eliminación */


struct Node
{
  int value;
  Node* next;
};


void organizeList(Node* & list, Node * newNode) {

  if(list == nullptr || newNode->value > list->value) {
    newNode->next = list;
    list = newNode;
  } else {
    Node* aux = list;

    while (aux->next != nullptr && aux->next->value > newNode->value) 
    {
      aux = aux->next;
    }
    newNode->next = aux->next;
    aux->next = newNode;
  }
}

void removeMultipleOfThree(Node* & list) {
  Node* aux = list;
  Node* selected = nullptr;

  while (aux != nullptr)
  {
    if(list->value % 3 == 0) {
      selected = list;
      list = list->next;
      aux = list;
      delete selected;
    } else {
      if(aux->next != nullptr && aux->next->value % 3 == 0) {
        selected = aux->next;
        aux->next = selected->next;
        delete selected;
      } else {
        aux = aux->next;
      }
    }
  }
  

}

void showList(Node* & list) {
  Node* aux = list;
  while (aux != nullptr)
  {
    cout << "Number: " << aux->value << endl;
    aux = aux->next;
  }
  
}

void createList(Node* & list) {
  int number;

  while (true)
  {
    cout << "Enter a number: ";
    cin >> number;

    if(number == 0) {
      Node* newNode = new Node{number, nullptr};
      organizeList(list, newNode);
      break;
    } else {
      Node* newNode = new Node{number, nullptr};
      organizeList(list, newNode);
    }
  }
  
}

void cleanList(Node* & list) {
  while (list != nullptr)
  {
    Node* aux = list;
    list = list->next;
    delete aux;
  }
  
}

int main() {
  Node* list = nullptr;

  createList(list);
  showList(list);
  removeMultipleOfThree(list);
  showList(list);
  cleanList(list);
  return 0;
}