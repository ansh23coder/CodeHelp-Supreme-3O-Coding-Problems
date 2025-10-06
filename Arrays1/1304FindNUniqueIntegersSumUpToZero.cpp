// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

// Logic and Solution - 
// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/solutions/7162944/elegant-closed-form-1-liner-solutions-beats-100


class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> res(n);
        res[0] = n * (1 - n) / 2;
        for (int i = 1; i < n; ++i)
            res[i] = i;
        return res;
    }
};