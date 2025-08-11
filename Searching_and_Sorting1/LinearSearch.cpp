#include <iostream>
#include <vector>
using namespace std;

// Function to perform linear search
int linearSearch(const vector<int>& arr, int targetVal) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == targetVal) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    vector<int> arr = {3, 7, 2, 9, 5};
    int targetVal = 9;
    int result = linearSearch(arr, targetVal);

    if (result != -1) {
        cout << "Value " << targetVal << " found at index " << result << endl;
    } else {
        cout << "Value " << targetVal << " not found" << endl;
    }
    return 0;
}
// output:
// Value 9 found at index 3