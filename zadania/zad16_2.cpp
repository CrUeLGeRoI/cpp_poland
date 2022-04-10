#include <iostream>
#include <vector>
using namespace std;




int calculate_result(vector<int> array){
    int res = 0;
    
    for (int i = 0; i < array.size(); i++)
    {
        res += array[i];
    }
    res = res / array.size();
    return res;
}

vector<int> create_and_fill_array(){
    int amount, a;
    cout << "Amount of array: ";
    cin >> amount;

    vector<int> v1;


    for (int i = 0; i < amount; i++)
    {
        cout << "Number: ";
        cin >> a;
        v1.push_back(a);
    }
    
    return v1;
}

int main(){
    vector<int> new_array = create_and_fill_array();


    cout << "Srednie: " << calculate_result(new_array);
    return 0;
}


