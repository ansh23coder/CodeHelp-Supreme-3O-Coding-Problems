// https://leetcode.com/problems/two-sum/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

/*
// ---------- simple method ----------
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
// ---------another method using "unordered_map"---------
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complementMap;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (complementMap.find(complement) != complementMap.end()) {
                return {complementMap[complement], i};
            }
            complementMap[nums[i]] = i;
        }

        return {};
    }
};
*/

vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int, int> m;
    for(int i=0; i<nums.size(); i++){
        int rem = target - nums[i];

        if(m.find(rem) != m.end()){
            return {m[rem], i};
        }
        m[nums[i]] = i;
    }
    return {};
}
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    for(int index : ans){
        cout<< index << " ";
    }
    cout << endl;
    return 0;
}