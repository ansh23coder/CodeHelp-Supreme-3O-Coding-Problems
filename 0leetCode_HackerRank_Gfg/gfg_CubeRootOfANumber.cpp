// 

/*
class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        if(n == 0 || n == 1) return n;
        
        int left = 0, right = n;
        while(left <= right){
            long long mid = left + (right - left) / 2;
            long long cube = mid * mid * mid;
            if(cube == n){
                return mid;
            }
            else if(cube < n){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return right;
    }
};
*/