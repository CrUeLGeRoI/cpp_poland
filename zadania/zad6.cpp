#include <iostream>
using namespace std;

int main(){
    int counter, a;
    int less_zero = 0;
    int more_zero = 0;
    cout << "How many numbers do you wanna sum? ";
    cin >> counter;
    for (int i = 0; i < counter; i++)
    {
        cout << "Enter num: ";
        cin >> a;
        if (a < 0)
        {
            less_zero += a;
        } else if (a > 0)
        {
            more_zero += a;
        }
    }
    cout << "Sum of numbers that are less than 0: " << less_zero << "\n" << "Sum of numbers that are more than 0: " << more_zero;
    

    return 0;
}