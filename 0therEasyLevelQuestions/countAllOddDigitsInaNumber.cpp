#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int nums;
//     cout << "enter no: ";
//     cin >> nums;

//     nums = abs(nums);

//     int count = 0;
//     for(int i=0; i < nums.size()-1; i++){
//         if(nums[i] % 2 == 0){
//             count++;
//         }
//         cout<< count; 
//     }
//     return 0;
// }


int main(){
    int n = -1231324;
    int cnt = 0;
    while(n != 0) {
        int digit = n % 10;
        if(digit % 2 != 0) {
            cnt++;
        }
        n /= 10;
    }

    cout << cnt; 
    return 0;
}
// 4
