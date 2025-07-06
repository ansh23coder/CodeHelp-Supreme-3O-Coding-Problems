// 

/*
class Solution {
public:
    // Function to check if a number is palindrome
    bool isPalindrome(int num) {
        string s = to_string(num);
        string rev = string(s.rbegin(), s.rend());
        return s == rev;
    }
    
    // Function to reverse a number
    int reverseNum(int num) {
        int rev = 0;
        while (num > 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }
    
    int isSumPalindrome(int n) {
        for (int i = 0; i <= 5; i++) {
            if (isPalindrome(n)) return n;
            int rev = reverseNum(n);
            n = n + rev;
        }
        return -1;
    }
};

*/