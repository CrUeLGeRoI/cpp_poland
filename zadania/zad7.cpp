#include <iostream>
using namespace std;

int main(){
    int num;
    while (true)
    {
        cout << "Enter positive num: ";
        cin >> num;
        if (num < 0)
        {
            cout << "Num isn`t positive, try again!\n";
        } else 
        {
            break;
        }
    }
    cout << "Result: " << num;

    return 0;
}