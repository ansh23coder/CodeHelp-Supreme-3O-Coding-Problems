// notion :
#include <iostream>
using namespace std;

char fun(char arr[], int n){
    int freq[52] = {0};

    for(int i=0; i<n; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            freq[arr[i]-'a']++;
        }
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            freq[arr[i]-'a'+26]++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            if(freq[arr[i]-'a']%2 != 0){ 
                return arr[i];
            }
        }
        else if(arr[i] >= 'A' && arr[i] <= 'Z'){
            if(freq[arr[i]-'A'+26]%2 != 0){
                return arr[i];
            }
        }
    }
    return '\0';
}
int main(){
    int n;
    cout << "n: ";
    cin >> n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    char ans = fun(arr, n);
    if(ans != '\0'){
        cout << ans << endl;
    }
    else{
        cout << "All are even" << endl;
    }
    return 0;
}
/*
n: 4
A an T
a

n: 5
A D g H J
g

n: 5
a g a Y I k
g
*/