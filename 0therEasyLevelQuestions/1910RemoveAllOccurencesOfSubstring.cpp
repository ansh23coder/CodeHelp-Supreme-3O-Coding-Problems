// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/

class Solution {
public:
    string removeOccurrences(string full, string pattern) {
        while(full.find(pattern) != string::npos) { 
            // npos -> no position
            full.erase(full.find(pattern), pattern.length());
        }
        return full;
    }
};

// alternative approach -----------
// class Solution {
// public:
//     string removeOccurrences(string full, string pattern) {
//         while (true) {
//             // Search for the pattern using iterators
//             auto it = search(full.begin(), full.end(), pattern.begin(), pattern.end());
//             if (it == full.end()) {
//                 break; // Pattern not found
//             }
//             // Erase the found pattern
//             full.erase(it, it + pattern.length());
//         }
//         return full;
//     }
// };
