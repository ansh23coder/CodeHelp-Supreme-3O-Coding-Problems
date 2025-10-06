// https://leetcode.com/problems/valid-anagram/

#include <algorithm> // for sort
#include <string>    // for string

// method1--------- (mylogic) ---------
// class Solution {
// public:
//     bool isAnagram(std::string s, std::string t) {
//         int s1 = s.size();
//         int s2 = t.size();

//         if (s1 != s2) return false; 

//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         for (int i = 0; i < s1; i++) {
//             if (s[i] != t[i]) {     
//                 return false;
//             }
//         }
//         return true;
//     }
// };

// method2----------
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.size() != t.size()) 
//             return false;
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         return s == t;
//     }
// };

// method3----------
class Solution{
public:
    bool isAnagram(string s, string t){
        int freqTable[256] = {0};

        for(int i=0; i<s.size(); i++){
            freqTable[s[i]]++;
        }

        for(int i=0; i<t.size(); i++){
            freqTable[t[i]]--;
        }

        for(int i=0; i<256; i++){
            if(freqTable[i] != 0){
                return false;
            }
        }
        return true;
    }
};
