#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int BinarySearch(vector<int>& arr, int x) {
    sort(arr.begin(), arr.end());

    
}

int main(){
    vector<int> arr = {11, 92, 35, 43, 0};  
    int x;
    cout << "Check if a number is present in the array: ";
    cin >> x;
    int result = BinarySearch(arr, x); // function call
    if(result != -1){
        cout << "element found at index " << result <<" in the sorted arr" << endl;
    }
    else {
        cout << "not found ni array" << endl;
    }
    return 0;
}
// Check if a number is present in the array: 35
// element found at index 2 in the sorted arr
