#include <iostream>
using namespace std;

string check_age(int num){
    if (num < 18)
    {
        return "False";
    } else
    {
        return "True";
    }
    
    
}

int main(){
    int a;
    cout << "What is your age? ";
    cin >> a;
    cout << check_age(a);
    return 0;
}