// https://www.geeksforgeeks.org/problems/powx-n/1


class Solution {
public:
    double power(double b, int e) {
        // Handle negative exponent
        long long exp = e; // Use long long to avoid overflow for INT_MIN
        bool isNegative = exp < 0;
        exp = abs(exp);

        double result = 1.0;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result *= b;
            }
            b *= b;
            exp /= 2;
        }

        return isNegative ? 1.0 / result : result;
    }
};
