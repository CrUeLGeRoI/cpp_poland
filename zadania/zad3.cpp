#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int r;
    cout << "Enter radius: ";
    cin >> r;
    if (r < 0){
        r = abs(r);
        int s = M_PI * pow(r, 2);
        cout << "Pole kola jest: " << s << " cm";
    } else if (r == 0)
    {
        cout << "Radius equal 0";
    } else
    {
        int s = M_PI * pow(r, 2);
        cout << "Pole kola jest: " << s << " cm";
    }
    
    return 0;
}
