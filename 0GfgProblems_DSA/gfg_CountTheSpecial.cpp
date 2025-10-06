// https://www.geeksforgeeks.org/batch/fork-cpp/track/module-2-arrays-and-strings/problem/count-the-specials

class Solution {
  public:
    int countSpecials(int k, vector<int> &arr) {
        // Your code goes here.
        int targetFreq = arr.size() / k;
        
        unordered_map<int, int> freq;
        
        for(int num : arr){
            freq[num]++;
        }
        int count = 0;
        
        for(auto &entry : freq){
            if(entry.second == targetFreq){
                count++;
            }
        }
        
        return count;
    }
};