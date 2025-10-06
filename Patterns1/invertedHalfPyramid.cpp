#include<iostream>
using namespace std;

void halfpyramid(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout<<"* ";
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
take n: 8
* * * * * * * 
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/