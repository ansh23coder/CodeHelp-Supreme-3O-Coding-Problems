// https://www.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countLessEqual(vector<int>& row, int target) {
    return upper_bound(row.begin(), row.end(), target) - row.begin();
}

int findMedian(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    int low = 1, high = 2000;

    while (low < high) {
        int mid = (low + high) / 2;
        int count = 0;

        for (int i = 0; i < n; i++) {
            count += countLessEqual(matrix[i], mid);
        }

        if (count <= (n * m) / 2)
            low = mid + 1;
        else
            high = mid;
    } 
    return low;
}
