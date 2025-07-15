// https://www.geeksforgeeks.org/batch/fork-cpp/track/module-recursion-file-handling/problem/recursive-sequence1611

/*
A function F is defined as follows F(n)= (1) +(2*3) + (4*5*6) ... upto n terms (look at the examples for better clarity). Given an integer n, determine the F(n).

Note: As the answer can be very large, return the answer modulo 109+7.

Example 1:
Input: n = 5
Output: 365527
Explanation: 
F(5) = 1 + 2*3 + 4*5*6 + 7*8*9*10 + 11*12*13*14*15 = 365527.
*/
// User function Template for C++
class Solution {
  public:
  const int mod = 1e9 + 7;
  
    long long sequence(int n) {
        // code here
        long long ans = 0;
        int curr = 1;
        
        for(int i = 1; i <= n; i++){
            long long prod = 1;
            for(int j = 0; j < i; ++j){
                prod = (prod * curr) % mod;
                curr++;
            }
            ans = (ans + prod) % mod;
        }
        
        return ans;
    }
};