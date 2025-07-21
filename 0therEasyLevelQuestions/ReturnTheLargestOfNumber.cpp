#include <bits/stdc++.h>
using namespace std;

int maxDigit(int num) {
    string newStr = to_string(num);
    int maxDigit = 0;

    for(int i=0; i<newStr.size(); i++){
        int digit = newStr[i] - '0'; // char to str
        if(digit > maxDigit){
            maxDigit = digit;
        }
    }
    
    return maxDigit;
}


int main(){
    int num; // 123
    cout << "enter number: ";
    cin >> num;
    
    int ans = maxDigit(num);
    cout << "Max number: " << ans;
}
/*
enter number: 123654
Max number: 6
*/

