#include <iostream>
using namespace std;

bool divBy13(string &s) {
    
    // Convert the string to an integer
    int num = stoi(s);
    
    // Check if the number is divisible by 13
    return (num % 13 == 0);
}

int main() {
    string s = "2911285";

    bool isDivisible = divBy13(s);

    if (isDivisible) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

// method2
#include <iostream>
using namespace std;

bool divBy13(string& s) {
    // Stores running remainder
    int rem = 0;

    // Process each digit and compute remainder modulo 13
    for (char ch : s) {
        rem = (rem * 10 + (ch - '0')) % 13;
    }
    
    // Final check for divisibility
    return rem == 0;
}

int main() {
    string s = "2911285";

    if (divBy13(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}