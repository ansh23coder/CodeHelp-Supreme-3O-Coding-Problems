#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastpos = nums.size() - 1;  // Set the last position to the last index
        for (int i = nums.size() - 2; i >= 0; i--) {  // Iterate from second last to first
            if (i + nums[i] >= lastpos) {
                lastpos = i;  // Update the last reachable position
            }
        }
        return lastpos == 0;  // If the last reachable position is 0, return true
    }
};
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << (solution.canJump(nums) ? "True" : "False") << endl;
    return 0;
}
/* 
Enter the number of elements in the array: 6
Enter the elements of the array: 2 3 
1 1 1 4
True
*/