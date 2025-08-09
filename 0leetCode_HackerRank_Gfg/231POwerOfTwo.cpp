// https://leetcode.com/problems/power-of-two/

#include <iostream>
#include <cmath> // for pow() in cpp
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        for(int i = 0; i <= 30; i++) // 2^30 = 1,073,741,824
        {
            int ans = pow(2, i);
            if(ans == n)
            {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (sol.isPowerOfTwo(n)) {
        cout << n << " is a power of two." << endl;
    } else {
        cout << n << " is NOT a power of two." << endl;
    }

    return 0;
}
