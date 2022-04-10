#include <iostream>
using namespace std;

int main(){
    int counter, a, b;
    int less_zero = 0;
    int more_zero = 0;
    cout << "How many numbers do you wanna sum? ";
    cin >> counter;
    while (b < counter)
    {
        cout << "Enter num: ";
        cin >> a;
        if (a < 0)
        {
            less_zero += a;
            b++;
        } else if (a > 0)
        {
            more_zero += a;
            b++;
        }
        else if (a == 0)
        {
            cout << "Num is equal 0, try again!\n";
        }
        
    }
    cout << "Sum of numbers that are less than 0: " << less_zero << "\n" << "Sum of numbers that are more than 0: " << more_zero;
    

    return 0;
}