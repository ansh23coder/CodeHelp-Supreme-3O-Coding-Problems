// https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/

/*
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> frequencyMap;

        for (char c : s) {
            frequencyMap[c]++;
        }

        int maxOdd = 0;
        int minEven = INT_MAX;

        for (auto& pair : frequencyMap) {
            if (pair.second % 2 != 0) {
                maxOdd = max(maxOdd, pair.second);
            } else {
                minEven = min(minEven, pair.second);
            }
        }
            
        return maxOdd - minEven;
    }
};
*/