// C++ program to generate well ordered numbers with k digits.
#include<bits/stdc++.h>
using namespace std;

// number --> Current value of number.
// x --> Current digit to be considered
// k --> Remaining number of digits
void printWellOrdered(int number, int x, int k){
    if (k == 0){
        cout << number << " ";
        return;
    }
    // Try all possible greater digits
    for (int i = (x + 1); i < 10; i++)
        printWellOrdered(number * 10 + 
                         i, i, k - 1);
}
// Generates all well ordered 
// numbers of length k.
void generateWellOrdered(int k){
    printWellOrdered(0, 0, k);
}
// Driver code
int main(){
    int k = 3;
    generateWellOrdered(k);
    return 0;
}
