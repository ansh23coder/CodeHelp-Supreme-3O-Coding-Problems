// https://workat.tech/problem-solving/practice/reverse-array

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
	// for taking input of n no. of arrays
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	// for reversing the input arrays
	for(int i=0; i<n/2; i++){
		swap(arr[i], arr[n-i-1]);
	}
	// printing the reverse arrays
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}