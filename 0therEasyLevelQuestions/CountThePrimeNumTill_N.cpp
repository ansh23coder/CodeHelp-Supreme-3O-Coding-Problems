#include <iostream>
using namespace std;

int CountTillN(int n){
    int count = 0;
    if(n==0 || n==1) cout << "false number";

    for(int i=1; i<=n; i++){
        if(n % i == 0){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int ans = CountTillN(n);
    cout << "Number of Primes till" << " " << n << " "<< "is" << " " << ans;
}