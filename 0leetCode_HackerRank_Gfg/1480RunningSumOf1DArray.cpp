// https://leetcode.com/problems/running-sum-of-1d-array/

/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int total = 0;
        for(int i = 0; i < nums.size(); i++) {
            total += nums[i];
            ans.push_back(total);
        }
        return ans;
    }
};

*/