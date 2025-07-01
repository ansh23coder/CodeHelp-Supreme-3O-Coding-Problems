// https://leetcode.com/problems/two-sum/

/*
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> complementMap;

//         for (int i = 0; i < nums.size(); ++i) {
//             int complement = target - nums[i];
//             if (complementMap.find(complement) != complementMap.end()) {
//                 return {complementMap[complement], i};
//             }
//             complementMap[nums[i]] = i;
//         }

//         return {};
//     }
// };

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};

*/