// https://leetcode.com/contest/weekly-contest-465/problems/restore-finishing-order/description/

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> friendSet(friends.begin(), friends.end());
        vector<int> result;

        for (int id : order) {
            if (friendSet.count(id)) {
                result.push_back(id);
            }
        }

        return result;
    }
};
