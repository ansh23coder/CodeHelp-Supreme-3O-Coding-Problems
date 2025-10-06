// Hollow Half Pyramid
// main logic - if(i == n || j == 1 || j == i)

#include<iostream>
using namespace std;

void halfpyramid(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i == n || j == 1 || j == i) // Check if it's the last row or first column or diagonal
                cout<<"* ";
            else
                cout<<"  "; // Print space for hollow part
            
        }
        cout << endl;
    }
    return;
}

int main(){
    int n;
    cout << "take n: ";
    cin >> n;
    halfpyramid(n); // Call square with n, no need to assign to ans
    return 0;
}
/*
take n: 9
* 
* *
*   *
*     *
*       *
*         *
*           *
*             *
* * * * * * * * *
*/