/*
Program to find the length of the last word in a string where the string is made up of letters and spaces
*/

#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {
    int lastCharacter = s.size() -1;
    int count = 0;
    
    while(s[lastCharacter] == ' '){
        lastCharacter--;
    }
    
    for(int i = lastCharacter; i >= 0; i--){
        if(s[i] != ' '){
            count++;
        }
        if(s[i] == ' '){
            break;
        }
    }
    
    return count;
}

int main(){
    cout << lengthOfLastWord("This is a test sentence") << endl; //Ans: 8
    cout << lengthOfLastWord("  This  is  a  test  sentence  ") << endl; //Ans: 8
}