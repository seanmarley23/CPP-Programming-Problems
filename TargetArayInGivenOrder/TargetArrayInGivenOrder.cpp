#include <iostream>
#include <vector>
using namespace std;

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> target;
    
    for(int i = 0; i < nums.size(); i++){
        int targetIndex = index[i];
        target.insert(target.begin()+targetIndex, nums[i]);
    }
    
    return target;
}

int main(){
    vector<int> nums = {0,1,2,3,4};
    vector<int> index = {0,1,2,2,1};
    vector<int> result = createTargetArray(nums, index); //ANS: 12435

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}