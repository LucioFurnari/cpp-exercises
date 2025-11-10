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
    cout << temp->word << " -> ";
    temp = temp->next;
  }
}

int main() {
  Node* list = nullptr;
  string word;

  while (true)
  {
    cout << "Enter a word:";
    getline(cin, word);
    if(word == "exit") {
      break;
    }
    createOrderList(list, word);
  }
  
  showList(list);
  return 0;
}