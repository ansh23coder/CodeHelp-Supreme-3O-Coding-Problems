// https://leetcode.com/problems/reverse-integer/

/*
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int digit = x % 10;

            if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
}; 
// Initially values of INT_MAX and INT_MIN is INT_MAX = 2147483647   (for 32-bit Integers) & -2147483648   (for 32-bit Integers) respectively.
*/