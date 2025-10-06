// https://leetcode.com/problems/count-elements-with-maximum-frequency/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0}; // Since nums[i] ranges from 1 to 100
        int maxFreq = 0;

        // Count frequencies and track max frequency
        for (int num : nums) {
            freq[num]++;
            maxFreq = max(maxFreq, freq[num]);
        }

        // Sum all elements with max frequency
        int total = 0;
        for (int i = 1; i <= 100; ++i) {
            if (freq[i] == maxFreq) {
                total += freq[i];
            }
        }

        return total;
    }
};
