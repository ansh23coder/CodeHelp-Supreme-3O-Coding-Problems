from functools import cmp_to_key

class Solution:
    def compare(self, a, b):
        return (1 if str(a) + str(b) > str(b) + str(a) else -1)

    def findLargest(self, arr):
        # Sort using custom comparator
        arr.sort(key=cmp_to_key(self.compare), reverse=True)

        # Edge case: if the largest number is 0, return "0"
        if arr[0] == 0:
            return "0"

        # Concatenate all numbers
        return ''.join(map(str, arr))
