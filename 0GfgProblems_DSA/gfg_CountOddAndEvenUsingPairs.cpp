// https://www.geeksforgeeks.org/problems/count-odd-even/1

class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
        // (i, j) = pairing case 
        // i = count of odd ele in arr
        // j = count of even ele in arr
        
        int cntEven = 0;
        int cntOdd = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] % 2 == 0){
                cntEven++;
            } else {
                cntOdd++;
            }
        }
        return {cntOdd, cntEven};
    }
};