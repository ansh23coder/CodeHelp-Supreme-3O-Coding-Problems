// https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1

/*
Given an array of integers arr[] that is first strictly increasing and then maybe strictly decreasing, find the bitonic point, that is the maximum element in the array.
Bitonic Point is a point before which elements are strictly increasing and after which elements are strictly decreasing.

Note: It is guaranteed that the array contains exactly one bitonic point.

Examples:

Input: arr[] = [1, 2, 4, 5, 7, 8, 3]
Output: 8
Explanation: Elements before 8 are strictly increasing [1, 2, 4, 5, 7] and elements after 8 are strictly decreasing [3].
Input: arr[] = [10, 20, 30, 40, 50]
Output: 50
Explanation: Elements before 50 are strictly increasing [10, 20, 30 40] and there are no elements after 50.
Input: arr[] = [120, 100, 80, 20, 0]
Output: 120
Explanation: There are no elements before 120 and elements after 120 are strictly decreasing [100, 80, 20, 0].
*/

// CODE:
// User function template for C++
class Solution {
  public:
    int findMaximum(vector<int> &arr) {
        // code here
        int low=0, high=arr.size()-1;
        while(low < high){
            int mid = low + (high-low)/2;
            
            if(arr[mid] > arr[mid+1]){
                high = mid;
            }
            else{
                low = mid+1;
            }
        }
        return arr[low];
    }
};