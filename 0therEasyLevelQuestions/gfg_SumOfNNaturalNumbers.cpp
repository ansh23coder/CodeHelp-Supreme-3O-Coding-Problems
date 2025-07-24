// https://www.geeksforgeeks.org/problems/reverse-coding2452/1

class Solution {
  public:
	  // method1-------- O(1) time complexity - best approach with 
	  // formula
    // int sumOfNaturals(int n) {
    //     // code here
    //     int ans = n*(n+1) / 2;
    //     return ans;
    // }
    
    // method2--------- O(n) time complexity 
    int sumOfNaturals(int n) {
        // code here
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        return sum;
    }
};
