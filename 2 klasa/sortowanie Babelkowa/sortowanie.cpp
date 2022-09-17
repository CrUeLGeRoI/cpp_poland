#include <iostream>

using namespace std;

//mówimy że rozmiar tablicy stanowi 8 i tworzymy tablicę
const int rozmiar = 8;
int tablica[rozmiar];

//pokaz tablicy
void pokaz(){
    cout << "Tablica wyglada nastepujaco" << endl;
    for (int i = 0; i < rozmiar; i++) {
        cout << "Element nr " << i + 1 << " = " << tablica[i] << endl;
    }
}

int main(){
    int bufor;
    
    //nadzienie tablicy
    for (int i = 0; i < rozmiar; i++) {
        cout << "Wpisz element nr " << i + 1 << ": ";
        cin >> tablica[i];
    }

    cout << endl << "Przed sortowaniem: ";
    pokaz();


    //sortowanie tablicy za pomoca algorithmu Babelkowa(Polega na porównywaniu dwóch kolejnych elementów i zamianie ich kolejności, jeżeli zaburza ona porządek, w jakim się sortuje tablicę. Sortowanie kończy się, gdy podczas kolejnego przejścia nie dokonano żadnej zmiany.)
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < rozmiar - 1; j++) {
            if (tablica[j] > tablica[j + 1]){
                bufor = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = bufor;
            }
        }
        cout << endl << "W kolejnym przebiegu petli I ";
        pokaz();
    }
    



    cout << endl << "Po sortowaniu ";
    pokaz();
    return 0;
}