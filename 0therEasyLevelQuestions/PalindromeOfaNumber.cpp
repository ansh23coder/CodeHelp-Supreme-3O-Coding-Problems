#include <iostream>
using namespace std;

// not true in 0123210 case-------------
// bool PalindromeNumber(int num) {
//     int original = num;  // Store the original number to compare later
//     int reversed = 0;    // This will hold the reversed number
    
//     while (num > 0) {
//         int digit = num % 10;  // Get the last digit
//         reversed = reversed * 10 + digit;  // Build the reversed number
//         num /= 10;  // Remove the last digit from num
//     }

//     return original == reversed;  // Compare original number with reversed number
// }

// int main() {
//     int num;
//     cout << "Enter number: ";
//     cin >> num;

//     if (PalindromeNumber(num)) {
//         cout << "True";  // The number is a palindrome
//     } 
//     else {
//         cout << "False";  // The number is not a palindrome
//     }
// }
// Enter number: 0123210
// False

// true-------------
bool PlaindromeNum(const string& num){
    int l = 0;
    int r = num.size()-1;

    while(l < r){
        if (num[l] != num[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}
int main(){
    string num;
    cout << "enter number: ";
    cin>>num;

    if(PlaindromeNum(num)){
        cout << "True";
    }
    else{
        cout << "False";
    }
}
// enter number: 011232110
// True
