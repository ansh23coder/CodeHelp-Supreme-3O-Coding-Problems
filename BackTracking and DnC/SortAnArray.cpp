// https://leetcode.com/problems/sort-an-array/

// using *Priority Queue*
/*
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> p;

        for(int i=0; i<nums.size(); i++)
            p.push(nums[i]);
        
        for(int i=nums.size()-1; i>=0; i--){
            nums[i] = p.top();
            p.pop();
        }
        
        return nums;
    }
};
*/