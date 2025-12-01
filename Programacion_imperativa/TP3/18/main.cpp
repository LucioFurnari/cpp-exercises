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

bool findTitle(Node* & list, string title) {
  string titleToLower = "";

  for (int i = 0; i < title.length(); i++)
  {
    titleToLower += tolower(title[i]);
  }

  cout << "Title to find: " << titleToLower << endl;

  Node* tmp = list->next;

  do
  {
    string tmpTitle = "";

    for (int i = 0; i < tmp->title.length(); i++)
    {
      tmpTitle += tolower(tmp->title[i]);
    }
    
    cout << "Actual title: " << tmpTitle << endl;

    if(titleToLower == tmpTitle) {
      return true;
    }

    tmp = tmp->next;
  } while (tmp != list->next);
  
  
  return false;
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

  string titleToFind;
  cout << "Enter title to find: ";
  getline(cin, titleToFind);

  if(findTitle(head, titleToFind)) {
    cout << "Title found" << endl;
  } else {
    cout << "Title not found" << endl;
  }
  return 0;
}