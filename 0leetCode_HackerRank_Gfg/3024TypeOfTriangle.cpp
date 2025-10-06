// https://leetcode.com/problems/type-of-triangle/

/*
// cpp --------
class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums[0] + nums[1] <= nums[2]) {
            return "none";
        } 
        else if (nums[0] == nums[1] && nums[1] == nums[2]) { // and
            return "equilateral";
        } 
        else if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) { // or 
            return "isosceles";
        } 
        else {
            return "scalene";
        }
    }
};

// js --------
var triangleType = function (nums) {
    nums.sort((a, b) => a - b);
    if (nums[0] + nums[1] <= nums[2]) {
        return "none";
    } else if (nums[0] === nums[2]) {
        return "equilateral";
    } else if (nums[0] === nums[1] || nums[1] === nums[2]) {
        return "isosceles";
    } else {
        return "scalene";
    }
};

// python3 --------
class Solution:
    def triangleType(self, nums: List[int]) -> str:
        nums.sort()
        if nums[0] + nums[1] <= nums[2]:
            return "none"
        elif nums[0] == nums[2]:
            return "equilateral"
        elif nums[0] == nums[1] or nums[1] == nums[2]:
            return "isosceles"
        else:
            return "scalene"

*/
