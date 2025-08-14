#include <iostream>
using namespace std;

void print1toN(int n) {
    if (n == 0) return; // Base case
    print1toN(n - 1);   // Recursive call
    cout << n << " ";   // Printing on unwinding
}

int main() {
    int n;
    cin >> n;
    print1toN(n);
}
/*
n = 5 → Output: 1 2 3 4 5
*/