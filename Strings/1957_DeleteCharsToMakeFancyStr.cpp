// https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/ 

class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int count = 1;

        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && s[i] == s[i-1]) {
                count++;
            } else {
                count = 1;
            }

            if (count <= 2) {
                result += s[i];
            }
        }
        return result;
    }
}; 
