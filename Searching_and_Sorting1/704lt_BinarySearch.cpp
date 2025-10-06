// https://leetcode.com/problems/binary-search/description/

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = (s+e) / 2;

        while(s <= e){
            if(nums[mid] == target){
                return mid;
            }
            if(target > nums[mid]){
                //left me jaoo
                s = mid + 1;
            }
            else if(target < nums[mid]){
                //right me jaoo
                e = mid - 1;
            }
            // yeh jaruri hai
            mid = (s + e) / 2;
        }
        // agar main yaha pahunch gaya, measn elemet nahi hai
        return -1;  
    }
};
*/