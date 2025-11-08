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

  for (int i = 0; i < word.length(); i++)
  {
    word[i] = tolower(word[i]);
  }
  
  return word;
}

void addToList(Node* & list, string word) {
  
  if (list == nullptr) {
    Node* newNode = new Node{lowerCaseWord(word), nullptr};
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



int main() {
  Node* list = nullptr;
  Node* repeatedList = nullptr;

  return 0;
}