/*
Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> duplicateZeros(vector<int>& arr) {
    int count = 0;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            arr.insert(arr.begin() + i, 0);
            i++;
            count += 1;
        }
    }
    for(int i = 0; i < count; i++){
        arr.pop_back();
    }

    return arr;
}

int main(){
    vector<int> vec = {1,2,0,3,0,4,5};
    vector<int> vec2 = {0,2,0,0,4,1,5,0,9,8};
    vector<int> result = duplicateZeros(vec); //ANS: 1,2,0,0,3,0,0
    vector<int> result2 = duplicateZeros(vec2); //ANS: 0,0,2,0,0,0,0,4,1,5

    cout << "Result 1: ";
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    cout << endl; 
    cout << "Result 2: ";
    for(int i = 0; i < result2.size(); i++){
        cout << result2[i] << " ";
    }
}