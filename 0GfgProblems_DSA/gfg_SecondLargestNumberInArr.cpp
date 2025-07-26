// https://www.geeksforgeeks.org/problems/second-largest3735/1

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        
        int first = INT_MIN, second = INT_MIN;
        
        if (n < 2) return -1;
        
        for(int i = 0; i < n; i++){
            if(arr[i] > first){
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second && arr[i] < first){
                second = arr[i];
            }
        }
        return second == INT_MIN ? -1 : second;
    }
};