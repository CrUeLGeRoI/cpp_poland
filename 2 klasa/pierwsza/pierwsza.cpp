//connecting to libraries
#include <iostream>
#include <cmath>

//organizing code by avoiding writing std a lot of times
using namespace std;

int main()
{
    // declaring vars   
    int num;
    bool prime = true;
    
    // saving numbers from input in vars
    cout << "Enter num: ";
    cin >> num;
    
    //checking if number is prime
    for (int i = 2; i <= sqrt(num); i++){
        if ((num % i) == 0){
            prime = false;
            break;
        }
    }
    
    // result(checking boolean var. if true then number is prime if not then not)
    if(prime){
        cout << "This num is prime" << endl;
    } else{
        cout << "This num ISN\'T PRIME " << endl;
    }

    return 0;
}
