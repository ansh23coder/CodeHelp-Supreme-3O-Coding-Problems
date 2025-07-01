// https://leetcode.com/problems/rotate-array/

/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); // handle cases where k is greater than nums.size()
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());

    }
};
*/