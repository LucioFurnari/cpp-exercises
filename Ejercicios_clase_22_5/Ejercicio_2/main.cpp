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

int get_word_length(string word) {
  int wordCount = 0;
  while(word[wordCount] != '\0') {
    wordCount++;
  }
  return wordCount;
}

// The function iterate each char and transform it to upper case
string in_upper_case(string word) {
  for (size_t i = 0; i < word.length(); i++)
  {
    word[i] = toupper(word[i]);
  }
  return word;
}

int main() {
  // Array to store each word that the user enter
  string wordsList[3];
  string word;

  cout << "Enter 3 words: ";

  for (int k=0; k < 3; k++) {
    cin >> word;
    wordsList[k] = word;
  }

  string shorterWord = wordsList[0];

  for(int w=0; w < 3; w++) {
    if (wordsList[w].length() < shorterWord.length()) {
      shorterWord = wordsList[w];
    }
    cout << "The word " << wordsList[w] << " have " << get_word_length(wordsList[w]) << " chars." << endl;
    if(wordsList[w].length() > 5) {
      cout << in_upper_case(wordsList[w]) << endl;
    }
  }

  cout << "The smallest word is: " << shorterWord << endl;
  return 0;
}