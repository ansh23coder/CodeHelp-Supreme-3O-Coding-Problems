// almost same logic as above
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = -1, end = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (start == -1) start = i; // First time we find the target
                end = i; // Keep updating till last occurrence
            }
        }
        return {start, end};
    }
};

// Driver code to test
int main() {
    Solution sol;
    vector<int> nums = {1, 7, 7, 8, 8, 9};
    int target = 8;
    vector<int> result = sol.searchRange(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
// [3, 4]