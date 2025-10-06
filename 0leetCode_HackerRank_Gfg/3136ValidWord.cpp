// https://leetcode.com/problems/valid-word/


/*
class Solution {
public:
    bool isValid(string word) {
        int n = word.length();
        if( n < 3 ) return false;

        int vowels = 0, consonants = 0;
        string vowelList = "aeiouAEIOU";

        for(char c : word){
            if(isalpha(c)){
                if(vowelList.find(c) != string :: npos){
                    vowels++;
                }
                else{
                    consonants++;
                }
            } 
            else if (!isdigit(c)){
                return false;
            }
        }
        return vowels >= 1 && consonants >= 1;
    }
};
*/