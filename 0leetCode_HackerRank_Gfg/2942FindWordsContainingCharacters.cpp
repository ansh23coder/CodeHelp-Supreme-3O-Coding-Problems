// https://leetcode.com/problems/find-words-containing-character/description/

/*
// ****in cpp**** -
class Solution {
public:
    // brute force method -
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> ans;
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                if(words[i][j] == x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }

    // another method using count-
    // vector<int> findWordsContaining(vector<string>& words, char x) {
    //     vector <int> ans;
    //     for(int i = 0; i < words.size(); i++){
    //         if(count(words[i].begin(), words[i].end(), x))
    //             ans.push_back(i);
    //     }
    //     return ans;
    // }
};



// ****in python**** -
class Solution(object):
    def findWordsContaining(self, words, x):
        ans = []
        for i in range(len(words)):
            for j in range(len(words[i])):
                if words[i][j] == x:
                    ans.append(i)
                    break
        return ans



// ****in javascript**** -
var findWordsContaining = function(words, x) {
    let ans = [];
    for(let i = 0; i < words.length; i++){
        for(let j = 0; j < words[i].length; j++){
            if(words[i][j] === x){
                ans.push(i);
                break;
            }
        }
    }  
    return ans;
};
*/