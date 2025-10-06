// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

/*
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = -1, endingPosition = -1;

        int n = nums.size(); // array size
        for(int i = 0; i < n; i++){ // loop for checking target from starting
            if(nums[i] == target){
                startingPosition = i; // -1 will be equals to index(start)
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(nums[i] == target){
                endingPosition = i; // -1 will also be replaced here with index coming from ending
                break;
            }
        }
        return {startingPosition, endingPosition};
    }
};

*/