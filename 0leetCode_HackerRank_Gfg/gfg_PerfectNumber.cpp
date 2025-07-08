// https://www.geeksforgeeks.org/batch/fork-cpp/track/module-1-basics-and-control-structures/problem/perfect-number3759 

/*
class Solution {
  public:
    int isPerfect(int N) {
        // code here
        int sum = 0;
        int temp = N;
        while(temp > 0){
            int digit = temp % 10;
            int factorial = 1;
            for(int i = 1; i <= digit; i++){
                factorial *= i;
            }
            sum += factorial;
            temp /= 10;
        }
        return (sum == N) ? 1 : 0; 
    }
};

*/