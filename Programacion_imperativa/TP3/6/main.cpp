#include <iostream>

using namespace std;

/*
  Permitir al usuario guardar en una lista enlazada simple los nombres de los alumnos de un curso, insertando al
  final de la lista y cortando la carga cuando se inserte como nombre "x", ya sea en mayúscula o en minúscula (el
  cual no debe insertarse en la lista)

  A continuación, solicitar al usuario el nombre de un alumno e informar si se encuentra en la lista o no.
  Por último, eliminar a la alumna "Josefina Ortega" de la lista (se asume que no se han almacenado nombres
  repetidos)
*/

struct Node
{
  string student;
  Node* next;
};

void insertToList(Node* & list, string studentName) {
  
}


int main() {
  Node* listStudents = new Node;
  string studentName;



  return 0;
}