// https://leetcode.com/problems/search-a-2d-matrix/

/*
class Solution {
public:
    // first logic --
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == target)
                    return true;
            }
        }
        return false;
    }

    // another logic --
    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     int rows = matrix.size();
    //     int cols = matrix[0].size();
        
    //     int low = 0;
    //     int high = rows * cols - 1;
        
    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;
    //         int midVal = matrix[mid / cols][mid % cols];
            
    //         if (midVal == target) {
    //             return true;
    //         } else if (midVal < target) {
    //             low = mid + 1;
    //         } else {
    //             high = mid - 1;
    //         }
    //     }
    //     return false;
    // }
};

*/