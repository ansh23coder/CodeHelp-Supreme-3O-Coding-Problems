// Square Pattern: length and breadth are same

#include<iostream>
using namespace std;

void square(int n){
    int r, c;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
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
    square(n); // Call square with n, no need to assign to ans
    return 0;
}
/*
take n:10
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
*/