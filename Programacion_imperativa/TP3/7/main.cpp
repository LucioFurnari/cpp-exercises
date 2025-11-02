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

void addNumber(Node* & list, int & number) {
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

bool findNumber(Node* & list, int & number) {
  Node* aux = list;

  while(aux != nullptr) {
    if(aux->number == number) {
      return true;
    }
    aux = aux->next;
  }

  return false;
}

int findOccurrence(Node* & list, int & numberToFind) {
  int count {0};
  Node* aux = list;

  while(aux != nullptr) {
    if(aux->number == numberToFind) count++;
    aux = aux->next;
  }

  return count;
}

// i don't know how to return two list, so i pass the list that i want to change in the function.
void generateNewList(Node* & head, Node* & evenList, Node* & oddList) {

  while (head != nullptr)
  {
    Node* newNumber = new Node;
    newNumber->number = head->number;
    newNumber->next = nullptr;

    if(head->number % 2 == 0) {
      if(evenList != nullptr) {
        evenList->next = newNumber;
      } else {
        evenList = newNumber;
      }
    } else {
      if(oddList != nullptr) {
        oddList->next = newNumber;
      } else {
        oddList = newNumber;
      }
    }

    head = head->next;
  }
  
}

void showList(Node* & list) {
  Node* aux = list;

  while (aux != nullptr)
  {
    cout << "List N°: " << aux->number << endl;
    aux = aux->next;
  }
  
  cout << "Finalize showing the list." << endl;
}

int main() {
  Node* numberList = nullptr;
  Node* evenList = nullptr;
  Node* oddList = nullptr;
  int number {};
  int numberToFind {};

  cout << "Enter a number greater or equal to 0: ";
  cin >> number;
  while(number >= 0) {
    addNumber(numberList, number);
    cout << "Enter a number greater or equal to 0: ";
    cin >> number;
  }

  cout << "Enter the number you want to find: ";
  cin >> numberToFind;

  if(findNumber(numberList, numberToFind)) {
    cout << "The number was found." << endl;
  } else {
    cout << "The number not exist in the list." << endl;
  }

  generateNewList(numberList, evenList, oddList);
  showList(numberList);

  return 0;
}