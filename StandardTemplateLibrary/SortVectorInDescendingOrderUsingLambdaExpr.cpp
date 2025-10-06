#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {5, 1, 8, 3, 9, 2};
    sort(v.begin(), v.end(), [] (const int& a, const int& b){
    return a > b;
});
    for(int x : v)
        cout << x << " ";
    return 0;
}
// 9 8 5 3 2 1 