#include <iostream>

using namespace std;

int main(){
    //Declaring variables
    int max, num, a = 1;

    //As said, if in the input will be 0, program will stop and give minimum number
    cout << "0 ends program" << endl;
    //cycle do...while
    do
    {
        
        cout << "Enter " << a << " number: ";
        cin >> num;
        //if number entered by user isn't 0 then we check if this same number is more than previous
        if (num != 0)
        {
            if (a > 1)
            {
                if (max < num) max = num;
            }
            else max = num;
        }
        a++;
    } while (num != 0);
    
    //Result
    cout << endl << "Maximum is: " << max << endl;


    return 0;
}

