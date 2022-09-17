#include <iostream>
#include <stdio.h>

using namespace std;

double power(double base, int powerNum){
    if (powerNum == 0){
        return 1;
    }
    else{
        return base * power(base, powerNum - 1);
    }
}


int main()
{
    double p;
    unsigned int w;
    
    cout << "Enter base number ";
    cin >> p;
    cout << "Enter power number ";
    cin >> w;
    
    
    cout << "Result: " << power(p, w);
    
    
    return 0;
}
