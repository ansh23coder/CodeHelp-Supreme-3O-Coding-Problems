// https://www.geeksforgeeks.org/problems/majority-vote/1 

class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int n = arr.size();
        unordered_map<int, int> frequencyMap;

        // Count the frequency of each element
        for (int num : arr) {
            frequencyMap[num]++;
        }

        // Step 2: Collect elements whose frequency is greater than n/3
        vector<int> result;
        
        for (const auto& pair : frequencyMap) {
            if (pair.second > n / 3) {
                result.push_back(pair.first);
            }
        }

        // Step 3: Sort the result array
        sort(result.begin(), result.end());

        return result;
    }
};