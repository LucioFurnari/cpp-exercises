#include <iostream>

using namespace std;

/*
  Generar una lista con los datos personales de los alumnos de un colegio (legajo, apellido y nombre, DNI) y las
  notas de tres materias: matemática, literatura y geografía (para cada alumno se cargarán las tres materias). Las
  notas pueden ir de 1 a 10 y se debe validar que el usuario no ingrese notas incorrectas, volviendo a pedir una
  nueva nota cada vez que ingrese una incorrecta, hasta que ingrese un valor en el rango indicado. Se pide
  informar la cantidad de alumnos que aprobaron las tres materias (se aprueba con 7) y el porcentaje que
  representan los aprobados sobre el total de alumnos.
*/

struct Student {
  string legajo;
  string lastName;
  string name;
  int DNI;
  int mathGrade;
  int literatureGrade;
  int geographyGrade;
};

struct Node
{
  Student student;
  Node* next;
};

void enterGrade(int & subject) {
  int grade;

  cout << "Enter the grade of the subject (greater than 1 and less or equal to 10)";
  cin >> grade;
  while (grade < 1 || grade > 10)
  {
    cout << "Enter the grade of the subject (greater than 1 and less or equal to 10)";
    cin >> grade;
  }
  
  subject = grade;
}

Student createStudent() {
  Student student;

  cout << "Enter the legajo: ";
  getline(cin, student.legajo);
  cout << "Enter the last name of the student: ";
  getline(cin, student.lastName);
  cout << "Enter the name of the student: ";
  getline(cin, student.name);
  enterGrade(student.mathGrade);
  enterGrade(student.literatureGrade);
  enterGrade(student.geographyGrade);

  return student;
}

void createList(Node* & list) {
  if(list == nullptr) {
    list->student = createStudent();
    list->next = nullptr;
  } else {
    Node* aux = list;
    for (int i = 0; i < 4; i++)
    {
      while (aux->next != nullptr)
      {
        aux = aux->next;
      }
      Student student = createStudent();
      aux->next = new Node{student, nullptr};
    }
    
  }
}

void showList(Node* & list) {
  Node* tmp = list;

  while (tmp != nullptr)
  {
    cout << tmp->student.name << endl;
    tmp = tmp->next;
  }
  
}

int main() {
  Node* head = nullptr;

  createList(head);
  showList(head);
  return 0;
}