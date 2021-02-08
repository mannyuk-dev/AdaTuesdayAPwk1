//ex3AP 

//https://repl.it/@mannydev/ex3tueAPwk1#main.cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/algorithm/string.hpp>

// different helper functions to help format and making the main code less verbose.
using namespace std;


string reverse_word(string word) {
  reverse(word.begin(), word.end());
  return word;
}

string remove_spaces(string word) 
{
  word.erase(remove(word.begin(), word.end(), ' '), word.end());
  word.erase(remove(word.begin(), word.end(), '\t'), word.end());
  return word;
}
string lowerCase(string word) {
  boost::algorithm::to_lower(word);
  return word;
}
string format(string word) {
  return lowerCase(remove_spaces(word));
}



int main() {
  string input, word, reverse_input;

  cout << "Please enter a word: ";
  getline (cin, input);

  word = input;
  input = format(input);
  reverse_input = reverse_word(input);

  if (reverse_input == input) {
    cout << "Yes, '" << word << "' is a palindrome";
  } else {
    cout << "Sorry, '" << word << "' isn't a palindrome";
  }

  return 0;
}
