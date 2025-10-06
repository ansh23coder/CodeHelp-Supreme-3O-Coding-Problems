// https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

// hashing: O(n) and O(n)
// class Solution {
//   public:
//     vector<int> findDuplicates(vector<int>& arr) {
//         // code here
//         int n = arr.size();
//         vector<int> freq(n+1, 0), ans;
        
//         for(int x : arr){
//             freq[x]++;
//             if(freq[x] == 2) ans.push_back(x);
//         }
//         return ans;
//     }
// }; 

// Inplace marking - optimal solution: O(n) and (1)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            int idx = abs(arr[i]) - 1;
            if (arr[idx] < 0) {
                ans.push_back(abs(arr[i]));
            } else {
                arr[idx] = -arr[idx];
            }
        }
        return ans;
    }
};
/*
Example Walkthrough
Input: [2, 3, 1, 2, 3]

i=0 → val=2 → mark index 1 → arr = [2, -3, 1, 2, 3]

i=1 → val=3 → mark index 2 → arr = [2, -3, -1, 2, 3]

i=2 → val=1 → mark index 0 → arr = [-2, -3, -1, 2, 3]

i=3 → val=2 → index=1 already negative → duplicate = 2

i=4 → val=3 → index=2 already negative → duplicate = 3

Output: [2, 3]
*/