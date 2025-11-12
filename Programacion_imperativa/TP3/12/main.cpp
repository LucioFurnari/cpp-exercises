#include <iostream>
#include <limits>

using namespace std;


/*
Generar una lista enlazada simple con la nómina de artículos de un supermercado. De cada artículo se conoce:
  código, descripción, precio y stock. La carga finaliza con el código -1. Se solicita:
  A. Leer de teclado un porcentaje e incrementar el precio de todos los artículos en esa cantidad.
  B. Incrementar el stock de un artículo. Se lee de teclado el código y la cantidad con la que se debe
    incrementar el stock. Si no existe el artículo en la lista se debe informar.
  C. Eliminar de la lista los artículos que no tienen stock
*/

struct Article
{
  int code;
  string description;
  int price;
  int stock;
};


struct Node
{
  Article article;
  Node* next;
};


void createList(Node* & head) {
  while (true)
  {
    Article article;
    int code;

    cout << "Enter the code of the article: ";
    cin >> code;
    if(code < 0) break;
    article.code = code;
    cout << "Enter a description for the article: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, article.description);
    cout << endl;
    cout << "Enter the price of the article: ";
    cin >> article.price;
    cout << "Enter the stock of the article: ";
    cin >> article.stock;

    if (head == nullptr) {
      Node* newNode = new Node{article, nullptr};
      head = newNode;
    } else {
      Node* tmp = head;

      while (tmp->next != nullptr)
      {
        tmp = tmp->next;
      }

      tmp->next = new Node{article, nullptr};
    }
  }
}

void increasePrice(Node* & list, int procentage) {
  Node* tmp = list;

  while (tmp != nullptr)
  {
    tmp->article.price = tmp->article.price * (1 + procentage / 100);
  }
  
}

void showList(Node* & list) {
  Node* tmp = list;

  while (tmp != nullptr)
  {
    cout << "Article code: " << tmp->article.code << endl;
    cout << "Article description: " << tmp->article.description << endl;
    cout << "Article price: " << tmp->article.price << endl;
    cout << "Article stock: " << tmp->article.stock << endl;
    cout << "-----------------------" << endl;
    tmp = tmp->next;
  }
  
}

int main() {
  Node* head = nullptr;

  createList(head);
  showList(head);

  int percentage;
  cout << "Enter the percentage you want to increase the price: ";
  cin >> percentage;
  increasePrice(head, percentage);
  return 0;
}