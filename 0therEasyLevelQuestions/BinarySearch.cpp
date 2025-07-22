#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;

int BinarySearch(vector<int>& arr, int x) {
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == x){
            return mid;
        } 
        else if(x < arr[mid]){
            right = mid-1;
        } 
        else{
            left = mid+1;
        }
    }
    return -1; // not finded
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
