#include <iostream>
using namespace std;

void reverseString(string &str) {
        int left = 0;
        int right = str.size()-1;

        while(left < right){
            swap(str[left], str[right]);
            left++;
            right--;
        }
    }

int main(){
    int num;
    cout << "enter number: ";
    cin >> num;
    int NegNum = 0;
    
    if(num < 1){
        num = abs(num);
        string str = to_string(num);
        reverseString(str);
        cout << "-" << str;
    }
    else {
        string str = to_string(num);
        reverseString(str);
        cout << str;
    }
}
/*
enter number: -98
89
enter number: 98
89
*/



// //CODE
// #include<iostream>
// using namespace std;
// int reverse(int n)
// {
//     int rev =0;
// 	while(n !=0)
// 	{
// 		int digit =n%10;
//   	 rev = rev*10 + digit;
//    	    n = n/10;
// 	}
// 	   	return rev;

// }
// int main()
// {
// 	int n ;
// 	cout<<"enter number";
// 	cin>>n;
// 	int ans =0;
// 	if(n<0)
// 	{
// 	    int pos =abs(n);
// 		 ans = reverse(pos);
// 		ans = ans *(-1);
// 	}
// 	else
// 	{
// 		 ans = reverse(n);
// 	}
	
// 	cout<<"ans"<<ans;
		
// }
