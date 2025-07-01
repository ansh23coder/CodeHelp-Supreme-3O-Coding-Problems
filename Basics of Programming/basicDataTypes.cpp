// https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/copy-from/432949812

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int val;
    long longval;
    char ch;
    float floatval;
    double doubleval;
    
    cin >> val >> longval >> ch >> floatval >> doubleval;
        
    
    printf("%d\n", val);
    printf("%lld\n", longval);
    printf("%c\n", ch);
    printf("%.3f\n", floatval);
    printf("%.9f\n", doubleval);
    
     
    return 0;
}
