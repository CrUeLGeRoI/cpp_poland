#include <iostream>

using namespace std;

int main(){
    //Declaring variables
    int min, num, a = 1;

    //As said, if in the input will be 0, program will stop and give minimum number
    cout << "0 ends program" << endl;
    //cycle do...while
    do
    {
        
        cout << "Enter " << a << " number: ";
        cin >> num;
        
        if (num != 0)
        {
            if (a > 1)
            {
                if (min > num) min = num;
            }
            else min = num;
        }
        a++;
    } while (num != 0);
    
    //Result
    cout << endl << "Minimum is: " << min << endl;


    return 0;
}