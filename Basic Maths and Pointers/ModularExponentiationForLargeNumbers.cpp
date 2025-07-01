// https://www.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1

class Solution {
  public:
    long long int PowMod(long long int x, long long int n, long long int M) {
        // Code here
        if(n == 0){
            return 1 % M;
        }
        
        long long int result = PowMod(x, n/2, M);
        result = (result * result) % M;
        
        if(n % 2 == 1){
            result = (result * x) % M;
        }
        
        return result;
    }
};