/*
There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> result;
    int numberOfKids = candies.size();
    
    for(int i = 0; i < numberOfKids; i++){
        int givenExtraCandy = candies[i] + extraCandies;
        int count = 0;
        for(int j = 0; j < numberOfKids; j++){
            if(i == j){
                continue;
            }
            if(givenExtraCandy >= candies[j]){
                count++;
            }
        }
        if (count == numberOfKids-1){
            result.push_back(true);
        }
        else{
            result.push_back(false);
        }
    }
    return result;
}

int main(){
    vector<int> candies = {2,3,5,1,3};
    int extraCandy = 3;
    vector<bool> result = kidsWithCandies(candies, extraCandy); //ANS: 1,1,1,0,1 (True, True, True, False, True)

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}