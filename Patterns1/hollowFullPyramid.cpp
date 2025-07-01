#include<iostream>
using namespace std;

void pyramid(int n){
    
// Print spaces in pyramid pattern
// take n: 4
//    * 
//   * *
//  *   *
// * * * *
    // Print spaces
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        // Print stars
        for(int j = 1; j <= i; j++){
            if(i == n || j == 1 || j == i) // Check if it's the last row or first column or diagonal
                cout << "* ";
            else
                cout << "  "; // Print space for hollow part{
            }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "take n: ";
    cin >> n;
    pyramid(n); // Call square with n, no need to assign to ans
    return 0;
}
/*
take n: 7
      * 
     * *
    *   *
   *     *
  *       *
 *         *
* * * * * * *
*/