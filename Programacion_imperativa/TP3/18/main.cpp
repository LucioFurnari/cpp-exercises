#include <iostream>

using namespace std;

struct Node
{
  string title;
  Node* next;
};

void createList(Node* & list, string title) {
  title[0] = toupper(title[0]);

  if(list == nullptr) {
    Node* newNode = new Node{title, nullptr};
    newNode->next = newNode;
    list = newNode;
  } else {
    Node* newNode = new Node{title, list->next};
    list->next = newNode;
    list = list->next;
  }
}

void showList(Node* & end) {
  Node* tmp = end->next;

  do {
    cout << tmp->title << endl;
    tmp = tmp->next;
  } while (tmp != end->next);
  
}

int main() {
  Node* head = nullptr;

  for (int i = 0; i < 4; i++)
  {
    string title;
    cout << "Enter a title: ";
    getline(cin, title);
    createList(head, title);
  }
  
  showList(head);
  return 0;
}