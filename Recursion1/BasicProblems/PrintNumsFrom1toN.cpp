// Print Numbers from 1 to N

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


// Print Numbers from n to 1
#include <iostream>
using namespace std;

void printNto1(int n) {
    if (n == 0) return;
    cout << n << " ";    // Print while going down
    printNto1(n - 1);
}

int main() {
    int n;
    cin >> n;
    printNto1(n);
}
/*
n = 5 → Output: 5 4 3 2 1
*/