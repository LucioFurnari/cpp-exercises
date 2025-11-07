#include <iostream>

using namespace std;

struct Node
{
  int value;
  Node* next;
};

void createList(Node* & list) {
  int number;

  cout << "Enter a number equal or greater than 0: ";
  cin >> number;

  // If the first number is negative, create an empty list
  if (number < 0) {
    list = nullptr;
    return;
  }

  // Create head node
  Node* head = new Node{number, nullptr};
  list = head;
  Node* tail = head;

  // Read and append new nodes until a negative number (sentinel) is entered
  while (true) {
    cout << "Enter a number equal or greater than 0: ";
    cin >> number;
    if (number < 0) break;
    Node* node = new Node{number, nullptr};
    tail->next = node;
    tail = node;
  }
}

int deleteOccurrences(Node* & list, int numberToDelete) {
  int eliminatedCount {0};
  Node* aux = list;
  Node* selected = nullptr;

  if(list == nullptr) return eliminatedCount;

  while (aux != nullptr)
  {
    if(list->value == numberToDelete) {
      selected = list;
      list = list->next;
      aux = list;
      delete selected;
      eliminatedCount++;
    } else {
      if(aux->next != nullptr && aux->next->value == numberToDelete) {
        selected = aux->next;
        aux->next = selected->next;
        delete selected;
        eliminatedCount++;
      } else {
        aux = aux->next;
      }
    }
  }
  
  return eliminatedCount;
}

int main() {
  Node* list = nullptr;

  createList(list);

  int deleted = deleteOccurrences(list, 2);
  cout << "Was eliminated " << deleted << " occurrences of the number." << endl;
  return 0;
}