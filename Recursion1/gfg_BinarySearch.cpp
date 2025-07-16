// https://www.geeksforgeeks.org/problems/binary-search-1587115620/11


class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        
        int low = 0, high = arr.size() - 1;
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == k) {
                result = mid;        
                high = mid - 1;
            } 
            else if (arr[mid] < k) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        return result;
    }
};
