#include <iostream>
using namespace std;

int main(){
    int counter;
    string a = "*";
    cout << "What is the height of triangle? ";
    cin >> counter;
    for (int i = 0; i < counter; i++)
    {
        cout << a;
        cout << "\n";
        a += "*";
    }
    
    return 0;
}