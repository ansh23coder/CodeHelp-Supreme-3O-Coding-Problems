#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "##***";
    int cntHash = 0;
    int cntStar = 0;
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '#'){
            cntHash++;
        } else if(s[i] == '*'){
            cntStar++;
        }        
    } 
    if(cntHash > cntStar) 
        ans = cntHash - cntStar;
    else
        ans = cntStar - cntHash;
    cout << ans;
    return 0;
}
// 1