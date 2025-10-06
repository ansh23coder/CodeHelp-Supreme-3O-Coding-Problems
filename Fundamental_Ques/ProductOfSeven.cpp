#include <iostream>
using namespace std;

int productOfSeven(int a, int b, int c){
    if(a != 7 && b != 7 && c != 7){
        return a*b*c;
    }
    else if(b != 7 && c!= 7){
        return b*c;
    }
    else if(c != 7){
        return c;
    }
    else{
        return -1;
    }
}
int main(){
    int a, b, c;
    cout << "enter a, b, c elements: ";
    cin >> a >> b >> c;
    cout << "ans : " << productOfSeven(a, b, c);
    return 0;
}
/*
enter a, b, c elements: 1 7 2
ans : 2
*/