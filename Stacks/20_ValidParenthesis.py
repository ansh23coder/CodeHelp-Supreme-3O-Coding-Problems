# https://leetcode.com/problems/valid-parentheses/

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []  # Stack to hold opening brackets
        
        for ch in s:
            # Push opening brackets to stack
            if ch in '([{':
                stack.append(ch)
            else:
                # If stack is empty or top does not match closing bracket, return False
                if not stack:
                    return False
                
                top = stack[-1]
                if (ch == ')' and top == '(') or (ch == ']' and top == '[') or (ch == '}' and top == '{'):
                    stack.pop()
                else:
                    return False
        
        # If stack is empty at end, all brackets matched correctly
        return not stack
