// https://leetcode.com/problems/pascals-triangle/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) return {};
        if(numRows == 1) return {{1}};

        vector<vector<int>> prevRows = generate(numRows - 1);
        vector<int> newRow (numRows, 1);

        for(int i=1; i<numRows - 1; i++){
            newRow[i] = prevRows.back()[i - 1] + prevRows.back()[i];
        }
        prevRows.push_back(newRow);
        return prevRows;
    }
};
int main(){
    int n;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> n;

    Solution sol;
    vector<vector<int>> result = sol.generate(n);

    for(const auto& row : result){
        for(int val : row){
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Enter number of rows for Pascal's Triangle: 9
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
1 5 10 10 5 1
1 6 15 20 15 6 1 
1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1 
*/
