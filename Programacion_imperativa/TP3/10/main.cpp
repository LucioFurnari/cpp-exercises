#include <iostream>

using namespace std;

/* Cargar una lista enlazada simple con palabras ingresadas por el usuario, las cuales deben almacenarse en
  minúsculas independientemente de cómo las ingrese. Luego, a partir de esa lista, generar una nueva lista con
  las palabras que se encuentran repetidas. Finalmente, imprimir ambas listas.
*/

struct Node
{
  string word;
  Node* next;
};

string lowerCaseWord(string word) {

  for (int i=0; i < word.size(); i++)
  {
    word[i] = tolower(word[i]);
  }
  
  return word;
}

void addToList(Node* & list, string word) {
  
  if (list == nullptr) {
    Node* newNode = new Node{lowerCaseWord(word), nullptr};
    list = newNode;
  } else {
    Node* aux = list;

    while (aux->next != nullptr)
    {
      aux = aux->next;
    }

    Node* newNode = new Node{lowerCaseWord(word), nullptr};

    aux->next = newNode;
  }
}

bool checkIfExist(Node* & listToCheck, string word) {

  Node* aux = listToCheck;

  while (aux != nullptr)
  {
    if(aux->word == word) {
      return true;
    }
    aux = aux->next;
  }
  return false;
}

Node* generateNewList(Node* list) {
  Node* newList = nullptr;
  
  Node* aux = list;
  while (aux != nullptr)
  {
    
    if(checkIfExist(aux->next, aux->word) && !checkIfExist(newList, aux->word)) {
      Node* newNode = new Node{aux->word, newList};
      newList = newNode;
    }
    aux = aux->next;
  }
  return newList;
}

void showList(Node* & list) {
  Node* aux = list;

  while (aux != nullptr)
  {
    if(aux->next != nullptr) {
      cout << aux->word << " -> ";
    } else {
      cout << aux->word;
    }
    aux = aux->next;
  }
  
}

void freeList(Node* & list) {
  while (list != nullptr)
  {
    Node* tmp = list;
    list = list->next;
    delete tmp;
  }
  
}

int main() {
  Node* list = nullptr;
  string word;

  while (true)
  {
    cout << "Enter a word: ";
    getline(cin, word);
    if(word == "exit") {
      break;
    }
    addToList(list, word);
  }
  
  showList(list);
  Node* newList = generateNewList(list);
  showList(newList);
  freeList(list);
  return 0;
}