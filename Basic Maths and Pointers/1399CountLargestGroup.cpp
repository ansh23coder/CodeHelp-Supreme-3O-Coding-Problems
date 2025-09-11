// https://leetcode.com/problems/count-largest-group/

// solution or logic: https://leetcode.com/problems/count-largest-group/solutions/6661843/count-largest-group

class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> digitSumCount;
        int maxSize = 0;

        // Count digit sums for numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            int sum = 0, num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            digitSumCount[sum]++;
            maxSize = max(maxSize, digitSumCount[sum]);
        }

        // Count how many groups have the largest size
        int count = 0;
        for (const auto& [key, value] : digitSumCount) {
            if (value == maxSize) {
                count++;
            }
        }

        return count;
    }
};
