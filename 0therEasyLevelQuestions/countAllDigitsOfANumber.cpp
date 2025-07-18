#include <bits/stdc++.h>
using namespace std;

/*
void countDigits(int n){
    n = abs(n);

    string str = to_string(n);
    int count = str.length();
    cout << count;
    
};
int main(){
    int n;
    countDigits(-123);
    return 0;
}
*/

// method 2:
int main(){
    int n;
    int cnt = 0;
    cout << "enter no. : " << endl;
    cin >> n;

    if(n == 0){
        cnt = 1;
    }
    else n = abs(n);
    
    while(n != 0) {
        cnt++;
        n = n/10;
    }
    cout << cnt << endl;
    return 0;
}