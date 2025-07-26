// https://www.geeksforgeeks.org/batch/fork-cpp/track/module-1-basics-and-control-structures/problem/armstrong-numbers2727

/*
// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int original = n;
        int sum = 0;
        
        while(n > 0){
            int digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;
        }
        return sum == original;
    }
};
*/