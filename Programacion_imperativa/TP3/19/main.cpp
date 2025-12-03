#include <iostream>

using namespace std;

struct Node {
  int cuit;
  Node* next;
};

void createList(Node* & list, int cuit) {
  if(list == nullptr) {
    Node* newNode = new Node;
    newNode->cuit = cuit;
    newNode->next = newNode;
    list = newNode;
  } else {
    Node* newNode = new Node{cuit, list->next};
    list->next = newNode;
  }
}

void showList(Node* & list) {
  if(list == nullptr) return;

  Node* tmp = list->next;

  do
  {
    cout << "Cuit: " << tmp->cuit << endl;
    tmp = tmp->next;
  } while (tmp != list->next);
}

void deleteCuit(Node* & list, int cuitToDelete) {
  if(list == nullptr) return;
  Node* tmp = list;

  do
  {
    if(tmp->next->cuit == cuitToDelete) {
      Node* nodeToDelete = tmp->next;

      if(nodeToDelete == list) {
        list = tmp;
      }

      tmp->next = nodeToDelete->next;
      delete nodeToDelete;
      break;
    } else {
      tmp = tmp->next;
    }
  } while (tmp != list);
}

void freeList(Node* & list) {

  Node* tmp = list->next;
  while (tmp != list)
  {
    Node* toDelete = tmp;
    tmp = tmp->next;
    delete toDelete;
  }

  delete list;
  list = nullptr;
}

int main() {
  Node* head = nullptr;

  createList(head, 123);
  createList(head, 145);
  createList(head, 161);
  createList(head, 614);
  showList(head);
  deleteCuit(head, 145);
  cout << "After deleting the cuit: " << endl;
  showList(head);
  freeList(head);
  cout << "List empty" << endl;
  showList(head);

  return 0;
}