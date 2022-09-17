#include <iostream>

using namespace std;

//wszyscy litery przesuwają się na 4 pozycji w prawo
const int przesuniecie = 4;

//szyfrowanie tekstu za pomocą szyfru Cezara
string szyfr(int skok, string tekst){
    string wynik = "";
    int znak;
    for (int i = 0; i < tekst.length(); i++)
    {
        znak = tekst[i] + skok;
        //formula
        if (znak > 90)
        {
            znak = 65 + (znak - 90 - 1);
        }
        if (znak < 65)
        {
            znak = 90 - (65 - znak - 1);
        }
        wynik += char(znak);
        
    }
    return wynik;
}

int main(){
    string wyraz;
    cout << "Wpisz wyraz lub szyfr: ";
    cin >> wyraz;

    for (int i = 0; i < wyraz.length(); i++)
    {
        wyraz[i] = toupper(wyraz[i]);
    }
    
    cout << "Zaszyfrowany tekst: " << szyfr(przesuniecie, wyraz) << endl;
    cout << "Odszyfrowany szyfr: " << szyfr(-przesuniecie, wyraz) << endl;

    return 0;
}