/*
Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.

For example, flipping [1,1,0] horizontally results in [0,1,1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

For example, inverting [0,1,1] results in [1,0,0].
*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    
    int x = image.size();
    int y = image[0].size();
    
    //flipping horizontally
    for(int i = 0; i < x; i++){
        int length = image[i].size();
        for(int j = 0; j < length-1; j++){
            int temp = image[i][j];
            image[i][j] = image[i][length-1];
            image[i][length-1] = temp;
            length--;
        }
    }
    
    //inverting
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(image[i][j] == 0){
                image[i][j] = 1;
            }
            else if(image[i][j] == 1){
                image[i][j] = 0;
            }
        }
    }
    return image;
}


int main(){

    vector<vector<int>> image = {{0,1,1},{0,1,0},{0,0,0}};
    vector<vector<int>> result = flipAndInvertImage(image); //ANS: {{0,0,1},{1,0,1},{0,0,0}}

    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}