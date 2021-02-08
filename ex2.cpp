//ex2 day2 lowercase
//https://repl.it/@mannydev/ex2day2APWK1#main.cpp


#include <iostream>
#include <vector>

using namespace std;

//vector  function pushback is used to convert to lower case and then each char is in the vector is pushed into a new srtring new_word to get the desired ouptput/format

int main() {
    string word;
    vector <char> lower_cased;
    string new_word;

    cout << "Please enter a word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
          lower_cased.push_back(tolower(word[i]));
    }


    vector<char>::iterator x;

    for (x = lower_cased.begin(); x != lower_cased.end(); ++x) {
          new_word.push_back(*x);
    }

  
    cout << word << " converted to lower case is: " << new_word ;

}
