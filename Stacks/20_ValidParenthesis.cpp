// https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;  // Use consistent variable names
        
        for (char ch : s) {  // Corrected loop syntax
            if (ch == '(' || ch == '[' || ch == '{') {
                stk.push(ch);
            } else {
                if (stk.empty()) return false;  // If the stack is empty, it's invalid
                char top = stk.top();
                if ((ch == ')' && top == '(') || 
                    (ch == ']' && top == '[') || 
                    (ch == '}' && top == '{')) {
                    stk.pop();  // Properly pop the stack after matching brackets
                } else {
                    return false;  // Mismatched brackets
                }
            }
        }
        return stk.empty();  // If the stack is empty, all brackets are matched
    }
};

int main() {
    Solution solution;
    string s;  // Test case
    
    // Asking the user for input
    cout << "Enter a sequence of brackets: ";
    cin >> s;

    // Output the result
    if (solution.isValid(s)) {
        cout << "Valid" << endl;
    } 
    else {
        cout << "Invalid" << endl;
    }

    return 0;
}
/*
Enter a sequence of brackets: {[]()]
Invalid

Enter a sequence of brackets: {[()]}
Valid
*/

// ANother solution : 
