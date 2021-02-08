//ex1 day2

//https://repl.it/@mannydev/ex1-day2#main.cpp

#include <iostream>
using namespace std;

//Loop through each char from the end of original string and placinmg it in a new variable.
int main() {

    string greeting;
    string new_greeting;
    cout << "Please enter a word: ";
    cin >> greeting;

    for (int x = greeting.length() - 1; x >= 0; x--) {
        new_greeting.push_back(greeting[x]);
    }

    cout <<  greeting << "spelt backwards is: " << new_greeting ;


    return 0;
}
