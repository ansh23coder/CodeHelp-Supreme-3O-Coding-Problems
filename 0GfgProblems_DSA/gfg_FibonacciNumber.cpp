// https://www.geeksforgeeks.org/batch/fork-cpp/track/module-recursion-file-handling/problem/fibonacci-series-up-to-nth-term

/*
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        const int MOD = 1e9 + 7;
        vector<int> fib(n + 1);
        
        fib[0] = 0;
        
        if(n >= 1) fib[1] = 1;
        
        for(int i=2; i<=n; ++i){
            fib[i] = (fib[i-1] + fib[i-2]) % MOD;
        }
        return fib;
    }
};
*/ 