// https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1


class Solution {
public:
    int missingNum(vector<int>& arr) {
        int n = arr.size() + 1;
        
        long long total = (long long)n * (n + 1) / 2;
        
        long long sum = 0;
        for (int num : arr) {
            sum += num;
        }
        return (int)total - sum;
    }
};