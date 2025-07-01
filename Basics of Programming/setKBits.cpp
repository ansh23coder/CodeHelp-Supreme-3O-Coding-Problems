// https://www.geeksforgeeks.org/problems/set-kth-bit3724/1

/*
class Solution {
  public:
    int setKthBit(int n, int k) {
        // Code here
        // calculate the mask to set the kth bit
        int mask = 1 << k;
        // use bitwise OR operation to set the kth bit
        return n | mask;
    }
};
*/