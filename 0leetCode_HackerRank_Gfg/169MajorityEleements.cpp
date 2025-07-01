// https://leetcode.com/problems/majority-element/

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // by using - Boyer-Moore Majority Vote algorithm
        int count = 0;
        int candidate;
        for(int num: nums){
            if(count == 0){
                candidate = num;
                count = 1;
            }
            else if(candidate == num){
                count++;
            }
            else{
                count--;
            }
        } 
        return candidate;
    }
};
// This algorithm works by essentially maintaining a counter for the majority element. If the counter is 0, we set the current element as the majority element and increment the counter. If the current element is the same as the majority element, we increment the counter. If the current element is different from the majority element, we decrement the counter.
*/