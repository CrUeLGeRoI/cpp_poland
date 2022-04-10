#include <iostream>
#include <vector>
using namespace std;

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

vector<int> double_array(vector<int> array){
    vector<int> new_array;
    for (int i = 0; i < array.size(); i++)
    {
        new_array.push_back(array[i] * 2);
    }
    return new_array;
}

void parse_array(vector<int> array){
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << "\n";
    }
}

int main(){
    vector<int> array = create_and_fill_array();
    parse_array(double_array(array));
    return 0;
}