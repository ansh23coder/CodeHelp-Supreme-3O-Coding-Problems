// https://leetcode.com/problems/find-closest-person/

class Solution {
public:
    int findClosest(int x, int y, int z) {
        int dist1 = abs(x - z), dist2 = abs(y - z);
        if (dist1 < dist2) return 1;
        else if (dist1 > dist2) return 2;
        else return 0;
        
    }
};