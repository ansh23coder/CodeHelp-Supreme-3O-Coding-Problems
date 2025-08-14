#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n == 0) return 0; // base case
    return n + sumOfN(n - 1); // recursive

}
int main(){
    int n;
    cout << "enter n: ";
    cin >> n;
    cout << "Sum = " << sumOfN(n);
    return 0;
}
/*
enter n: 6
Sum = 21
*/
/*
dry run -
sum(4) = 4 + sum(3)
       = 4 + (3 + sum(2))
       = 4 + (3 + (2 + sum(1)))
       = 4 + (3 + (2 + (1 + 0)))
       = 10

*/
