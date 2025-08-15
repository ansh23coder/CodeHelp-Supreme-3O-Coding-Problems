#include <iostream>
using namespace std;

int main() {
    string s;
    int l;

    cout << "Let's take string: ";
    cin.ignore();              // Ignore the leftover newline character from previous input
    getline(cin, s);           // Correct way to take a full line input

    cout << "Enter length l: ";
    cin >> l;

    int cnt = 0;
    int max = 0;

    // Iterate through each character of the string
    for (int i = 0; i < s.length(); i++) {
        if (i % l == 0 && i != 0) {   // Every time we reach the end of a substring
            if (max < cnt) max = cnt;  // Update max if current count is greater
            cnt = 0;                    // Reset counter for the next substring
        }
        if (s[i] == 'a') cnt++;         // Count 'a's in the current substring
    }

    // After the loop, don't forget to check the last part of the string
    if (max < cnt) max = cnt;             // Update max if last part has more 'a's

    cout << "Max number of aqua color (a): " << max << endl;

    return 0;
}
// must remember l size ka set banakr solve krna tha
/*
output:
Let's take string: aaabdaaaauinfknd
Enter length l: 4
Max number of aqua color (a): 4

Let's take string: adgheaaaui
Enter length l: 3
Max number of aqua color (a): 2
*/