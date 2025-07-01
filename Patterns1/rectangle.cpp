#include<iostream>
using namespace std;

void square(int n){
    int r, c;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<=n+2; j++){
            cout<<"* ";
        }
        cout << endl;
    }
    return;
}

int main(){
    int n;
    cout << "take n:";
    cin >> n;
    square(n); // Call square with n, no need to assign to ans
    return 0;
}
/*
take n:5
* * * * * * * * 
* * * * * * * * 
* * * * * * * * 
* * * * * * * * 
take n:13
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * * 
*/