# https://leetcode.com/problems/reverse-integer/

class Solution:
    def reverse(self, x: int) -> int:
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        ans = 0

        while x != 0:
            digit = int(x % 10) if x > 0 else int(x % -10)
            x = int(x / 10)

            if ans > INT_MAX // 10 or ans < INT_MIN // 10:
                return 0

            ans = ans * 10 + digit

        return ans if INT_MIN <= ans <= INT_MAX else 0
