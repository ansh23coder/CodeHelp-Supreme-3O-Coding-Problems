https://leetcode.com/problems/unique-number-of-occurrences/description/`

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int i = 0; i < arr.size(); i++) { // Count frequencies
            freq[arr[i]]++;
        }

        unordered_set<int> seenFreq; // To check for uniqueness

        for(auto it = freq.begin(); it != freq.end(); ++it){
            if(seenFreq.count(it->second)){
                return false;
            }
            seenFreq.insert(it -> second);
        }
        return true;
    }
};
