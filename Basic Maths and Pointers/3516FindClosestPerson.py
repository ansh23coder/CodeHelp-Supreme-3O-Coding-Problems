#  https://leetcode.com/problems/find-closest-person/

class Solution(object):
    def findClosest(self, x, y, z):
        """
        :type x: int
        :type y: int
        :type z: int
        :rtype: int
        """
        dist1 = abs(x - z)
        dist2 = abs(y - z)

        if dist1 < dist2:
            return 1
        elif dist2 < dist1:
            return 2
        else:
            return 0