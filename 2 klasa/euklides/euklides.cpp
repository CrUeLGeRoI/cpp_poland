#include <stdio.h>
#include <iostream>

using namespace std;

int euklides(int num1, int num2){
    while (num1 != num2){
        if (num1 > num2){
            num1 -= num2;
        }
        else{
            num2 -= num1;
        }
    }
    return num1;
}



int main()
{
    int a, b;
    
    cout << "Enter first num: ";
    cin >> a;
    
    cout << "Enter second num: ";
    cin >> b;
    
    
    cout << "Najwiekszy wspolny dzielnik: " << euklides(a, b);

    return 0;
}