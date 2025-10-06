// https://www.geeksforgeeks.org/problems/factorial5739/1

class Solution {
  public:
    int factorial(int n) {
        // code here
        int result = 1;
        
        for(int i = 1; i <= n; i++){
            result *= i;
        }
        return result;
    }
};