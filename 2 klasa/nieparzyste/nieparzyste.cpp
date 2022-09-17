#include <iostream>

using namespace std;


int main(){
    //początek i koniec zakresu
    int pocz, kon;

    cout << "Poczatek zakresu: ";
    cin >> pocz;

    cout << "Koniec zakresu: ";
    cin >> kon;

    cout << "Liczby nieparzyste z zakresu od " << pocz << " do " << kon << endl;

    for (int i = pocz; i <= kon; i++)
    {
        if ((i % 2) != 0) cout << i << ", ";
    }
    

    return 0;
}