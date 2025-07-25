// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) { 
        int mini = prices[0];
        int profit = 0;
    
        for(int i=1;i<prices.size();i++){
            int cost = prices[i] - mini;
            profit = max(profit,cost);
            mini = min(prices[i],mini);
        }
        return profit;
    }
};

// method 2:
// class Solution {
// public:
//     void maxProfitFinder(vector<int>& prices, int i, int& minPrice, int& maxProfit) {
//         // Base case: if `i` is out of bounds, stop recursion
//         if (i >= prices.size()) return;
        
//         // Solve for one case
//         if (prices[i] < minPrice) minPrice = prices[i];
//         int todayProfit = prices[i] - minPrice;
//         if (todayProfit > maxProfit) {
//             maxProfit = todayProfit;
//         }

//         // Recursion will handle the rest
//         maxProfitFinder(prices, i + 1, minPrice, maxProfit);
//     }

//     int maxProfit(vector<int>& prices) {
//         int minPrice = INT_MAX;
//         int maxProfit = 0;
//         maxProfitFinder(prices, 0, minPrice, maxProfit);
//         return maxProfit;
//     }
// };
