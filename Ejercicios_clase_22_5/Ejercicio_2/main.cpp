#include <iostream>
#include <string>
using namespace std;

// int get_word_length(string word) {

// }

string in_upper_case(string word) {
  for (int i = 0; i < word.length()-1; i++)
  {
    word[i] = toupper(word[i]);
  }
  
}

int main() {
  string word;

  word = "Hola";

  cout << word[4];

  // cout << "Ingrese 3 palabras: ";
  // for (int k=0; k < 3; k++) {
  //   cin >> word;
  // }

  return 0;
}