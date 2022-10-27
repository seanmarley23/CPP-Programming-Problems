/*
We are given a list nums of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

Return the decompressed list.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> decompressRLElist(vector<int>& nums) {
    int size = 0;
    
    for(int i = 0; i < nums.size(); i += 2){
        size += nums[i];
    }

    vector<int> result;
    
    for(int i = 0; i < nums.size(); i+=2){
        for(int j = 0; j < nums[i]; j++){
            result.push_back(nums[i+1]);
        }
    }
    return result;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6};
    vector<int> result = decompressRLElist(vec); //ANS: 2,4,4,4,6,6,6,6,6,6

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}