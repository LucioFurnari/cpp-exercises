#include <iostream>

using namespace std;

/* 
  Se lee de teclado una secuencia de números que finaliza con la primera ocurrencia de un número negativo, el
  cual no debe ser procesado. Los números deben ser almacenados en una lista enlazada simple. Se solicita:
    A. Leer de teclado un número e informar si existe en la lista.
    B. Leer de teclado un número e informar la cantidad de ocurrencias del número en la lista.
    C. Implementar una función que reciba la lista de números y genere dos nuevas listas, una con los
      números pares y otra con los impares. Las nuevas listas deberán estar formadas con los nodos de la lista
      original, la que quedará vacía después de invocar a la función. Imprimir las listas resultantes
*/

struct Node
{
  int number;
  Node* next;
};

void addNumber(Node* & list, int number) {
  Node* newNumber = new Node;
  newNumber->number = number;
  newNumber->next = nullptr;

  if(list == nullptr) {
    list = newNumber;
  } else {
    Node* aux = list;
    while (aux->next != nullptr)
    {
      aux = aux->next;
    }
    aux->next = newNumber;
  }
}

bool findNumber(Node* list, int number) {
  Node* aux = list;

  while(aux != nullptr) {
    if(aux->number == number) {
      return true;
    }
    aux = aux->next;
  }

  return false;
}

int findOccurrence(Node* list, int numberToFind) {
  int count {0};
  Node* aux = list;

  while(aux != nullptr) {
    if(aux->number == numberToFind) count++;
    aux = aux->next;
  }

  return count;
}

// Distribuye los nodos de "head" en dos listas: evenList y oddList.
// Los nodos son movidos (no se crean nuevos). Al finalizar head queda en nullptr.
void generateNewList(Node* & head, Node* & evenList, Node* & oddList) {
  Node* evenTail = nullptr;
  Node* oddTail = nullptr;

  while (head != nullptr)
  {
    Node* cur = head;
    head = head->next; // avanzar en la original
    cur->next = nullptr; // separar el nodo actual

    if (cur->number % 2 == 0) {
      if (evenList == nullptr) {
        evenList = evenTail = cur;
      } else {
        evenTail->next = cur;
        evenTail = cur;
      }
    } else {
      if (oddList == nullptr) {
        oddList = oddTail = cur;
      } else {
        oddTail->next = cur;
        oddTail = cur;
      }
    }
  }

  // head ya es nullptr; la lista original quedó vacía
}

void showList(Node* list, const string & title = "Lista") {
  cout << "-- " << title << " --" << endl;
  if (list == nullptr) {
    cout << "(vacía)" << endl;
  }
  Node* aux = list;
  while (aux != nullptr)
  {
    cout << aux->number << (aux->next ? " -> " : "") ;
    aux = aux->next;
  }
  cout << endl;
}

void freeList(Node* & head) {
  while (head != nullptr) {
    Node* aux = head;
    head = head->next;
    delete aux; // libera la memoria del nodo
  }
}

int main() {
  Node* numberList = nullptr;
  Node* evenList = nullptr;
  Node* oddList = nullptr;
  int number {};

  cout << "Ingrese números (termina con un número negativo):" << endl;
  while(true) {
    cin >> number;
    if (!cin) return 0; // entrada inválida
    if (number < 0) break;
    addNumber(numberList, number);
  }

  int numberToFind {};
  cout << "A) Ingrese número a buscar: ";
  cin >> numberToFind;
  if (findNumber(numberList, numberToFind)) {
    cout << "El número fue encontrado." << endl;
  } else {
    cout << "El número no existe en la lista." << endl;
  }

  int numberToCount {}; 
  cout << "B) Ingrese número para contar sus ocurrencias: ";
  cin >> numberToCount;
  cout << "Ocurrencias: " << findOccurrence(numberList, numberToCount) << endl;

  // C) distribuir nodos en pares e impares (moviéndolos)
  generateNewList(numberList, evenList, oddList);

  showList(numberList, "Lista original (debería estar vacía)");
  showList(evenList, "Pares");
  showList(oddList, "Impares");

  // liberar memoria
  freeList(numberList);
  freeList(evenList);
  freeList(oddList);

  return 0;
}