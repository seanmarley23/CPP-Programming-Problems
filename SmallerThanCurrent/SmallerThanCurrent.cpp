#include <iostream>
#include <vector>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> result;
    
    for(int i = 0; i < nums.size(); i++){
        int count = 0;
        for(int j = 0; j < nums.size(); j++){
            if (nums[i] > nums[j]){
                count++;
            }
        }
        result.push_back(count);
    }
    return result;
}

int main(){
    vector<int> vec = {8,1,2,2,3};
    vector<int> result = smallerNumbersThanCurrent(vec); //ANS: 4,0,1,1,3

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}