// https://www.geeksforgeeks.org/problems/maximize-median-after-doing-k-addition-operation/1

class Solution {
  public:
    int maximizeMedian(vector<int>& arr, int k) {
    // code here
    
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int left = arr[n / 2], right = arr[n / 2] + k;
        int ans = left;
    
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            long long ops = 0;
    
            for (int i = n / 2; i < n; ++i) {
                if (arr[i] < mid){
                    ops += mid - arr[i];
                }
            }
    
            if (ops <= k) {
                ans = mid;
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }
    
        return ans;
    }
};