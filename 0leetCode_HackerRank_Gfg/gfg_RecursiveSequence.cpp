// https://www.geeksforgeeks.org/batch/fork-cpp/track/module-recursion-file-handling/problem/recursive-sequence1611

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