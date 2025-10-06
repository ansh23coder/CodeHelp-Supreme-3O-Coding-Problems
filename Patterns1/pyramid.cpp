#include<iostream>
using namespace std;

void pyramid(int n){
    for(int i = 1; i <= n; i++){
        // Print spaces
        for(int j = 1; j <= n - i; j++){
            cout << " ";
        }
        // Print stars
        for(int j = 1; j <= i; j++){
            cout << "* ";
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
take n: 5
    * 
   * *
  * * *
 * * * *
* * * * *
take n: 8
       * 
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
* * * * * * * *
*/