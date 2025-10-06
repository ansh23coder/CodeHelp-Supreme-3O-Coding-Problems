#include<iostream>
using namespace std;

void square(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // Print '*' for the border, space for inside
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
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
    int n;
    cout << "take n: ";
    cin >> n;
    square(n); // Call square fn 
    return 0;
}
/*
take n: 7
* * * * * * * 
*           * 
*           * 
*           * 
*           * 
*           * 
* * * * * * *
*/