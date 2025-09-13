// https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/

// solution: https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/solutions/7183852/clean-explanation-implementation-example-walkthrough-c-python-java

class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26], maxVowel = 0, maxConso = 0;
        for(char c : s){
            int i = c - 'a';
            freq[i]++;
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                maxVowel = max(maxVowel, freq[i]);
            }
            else{
                maxConso = max(maxConso, freq[i]);
            }
        }
        return maxVowel + maxConso;
    }
};
