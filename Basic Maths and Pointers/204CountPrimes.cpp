// https://leetcode.com/problems/count-primes/

/*

class Solution{
public:
    int countPrimes(int n){
        // base case
        if(n == 0) return 0;

        vector<bool> prime(n, true);

        // all are prime markes already.
        prime[0] = prime[1] = false; // default case

        // check from here
        int ans = 0;
        for(int i = 2; i < n; i++){ // starts from 2 to n
            if(prime[i]){
                ans++;
                int j = 2 * i; 
                while(j < n){
                    prime[j] = false;
                    j += i; // j = j+i;
                }
            }
        }
        return ans;
    }
};

*/