// Write a C++ program that asks the user to enter 3 words. The program must:
// 1. Indicate the length of each word.
// 2. If the word is longer than 5 characters, display it in uppercase.
// 3. Upon completion, display the shortest word entered.
// To do this, you must use at least the following functions:
//  A function that receives a word and returns its length.
//  A function that receives a word and returns it in uppercase (without modifying the original).


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