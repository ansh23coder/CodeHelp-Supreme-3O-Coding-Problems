// https://www.geeksforgeeks.org/problems/largest-number-formed-from-an-array1117/1

class Solution {
public:
    static bool compare(int a, int b) {
        string s1 = to_string(a);
        string s2 = to_string(b);
        return s1 + s2 > s2 + s1;
    }

    string findLargest(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);

        // Edge case: if the largest number is 0, return "0"
        if (arr[0] == 0) return "0";

        string result = "";
        for (int num : arr) {
            result += to_string(num);
        }
        return result;
    }
};
