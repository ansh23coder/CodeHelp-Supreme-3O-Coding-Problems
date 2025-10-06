# https://leetcode.com/problems/maximum-69-number/

class Solution:
    def maximum69Number (self, num: int) -> int:
        s = list(str(num))
        for i in range(len(str)):
            if s[i] == '6':
                s[i] = '9'
                break
        return int(''.join(s))
    