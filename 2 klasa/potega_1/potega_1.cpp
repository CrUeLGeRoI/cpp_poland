#include <iostream>

using namespace std;

//Potęgowanie. base = podstawa; powerNum = wykładnik
double power(double base, int powerNum){
    double res;

    if (powerNum != 0){
        res = base;
        for (int i = 0; i < powerNum; i++)
        {
            res *= base;
        }
        
    } else {
        res = 1;
    }
    return res;
}

int main(){
    double p;
    //unsigned = liczby większej od 0
    unsigned int w;

    cout << "Podaj podstawe: ";
    cin >> p;
    cout << "Podaj wykladnik: ";
    cin >> w;

    cout << "Wynik: " << power(p, w);

    return 0;
}
