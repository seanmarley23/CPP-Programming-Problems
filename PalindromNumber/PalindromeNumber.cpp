/*
Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
*/
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    int original = x;
    int reversed = 0;
        
    if(x > 0 && x <= 9){
        return true;
    }
        
    if(x < 0){
        return false;
    }
        
    while(x != 0){
        int remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }
        
    if(reversed == original){
        return true;
    }
    return false;
}

int main(){
    cout << isPalindrome(213) << endl; //Will return 0 as it is false
    cout << isPalindrome(212) << endl; //Will return 1 as it is true
    return 0;
}