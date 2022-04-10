#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    int r, h, v;

    cout << "Enter radius: ";
    cin >> r;

    if (r < 0)
    {
        cout << "Radius is less 0, try again";
        abort();
    }
    

    cout << "Enter height: ";
    cin >> h;
    
    if (h < 0)
    {
        cout << "Height is less 0, try again";
        abort();
    } else
    {
        v = M_PI * pow(r, 2) * h;
        cout << "Capacity is: " << v << "cm";
    }
    

    

    return 0;
}