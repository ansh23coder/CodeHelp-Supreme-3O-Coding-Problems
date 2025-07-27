#include <iostream>
#include <vector>      // for vector
#include <algorithm>   // for sort
using namespace std;

void sortArr(int a[], char b[], int n) {
    vector<pair<int, char>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({a[i], b[i]});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        a[i] = v[i].first;
        b[i] = v[i].second;
    }
}

int main() {
    int a[] = {3, 1, 2};
    char b[] = {'G', 'E', 'K'};
    int n = 3;

    sortArr(a, b, n);

    // Print the sorted characters
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}
