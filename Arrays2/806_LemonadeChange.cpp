// https://leetcode.com/problems/lemonade-change/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for (int i = 0; i < bills.size(); i++) {
            if (bills[i] == 5) {
                five++;
            } 
            else if (bills[i] == 10) {
                if (five > 0) {
                    five--;
                    ten++;
                } else {
                    return false;
                }
            } 
            else { // when bill is 20
                if (ten > 0 && five > 0) {
                    ten--;
                    five--;
                } 
                else if (five >= 3) {
                    five -= 3;
                } 
                else {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int> bills = {5, 5, 5, 10, 20}; // sample input
    if (s.lemonadeChange(bills)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
