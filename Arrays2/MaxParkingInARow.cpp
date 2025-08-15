// 2D Array or Matrix problem on "Maximum Parking in a Row"

#include<iostream>
#include<vector>
using namespace std;

int rowWithMaxOnes(const vector<vector<int>> &m, int r, int c){
    int maxOnes = 0;
    int rowIndex = 0;

    for(int i=0; i<r; i++){
        int cntOnes = 0;
        for(int j=0; j<c; j++){
            if(m[i][j] == 1){
                cntOnes++;
            }
        }
        if(cntOnes > maxOnes){
            maxOnes = cntOnes;
            rowIndex = i+1; 
        }
    }
    return rowIndex; 
}
int main(){
    int r, c;
    cin >> r >> c;

    vector<vector<int>> m(r, vector<int>(c)); 

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }
    // Call function
    int result = rowWithMaxOnes(m, r, c);

    cout << result << " -> Row " << result << " has maximum number of 1's" << endl;
    return 0;
}
/*
3
3
0 0 0
1 0 1 
1 1 1 
3 -> Row 3 has maximum number of 1's
*/
