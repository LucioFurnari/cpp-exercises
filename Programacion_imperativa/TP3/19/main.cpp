#include <iostream>

using namespace std;

struct Node {
  int cuit;
  Node* next;
};

void createList(Node* & list, int cuit) {
  if(list == nullptr) {
    Node* newNode;
    newNode->cuit = cuit;
    newNode->next = newNode;
    list = newNode;
  } else {
    Node* newNode = new Node{cuit, list->next};
    list->next = newNode;
  }
}

void showList(Node* & list) {
  Node* tmp = list->next;

  do
  {
    cout << "Cuit: " << tmp->cuit << endl;
    tmp = tmp->next;
  } while (tmp != list->next);
  
}


int main() {
  Node* head = nullptr;

  createList(head, 123);
  createList(head, 145);
  createList(head, 161);
  createList(head, 614);
  showList(head);

  return 0;
}