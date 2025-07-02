#include <iostream>
#include <string>
#include <string_view>

using namespace std;
// Write a program that asks for the name and age of two people, then prints which person is older.

string getName(int num) {
  cout << "Enter the name of person #" << num << ": ";
  string name {};
  getline(cin >> ws, name);

  return name;
}

int getAge(string_view name) {
  cout << "Enter the age of " << name << ": ";
  int age {};
  cin >> age;

  return age;
}

void printOlder(string_view name1, int age1, string_view name2, int age2) {
  if (age1 > age2) {
    cout << name1 << " (age " << age1 <<") is older than " << name2 << " (age " << age2 << ").\n";
  } else {
    cout << name2 << " (age " << age2 <<") is older than " << name1 << " (age " << age1 << ").\n";
  }
}

int main() {


  return 0;
}