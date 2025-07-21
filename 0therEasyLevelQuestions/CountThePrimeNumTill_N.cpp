#include <iostream>
using namespace std;

// Helper function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int CountPrimesTillN(int n) {
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int ans = CountPrimesTillN(n);
    cout << "Number of primes till " << n << " is " << ans << endl;
}
// Enter n: 11
// Number of primes till 11 is 5