#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int num, count;
    int s = 1;
    string cont = "";
    while (true)
    {
        cout << "Enter num: ";
        cin >> num;
        s *= num;
        count++;
        if (count == 2)
        {   
            count = 0;
            cout << "Look like you did more than 1 operation, do you want to countinue?(y/n) ";
            cin >> cont;
            if (cont == "y")
            {
                cout << "Result: " << s;
                abort();
            }
            
        }
        
    }
    

    return 0;
}