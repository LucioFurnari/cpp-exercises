#include <iostream>

using namespace std;

/*
  Dos sucursales de Fiestísima disponen cada una de una lista enlazada simple con el detalle de las ventas
  realizadas. De cada venta se conoce: código de producto y cantidad vendida (un producto pudo haber sido
  vendido 0, 1 o más veces en la misma sucursal). Las listas de ventas están ordenadas de menor a mayor por
  código de producto. Realizar una función que reciba las dos listas y retorne una nueva lista unificando todas las
  ventas, ordenada por el mismo criterio. Utilizar un algoritmo destructivo (que reutilice los nodos de las listas
  originales). Agregar las funciones auxiliares que sean necesarias.
*/

struct Sale
{
  int productCode;
  int amount;
};

struct Node
{
  Sale sale;
  Node* next;
};

void createList(Node* & head) {

  for(int i=0; i < 4; i++) {
    Sale sale;

    cout << "Enter the product code: ";
    cin >> sale.productCode;
    cout << "Enter the amount: ";
    cin >> sale.amount;

    if(head == nullptr || sale.productCode <= head->sale.productCode) {
      Node* tmp = head;
      head = new Node{sale, tmp};
    } else {
      Node* tmp = head;
      while (tmp->next != nullptr && sale.productCode >= tmp->next->sale.productCode)
      {
        tmp = tmp->next;
      }
      Node* aux = new Node{sale, tmp->next};
      tmp->next = aux;
    }
  }
}

void showList(Node* & list) {
  Node* tmp = list;

  while (tmp != nullptr)
  {
    cout << "Product code: " << tmp->sale.productCode << endl;
    // cout << "Product sales: " << tmp->sale.amount << endl;
    tmp = tmp->next;
  }
}

void insertList(Node* & list, Node* newNode) {
  
  if(list == nullptr) {
    list = newNode;
  } else {
    Node* tmp = list;

    while (tmp->next != nullptr)
    {
      tmp = tmp->next;
    }

    tmp->next = newNode;
  }
}

Node* mergeList(Node* & listOne, Node* & listTwo) {
  Node* newList = nullptr;

  while (listOne != nullptr && listTwo != nullptr)
  {
    if(listOne->sale.productCode <= listTwo->sale.productCode) {
      Node* aux = listOne;
      listOne = listOne->next;
      aux->next = nullptr;
      insertList(newList, aux);
    } else {
      Node* aux = listTwo;
      listTwo = listTwo->next;
      aux->next = nullptr;
      insertList(newList, aux);
    }
  }

  if(listOne != nullptr) {
    insertList(newList, listOne);
  }
  if(listTwo != nullptr) {
    insertList(newList, listTwo);
  }

  return newList;
}

void freeList(Node* & list) {
  while (list != nullptr)
  {
    Node* tmp = list;
    list = list->next;
    delete tmp;
  }
  
  delete tmp;
}

int main() {
  Node* listOne = nullptr;
  Node* listTwo = nullptr;

  createList(listOne);
  createList(listTwo);
  showList(listOne);
  showList(listTwo);
  Node* mergedList = mergeList(listOne, listTwo);
  showList(mergedList);

  freeList(listOne);
  freeList(listTwo);
  return 0;
}