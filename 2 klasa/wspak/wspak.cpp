#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    //declaring variables
    string phrase;
    int phrase_length;
    
    //getting text from entered text by user
    cout << "Podaj wyraz: ";
    cin >> phrase;
    
    //getting length of phrase
    phrase_length = phrase.length();
    
    //result
    cout << "Wyraz wspak: ";
    // cycle is going from last letter to first and is printing them
    for (int i = phrase_length-1; i >= 0; i--) {
        cout << phrase[i];
    }
    
    return 0;
}

