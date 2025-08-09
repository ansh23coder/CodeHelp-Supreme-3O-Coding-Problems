// https://leetcode.com/problems/sum-of-two-integers/

class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0){
            int carry = a & b; // carry bits
            a = a ^ b; // sum without carry
            b = carry << 1;      // Shift carry for next addition
        }
        return a;
    }
};