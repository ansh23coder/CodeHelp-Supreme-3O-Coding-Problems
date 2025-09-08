// https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/

// solution - https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/solutions/7153054/convert-integer-to-the-sum-of-two-no-zero-integers


class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int A=0; A<n; A++){
            int B = n - A;
            if((to_string(A) + to_string(B)).find('0') == string::npos){
                return {A, B};
            }
        }
        return {};
    }
};
