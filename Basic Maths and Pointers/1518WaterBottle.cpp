// https://leetcode.com/problems/water-bottles/

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange){
            int newBottles = numBottles/numExchange;
            int remainBottles = numBottles % numExchange;
            ans = ans + newBottles;
            numBottles = newBottles + remainBottles;
        }
        return ans;
    }
};