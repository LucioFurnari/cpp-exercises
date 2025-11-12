#include <iostream>

using namespace std;

/*
  Implementar una función que reciba dos listas enlazadas simples con datos de tipo string ordenadas según el
  alfabeto y retorne una tercera lista ordenada por el mismo criterio, conformada por todos los elementos de las
  listas originales (merge). Agregar las funciones auxiliares que sean necesarias para cumplir con este propósito.
*/

struct Node
{
  string word;
  Node* next;
};


void createOrderList(Node* & head, string word) {

  if(head == nullptr || word < head->word) {
    Node* newNode = new Node{word, head};
    head = newNode;
  } else {
    Node* temp = head;
    while (temp->next != nullptr && temp->next->word < word)
    {
      temp = temp->next;
    }

    Node* newNode = new Node{word, temp->next};
    temp->next = newNode;
  }
}

void showList(Node* & list) {

  Node* temp = list;
  while (temp != nullptr)
  {
    if(temp->next == nullptr) {
      cout << temp->word << endl;
      temp = temp->next;
    } else {
      cout << temp->word << " -> ";
      temp = temp->next;
    }
  }
}

void insertToEnd(Node* & list, Node* newList) {
  if (list == nullptr) {
    list = newList;
  } else {
    Node* aux = list;
    while (aux->next != nullptr)
    {
      aux = aux->next;
    }
  
    aux->next = newList;
  }
}

Node* merge(Node* & listOne, Node* & listTwo) {
  Node* newNode = nullptr;
  Node* aux = nullptr;

  Node* tempOne = listOne;
  Node* tempTwo = listTwo;

  while (tempOne != nullptr && tempTwo != nullptr)
  {
    if(tempOne->word <= tempTwo->word) {
      aux = tempOne;
      tempOne = tempOne->next;
    } else {
      aux = tempTwo;
      tempTwo = tempTwo->next;
    }

    aux->next = nullptr;
    insertToEnd(newNode, aux);
  }
  
  if(tempOne != nullptr) {
    cout << "Testing TempOne" << endl;
    insertToEnd(newNode, tempOne);
  }
  if(tempTwo != nullptr) {
    cout << "Testing TempTwo" << endl;
    insertToEnd(newNode, tempTwo);
  }

  return newNode;
}

void freeList(Node* & list) {
  Node* temp = list;

  while (list != nullptr)
  {
    list = list->next;
  }

  delete temp;
}

int main() {
  Node* listOne = nullptr;
  Node* listTwo = nullptr;
  string word;

  while (true)
  {
    cout << "Enter a word:";
    getline(cin, word);
    if(word == "exit") {
      break;
    }
    createOrderList(listOne, word);
  }
  cout << endl;
  while (true)
  {
    cout << "Enter a word:";
    getline(cin, word);
    if(word == "exit") {
      break;
    }
    createOrderList(listTwo, word);
  }
  
  showList(listOne);
  showList(listTwo);

  Node* newNode = merge(listOne, listTwo);
  showList(newNode);

  freeList(listOne);
  freeList(listTwo);
  return 0;
}