#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr, int x) {
    for(int i = 0; i <= arr.size(); i++){
        if(arr[i] == x){
            return i; // ith index
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {11, 92, 35, 43, 0};  
    int x;
    cout << "Check if a number is present in the array: ";
    cin >> x;
    int result = search(arr, x); // function call
    cout << "Array index is " << result << " where it matches.";

    return 0;
}
// Check if a number is present in the array: 92
// Array index is 1 where it matches.