#include <iostream>
using namespace std;

int PriorCount(int arr[], int n) {
    int count = 0;
    int currMax = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > currMax) {
            currMax = arr[i];
            count++;
        }
    }
    return count;
}

int main() {
    int nums[] = {7, 4, 8, 2, 9};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = PriorCount(nums, n);
    cout << result << endl;
    return 0;
}
// 3