// https://leetcode.com/contest/weekly-contest-466/problems/minimum-operations-to-equalize-array/


class Solution {
public:
    int minOperations(vector<int>& nums) {
        // If all elements are equal, no operation is needed
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[0]) {
                return 1; // One operation is enough to equalize
            }
        }
        return 0; // Already equal
    }
};
