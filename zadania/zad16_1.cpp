#include <iostream>
using namespace std;

int calculate_result(int* array){
    int res;
    // cout << sizeof(array);
    for (int i = 0; i < sizeof(array); i++)
    {
        res += array[i];
    }
    res = res / sizeof(array);
    return res;
}

int main(){
    int arr[5] = {
        5, 10, 12, 9
    };
    
    cout << "Srednie: " << calculate_result(arr);

    return 0;
}


