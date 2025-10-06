#include<iostream>
// #include <bits/std++.h> 
// This is not needed in C++11 and later
using namespace std;

void hollowRectangle(int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            // Print '*' for the border, space for inside
            if(i == 0 || i == rows-1 || j == 0 || j == cols-1){
                cout << "* ";
            }   
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main(){
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    hollowRectangle(rows, cols); // Call hollowRectangle function
    return 0;
}
/*
Sample Input/Output:
Enter rows and columns: 4 7
* * * * * * * 
*           * 
*           * 
* * * * * * *
*/